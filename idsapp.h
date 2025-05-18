#ifndef IDSAPP_H
#define IDSAPP_H

#include "House.h"
#include <QVector>
#include <QMainWindow>
#include <QSerialPort>
#include <QTimer>
#include <QSerialPortInfo>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QDate>

QT_BEGIN_NAMESPACE
namespace Ui {
class IDSapp;
}
QT_END_NAMESPACE

class IDSapp : public QMainWindow
{
    Q_OBJECT

public:
    IDSapp(QWidget *parent = nullptr);
    ~IDSapp();

private:
    void initializeApp();
    QVector<House> houses;
    QNetworkAccessManager* weatherManager;
    void analyzeWeather(const QJsonObject& day);

signals:


public slots:
    void AddAddress();
    bool ValidateAddress(const QString& address);
    void on_SearchAddress_textChanged(const QString& searchText);
    void selectedAddress();
    void loadDataFromFile();
    void saveDataToFile();
    void connectSensor();
    void readSensorData();
    void on_LoadSensor_clicked();
    void onSensorSelected();
    void updateSensorsDisplay();
    void onWeatherDataReceived(QNetworkReply* reply);
    void fetchWeather();
    void showAddressContextMenu(const QPoint &pos);
    void deleteSelectedAddress();
    void showSensorContextMenu(const QPoint &pos);
    void deleteSelectedSensor();
    void on_ChangeTemplate_clicked();
    void on_SendLetter_clicked();
    void sendEmail(const QString& from, const QString& to, const QString& body);

    QString encryptDecrypt(const QString& data);
    QString decrypt(const QString& encoded);

protected:
    void closeEvent(QCloseEvent* event) override;


private:
    QSerialPort* serialPort;
    QTimer* sensorTimer;
    Ui::IDSapp *ui;
};
#endif // IDSAPP_H
