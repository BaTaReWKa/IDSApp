#include "idsapp.h"
#include "ui_idsapp.h"
#include "House.h"
#include "Sensor.h"
#include <QVector>
#include <QString>
#include <QRegularExpression>
#include <QString>
#include <QListWidget>
#include <QListWidgetItem>
#include <QMessageBox>
#include <QJsonArray>
#include <QJsonObject>
#include <QFile>
#include <QCloseEvent>
#include <QNetworkRequest>
#include <QNetworkAccessManager>
#include <QDesktopServices>
#include <QUrl>
#include <QUrlQuery>

IDSapp::IDSapp(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::IDSapp)
// Конструктор формы
{
    ui->setupUi(this);
    loadDataFromFile();
    initializeApp();
    serialPort = new QSerialPort(this);
    sensorTimer = new QTimer(this);
    weatherManager = new QNetworkAccessManager(this);
    connect(weatherManager, &QNetworkAccessManager::finished, this, &IDSapp::onWeatherDataReceived);
    fetchWeather();

    ui->ListOfAddresses->setContextMenuPolicy(Qt::CustomContextMenu);
    connect(ui->ListOfAddresses, &QListWidget::customContextMenuRequested, this, &IDSapp::showAddressContextMenu);
    ui->ListOfSensors->setContextMenuPolicy(Qt::CustomContextMenu);
    connect(ui->ListOfSensors, &QListWidget::customContextMenuRequested, this, &IDSapp::showSensorContextMenu);
    connect(ui->LoadAddress, &QPushButton::clicked, this, &IDSapp::AddAddress);
    connect(ui->ListOfAddresses, &QListWidget::itemSelectionChanged, this, &IDSapp::selectedAddress);
    connect(ui->SaveData, &QPushButton::clicked, this, &IDSapp::saveDataToFile);
    connect(ui->ConnectSensor, &QPushButton::clicked, this, &IDSapp::connectSensor);
    connect(sensorTimer, &QTimer::timeout, this, &IDSapp::readSensorData);
    connect(ui->ListOfSensors, &QListWidget::itemSelectionChanged, this, &IDSapp::onSensorSelected);
}

IDSapp::~IDSapp()
{
    delete ui;
}

// При открытии приложения
void IDSapp::initializeApp()
{

}

// Подключение датчика
void IDSapp::connectSensor()
{
    serialPort->setPortName("COM11");
    serialPort->setBaudRate(QSerialPort::Baud9600);
    serialPort->setDataBits(QSerialPort::Data8);
    serialPort->setParity(QSerialPort::NoParity);
    serialPort->setStopBits(QSerialPort::OneStop);
    serialPort->setFlowControl(QSerialPort::NoFlowControl);

    if (serialPort->open(QIODevice::ReadOnly)) {
        sensorTimer->start(2000);
    } else {
        QMessageBox::critical(this, "Ошибка подключения", serialPort->errorString());
    }
}

// Валидация адреса
bool IDSapp::ValidateAddress(const QString& address)
{
    QRegularExpression regex(R"(^ул\.\s[А-Яа-яЁё]+(?:\s[А-Яа-яЁё]+)*,\s\d+[А-Яа-яЁё]?$)");
    if (!regex.match(address).hasMatch())
        return false;

    for (int i = 0; i < ui->ListOfAddresses->count(); ++i)
    {
        QListWidgetItem* item = ui->ListOfAddresses->item(i);
        if (!item) continue;

        QString existingAddr = item->text();
        if (QString::compare(existingAddr, address, Qt::CaseInsensitive) == 0)
            return false;
    }

    return true;
}

// При закрытии приложения
void IDSapp::closeEvent(QCloseEvent* event)
{
    saveDataToFile();
    event->accept();
}

// Добавление адреса
void IDSapp::AddAddress()
{
    QString address = ui->AddressInput->text().trimmed();
    QString email = ui->EmailUKInput->text().trimmed();

    if (address.isEmpty() || email.isEmpty())
    {
        QMessageBox::warning(this, "Ошибка", "Пожалуйста, введите адрес и email УК.");
        return;
    }

    QRegularExpression emailRegex(R"((\w+)(\.|_)?(\w*)@(\w+)\.(\w+))");
    if (!emailRegex.match(email).hasMatch())
    {
        QMessageBox::warning(this, "Ошибка", "Некорректный формат email УК.");
        return;
    }

    if (!ValidateAddress(address))
    {
        QMessageBox::warning(this, "Ошибка валидации", "Неверный формат адреса или адрес уже существует.");
        ui->AddressInput->clear();
        return;
    }

    House house({}, address);
    house.setEmailUK(email);
    houses.append(house);

    ui->ListOfAddresses->addItem(address);
    ui->ListOfAddresses->sortItems(Qt::AscendingOrder);

    ui->AddressInput->clear();
    ui->EmailUKInput->clear();
}

// Поиск адреса в списке
void IDSapp::on_SearchAddress_textChanged(const QString& searchText)
{
    QString search = searchText.trimmed();

    for (int i = 0; i < ui->ListOfAddresses->count(); ++i)
    {
        QListWidgetItem* item = ui->ListOfAddresses->item(i);
        if (item && item->text().contains(search, Qt::CaseInsensitive))
        {
            ui->ListOfAddresses->setCurrentRow(i);
            return;
        }
    }

    ui->ListOfAddresses->clearSelection();
}

// При выборе адреса
void IDSapp::selectedAddress()
{
    QString selectedAddress = ui->ListOfAddresses->currentItem()
    ? ui->ListOfAddresses->currentItem()->text()
    : "";

    ui->ListOfSensors->clear();

    for (const House& house : houses)
    {
        if (house.getAddress() == selectedAddress)
        {
            for (const Sensor& sensor : house.getSensors())
            {
                QString itemText = "ID: " + sensor.getID() + " | Место: " + sensor.getPlace();
                ui->ListOfSensors->addItem(itemText);
            }
            updateSensorsDisplay();
            ui->IDOfSensor->clear();
            ui->PlaceInput->clear();
            break;
        }
    }
}

// Хэширование
QString IDSapp::encryptDecrypt(const QString& data) {
    QByteArray key = "IcicleKey";
    QByteArray input = data.toUtf8();

    for (int i = 0; i < input.size(); ++i)
        input[i] = input[i] ^ key[i % key.size()];

    return QString::fromUtf8(input.toBase64());
}
QString IDSapp::decrypt(const QString& encoded) {
    QByteArray key = "IcicleKey";
    QByteArray input = QByteArray::fromBase64(encoded.toUtf8());

    for (int i = 0; i < input.size(); ++i)
        input[i] = input[i] ^ key[i % key.size()];

    return QString::fromUtf8(input);
}

// Сохранение в файл
void IDSapp::saveDataToFile() {
    QJsonArray jsonArray;

    for (const House& house : houses) {
        QJsonObject houseObj;
        houseObj["address"] = house.getAddress();
        houseObj["emailUK"] = house.getEmailUK();

        QJsonArray sensorsArray;
        for (const Sensor& s : house.getSensors()) {
            QJsonObject sensorObj;
            sensorObj["id"] = s.getID();
            sensorObj["location"] = s.getPlace();
            sensorsArray.append(sensorObj);
        }

        houseObj["sensors"] = sensorsArray;
        jsonArray.append(houseObj);
    }

    QJsonDocument doc(jsonArray);
    QString raw = QString::fromUtf8(doc.toJson());

    QString encrypted = encryptDecrypt(raw);

    QFile file("data.dat");
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream stream(&file);
        stream << encrypted;
        file.close();
    }
}

// Загрузка из файла
void IDSapp::loadDataFromFile() {
    ui->ListOfAddresses->clear();
    houses.clear();

    QFile file("data.dat");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) return;

    QTextStream stream(&file);
    QString encrypted = stream.readAll();
    file.close();

    QString decrypted = decrypt(encrypted);

    QJsonDocument doc = QJsonDocument::fromJson(decrypted.toUtf8());
    if (!doc.isArray()) return;

    QJsonArray array = doc.array();

    for (const QJsonValue& val : array) {
        QJsonObject obj = val.toObject();
        QString addr = obj["address"].toString();
        QString emailUK = obj["emailUK"].toString();

        QVector<Sensor> sensors;
        QJsonArray sensorsArray = obj["sensors"].toArray();
        for (const QJsonValue& sVal : sensorsArray) {
            QJsonObject sObj = sVal.toObject();
            sensors.append(Sensor(sObj["id"].toString(), sObj["location"].toString()));
        }

        House house(sensors, addr);
        house.setEmailUK(emailUK);
        houses.append(house);
        ui->ListOfAddresses->addItem(addr);
    }

    ui->ListOfAddresses->sortItems(Qt::AscendingOrder);
}

// Добавление датчика
void IDSapp::on_LoadSensor_clicked() {

    QString location = ui->PlaceInput->text().trimmed();
    QString sensorId = ui->IDOfSensor->text().trimmed();

    if (sensorId.isEmpty() || location.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Введите расположение и убедитесь, что ID датчика получен.");
        return;
    }

    for (const auto& house : houses) {
        for (const auto& sensor : house.getSensors()) {
            if (sensor.getID() == sensorId) {
                QMessageBox::warning(this, "Ошибка", "Этот датчик уже зарегистрирован.");
                return;
            }
        }
    }

    QListWidgetItem* selectedItem = ui->ListOfAddresses->currentItem();
    if (!selectedItem) {
        QMessageBox::warning(this, "Ошибка", "Выберите дом.");
        return;
    }

    QString address = selectedItem->text();

    for (auto& house : houses) {
        if (house.getAddress() == address) {
            house.addSensor(Sensor(sensorId, location));
            ui->ListOfSensors->addItem("ID: " + sensorId + " | Место: " + location);
            ui->PlaceInput->clear();
            ui->IDOfSensor->clear();
            return;
        }
    }
}

// Чтение данных из порта
void IDSapp::readSensorData() {
    if (!serialPort->canReadLine()) return;

    QByteArray data = serialPort->readLine().trimmed();
    QString line(data);
    QStringList parts = line.split(":");
    if (parts.size() != 2) return;

    QString sensorId = parts[0];
    int distance = parts[1].toInt();

    for (auto& house : houses) {
        if (house.updateSensorDistance(sensorId, distance)) {
            break;
        }
    }
    ui->IDOfSensor->setText(sensorId);
    updateSensorsDisplay();
    onSensorSelected();
}

// Обновление данных
void IDSapp::updateSensorsDisplay() {
    QListWidgetItem* selectedHouseItem = ui->ListOfAddresses->currentItem();
    QString selectedAddress = selectedHouseItem ? selectedHouseItem->text() : "";

    QString selectedSensorId;
    QListWidgetItem* currentSensorItem = ui->ListOfSensors->currentItem();
    if (currentSensorItem) {
        selectedSensorId = currentSensorItem->text().section("ID: ", 1).section(" |", 0, 0);
    }

    ui->ListOfSensors->clear();

    for (const House& house : houses) {
        for (int i = 0; i < ui->ListOfAddresses->count(); ++i) {
            QListWidgetItem* addrItem = ui->ListOfAddresses->item(i);
            if (addrItem->text() == house.getAddress()) {
                bool danger = false;
                for (const Sensor& sensor : house.getSensors()) {
                    if (sensor.getDistance() < 50 && sensor.getDistance() > 0) {
                        danger = true;
                        break;
                    }
                }
                addrItem->setForeground(danger ? Qt::red : Qt::green);
                break;
            }
        }

        if (house.getAddress() == selectedAddress) {
            for (const Sensor& sensor : house.getSensors()) {
                QString text = "ID: " + sensor.getID() + " | Место: " + sensor.getPlace();
                QListWidgetItem* item = new QListWidgetItem(text);

                if (sensor.getDistance() < 50 && sensor.getDistance() > 0) {
                    item->setForeground(Qt::red);
                } else if (sensor.getDistance() >= 50) {
                    item->setForeground(Qt::green);
                } else {
                    item->setForeground(Qt::gray);
                }

                ui->ListOfSensors->addItem(item);

                if (sensor.getID() == selectedSensorId) {
                    item->setSelected(true);
                    ui->ListOfSensors->setCurrentItem(item);
                }
            }
        }
    }
}

// При выборе датчика
void IDSapp::onSensorSelected()
{
    QListWidgetItem* selectedSensorItem = ui->ListOfSensors->currentItem();
    if (!selectedSensorItem) {
        ui->StatusOfSensor->setText("Выберите датчик");
        return;
    }

    QString selectedText = selectedSensorItem->text();
    QString sensorId = selectedText.section("ID: ", 1).section(" |", 0, 0);

    for (const auto& house : houses) {
        for (const auto& sensor : house.getSensors()) {
            if (sensor.getID() == sensorId) {
                double d = sensor.getDistance();

                if (d == 0.0) {
                    ui->StatusOfSensor->setText("Отключён");
                } else if (d < 50) {
                    ui->StatusOfSensor->setText("Обнаружена угроза (" + QString::number(d) + " см)");
                } else {
                    ui->StatusOfSensor->setText("Всё хорошо (" + QString::number(d) + " см)");
                }
                return;
            }
        }
    }

    ui->StatusOfSensor->setText("Датчик не найден");
}

// Получение данных о погоде с сервера
void IDSapp::fetchWeather()
{
    QString apiKey = "0755c4268a7c4908ad1182333251405";
    QString location = "Perm";
    QString url = QString("http://api.weatherapi.com/v1/forecast.json?key=%1&q=%2&days=3&aqi=no&alerts=no")
                      .arg(apiKey).arg(location);

    QNetworkRequest request{QUrl(url)};
    weatherManager->get(request);
}

// Обработка данных о погоде
void IDSapp::onWeatherDataReceived(QNetworkReply* reply)
{
    if (reply->error()) {
        ui->MessageWeather->setText("Ошибка при получении данных о погоде.");
        reply->deleteLater();
        return;
    }

    QByteArray response = reply->readAll();
    QJsonDocument doc = QJsonDocument::fromJson(response);
    if (!doc.isObject()) {
        ui->MessageWeather->setText("Неверный формат ответа от API.");
        reply->deleteLater();
        return;
    }

    QJsonObject root = doc.object();
    QJsonObject forecast = root["forecast"].toObject();
    QJsonArray days = forecast["forecastday"].toArray();

    bool dangerLikely = false;
    QString dangerDate;

    for (const QJsonValue& dayVal : days) {
        QJsonObject dayObj = dayVal.toObject();
        QJsonObject dayData = dayObj["day"].toObject();
        QString condition = dayData["condition"].toObject()["text"].toString();
        double avgTemp = dayData["avgtemp_c"].toDouble();

        if (avgTemp <= 1.5 && (condition.contains("snow", Qt::CaseInsensitive) ||
                               condition.contains("rain", Qt::CaseInsensitive) ||
                               condition.contains("freezing", Qt::CaseInsensitive))) {
            dangerLikely = true;
            dangerDate = dayObj["date"].toString();
            break;
        }
    }

    if (dangerLikely) {
        ui->MessageWeather->setText(dangerDate + " наиболее вероятное образование угрозы! Просьба принять меры!");
    } else {
        ui->MessageWeather->setText("В ближайшие дни образование угрозы не ожидается.");
    }

    reply->deleteLater();
}

// Контекстное меню для списка адресов
void IDSapp::showAddressContextMenu(const QPoint &pos)
{
    QListWidgetItem* item = ui->ListOfAddresses->itemAt(pos);
    if (!item) return;

    QMenu contextMenu;
    QAction* deleteAction = contextMenu.addAction("Удалить адрес");
    QAction* selectedAction = contextMenu.exec(ui->ListOfAddresses->mapToGlobal(pos));

    if (selectedAction == deleteAction)
        deleteSelectedAddress();
}

// Удаление адреса
void IDSapp::deleteSelectedAddress()
{
    QListWidgetItem* selectedItem = ui->ListOfAddresses->currentItem();
    if (!selectedItem) return;

    QString addressToDelete = selectedItem->text();

    for (int i = 0; i < houses.size(); ++i) {
        if (houses[i].getAddress() == addressToDelete) {
            houses.removeAt(i);
            break;
        }
    }

    delete selectedItem;
    ui->ListOfSensors->clear();
    ui->StatusOfSensor->clear();
    ui->PlaceInput->clear();
    ui->IDOfSensor->clear();
}

// Контектсное меню для датчиков
void IDSapp::showSensorContextMenu(const QPoint &pos)
{
    QListWidgetItem* item = ui->ListOfSensors->itemAt(pos);
    if (!item) return;

    QMenu contextMenu;
    QAction* deleteAction = contextMenu.addAction("Удалить датчик");
    QAction* selectedAction = contextMenu.exec(ui->ListOfSensors->mapToGlobal(pos));

    if (selectedAction == deleteAction)
        deleteSelectedSensor();
}

// Удаление датчика
void IDSapp::deleteSelectedSensor()
{
    QListWidgetItem* selectedSensorItem = ui->ListOfSensors->currentItem();
    if (!selectedSensorItem) return;

    QString sensorText = selectedSensorItem->text();
    QString sensorId = sensorText.section("ID: ", 1).section(" |", 0, 0);

    QString selectedAddress = ui->ListOfAddresses->currentItem()
                                  ? ui->ListOfAddresses->currentItem()->text()
                                  : "";

    for (House& house : houses) {
        if (house.getAddress() == selectedAddress) {
            QVector<Sensor>& sensors = house.getSensors();
            for (int i = 0; i < sensors.size(); ++i) {
                if (sensors[i].getID() == sensorId) {
                    sensors.removeAt(i);
                    break;
                }
            }
            break;
        }
    }

    delete selectedSensorItem;
    ui->StatusOfSensor->clear();
    ui->IDOfSensor->clear();
    ui->PlaceInput->clear();
}

// При нажатии на "Изменить"
void IDSapp::on_ChangeTemplate_clicked() {
    ui->TemplateLetter->setReadOnly(false);
}

// Диалоговое окно для отправки письма
QString getSenderEmail(QWidget* parent) {
    QDialog dialog(parent);
    dialog.setWindowTitle("Введите ваш Email");

    QVBoxLayout* layout = new QVBoxLayout(&dialog);
    QLabel* label = new QLabel("Email отправителя:", &dialog);
    QLineEdit* emailEdit = new QLineEdit(&dialog);
    QPushButton* okBtn = new QPushButton("Отправить", &dialog);
    okBtn->setDefault(true);

    layout->addWidget(label);
    layout->addWidget(emailEdit);
    layout->addWidget(okBtn);

    QObject::connect(okBtn, &QPushButton::clicked, [&]() {
        QRegularExpression regex(R"((\w+)(\.|_)?(\w*)@(\w+)\.(\w+))");
        if (regex.match(emailEdit->text()).hasMatch())
            dialog.accept();
        else
            QMessageBox::warning(&dialog, "Ошибка", "Введите корректный Email.");
    });

    if (dialog.exec() == QDialog::Accepted)
        return emailEdit->text();

    return "";
}

// Отправка письма
void IDSapp::on_SendLetter_clicked() {
    QListWidgetItem* selectedItem = ui->ListOfAddresses->currentItem();
    if (!selectedItem) {
        QMessageBox::warning(this, "Ошибка", "Выберите адрес.");
        return;
    }

    QString address = selectedItem->text();
    bool isRed = selectedItem->foreground() == QBrush(Qt::red);

    if (!isRed) {
        QMessageBox::warning(this, "Нельзя отправить", "Угроз не обнаружено. Отправка письма невозможна.");
        return;
    }

    QString letter = ui->OwnLetter->toPlainText().trimmed();
    if (letter.isEmpty())
        letter = ui->TemplateLetter->toPlainText();

    if (letter.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Письмо не может быть пустым.");
        return;
    }

    QString senderEmail = getSenderEmail(this);
    if (senderEmail.isEmpty()) return;

    QString recipientEmail;
    for (const auto& house : houses) {
        if (house.getAddress() == address) {
            recipientEmail = house.getEmailUK();
            break;
        }
    }

    if (recipientEmail.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Для этого адреса не указан email управляющей компании.");
        return;
    }
}

// Метод для отправки письма
void IDSapp::sendEmail(const QString& from, const QString& to, const QString& body) {
    QString subject = "Уведомление об угрозе образования сосулек";

    QUrl mailto;
    mailto.setScheme("mailto");
    mailto.setPath(to);
    QUrlQuery query;
    query.addQueryItem("subject", subject);
    query.addQueryItem("body", QString("От: %1\n\n%2").arg(from, body));
    mailto.setQuery(query);

    QDesktopServices::openUrl(mailto);
}


