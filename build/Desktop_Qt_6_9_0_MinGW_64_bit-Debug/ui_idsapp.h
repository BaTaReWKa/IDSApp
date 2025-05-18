/********************************************************************************
** Form generated from reading UI file 'idsapp.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IDSAPP_H
#define UI_IDSAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IDSapp
{
public:
    QWidget *centralwidget;
    QGroupBox *groupAddresses;
    QGridLayout *gridLayout;
    QLabel *LabelAddresses;
    QPushButton *SaveData;
    QLineEdit *SearchAddress;
    QPushButton *LoadAddress;
    QLineEdit *AddressInput;
    QListWidget *ListOfAddresses;
    QLineEdit *EmailUKInput;
    QGroupBox *BoxOfSensor;
    QGridLayout *gridLayout_2;
    QPushButton *LoadSensor;
    QPushButton *ConnectSensor;
    QLabel *LabelOfPlace;
    QLabel *LabelSensor;
    QLabel *LabelOfID;
    QLabel *IDOfSensor;
    QLineEdit *PlaceInput;
    QListWidget *ListOfSensors;
    QLabel *LabelStatus;
    QLabel *StatusOfSensor;
    QGroupBox *BoxOfSensor_2;
    QGridLayout *gridLayout_3;
    QLabel *LabelTemplate;
    QPushButton *ChangeTemplate;
    QTextEdit *TemplateLetter;
    QGroupBox *BoxOfSensor_3;
    QGridLayout *gridLayout_4;
    QLabel *LabelSensor_3;
    QPushButton *SendLetter;
    QTextEdit *OwnLetter;
    QLabel *MessageWeather;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *IDSapp)
    {
        if (IDSapp->objectName().isEmpty())
            IDSapp->setObjectName("IDSapp");
        IDSapp->resize(1289, 718);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        QBrush brush1(QColor(33, 33, 33, 255));
        brush1.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        QBrush brush2(QColor(49, 49, 49, 255));
        brush2.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        QBrush brush3(QColor(41, 41, 41, 255));
        brush3.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        QBrush brush4(QColor(16, 16, 16, 255));
        brush4.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        QBrush brush5(QColor(22, 22, 22, 255));
        brush5.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush6);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush6);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush4);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush7);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush6);
        QBrush brush8(QColor(255, 255, 255, 127));
        brush8.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush8);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush6);
#endif
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush6);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush6);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush4);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush7);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush8);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush6);
#endif
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush6);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush7);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush6);
        QBrush brush9(QColor(16, 16, 16, 127));
        brush9.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
        QBrush brush10(QColor(23, 23, 23, 255));
        brush10.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        IDSapp->setPalette(palette);
        IDSapp->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(IDSapp);
        centralwidget->setObjectName("centralwidget");
        groupAddresses = new QGroupBox(centralwidget);
        groupAddresses->setObjectName("groupAddresses");
        groupAddresses->setGeometry(QRect(20, 20, 321, 641));
        groupAddresses->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: none;\n"
"}\n"
"QGroupBox {\n"
"    background-color: transparent;\n"
"    border: none; /* \321\203\320\261\320\270\321\200\320\260\320\265\321\202 \321\200\320\260\320\274\320\272\321\203, \320\265\321\201\320\273\320\270 \321\202\320\276\320\266\320\265 \320\275\320\265 \320\275\321\203\320\266\320\275\320\260 */\n"
"}\n"
""));
        gridLayout = new QGridLayout(groupAddresses);
        gridLayout->setObjectName("gridLayout");
        LabelAddresses = new QLabel(groupAddresses);
        LabelAddresses->setObjectName("LabelAddresses");
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        LabelAddresses->setFont(font);
        LabelAddresses->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: transparent;\n"
"    color: white;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"auto* shadow = new QGraphicsDropShadowEffect();\n"
"shadow->setBlurRadius(0);\n"
"shadow->setColor(Qt::black);\n"
"shadow->setOffset(1, 1);\n"
"label->setGraphicsEffect(shadow);\n"
"QFrame {\n"
"    background-color: rgba(0, 0, 0, 100);  /* \321\202\321\221\320\274\320\275\321\213\320\271 \"\320\274\320\260\321\202\320\276\320\262\321\213\320\271\" \320\277\321\200\321\217\320\274\320\276\321\203\320\263\320\276\320\273\321\214\320\275\320\270\320\272 */\n"
"    border-radius: 10px;\n"
"}"));

        gridLayout->addWidget(LabelAddresses, 1, 0, 1, 1);

        SaveData = new QPushButton(groupAddresses);
        SaveData->setObjectName("SaveData");
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        SaveData->setFont(font1);
        SaveData->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(255, 255, 255, 150);  /* \320\261\320\265\320\273\320\260\321\217, \320\277\320\276\320\273\321\203\320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\260\321\217 */\n"
"    color: black;\n"
"    border-radius: 8px;\n"
"    padding: 5px 10px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgba(255, 255, 255, 200);\n"
"}\n"
""));

        gridLayout->addWidget(SaveData, 8, 0, 1, 2);

        SearchAddress = new QLineEdit(groupAddresses);
        SearchAddress->setObjectName("SearchAddress");
        QFont font2;
        font2.setPointSize(14);
        SearchAddress->setFont(font2);
        SearchAddress->setStyleSheet(QString::fromUtf8("QFrame {\n"
"    background-color: rgba(0, 0, 0, 100);  /* \321\202\321\221\320\274\320\275\321\213\320\271 \"\320\274\320\260\321\202\320\276\320\262\321\213\320\271\" \320\277\321\200\321\217\320\274\320\276\321\203\320\263\320\276\320\273\321\214\320\275\320\270\320\272 */\n"
"    border-radius: 10px;\n"
"}"));

        gridLayout->addWidget(SearchAddress, 2, 0, 1, 2);

        LoadAddress = new QPushButton(groupAddresses);
        LoadAddress->setObjectName("LoadAddress");
        LoadAddress->setFont(font1);
        LoadAddress->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(255, 255, 255, 150);  /* \320\261\320\265\320\273\320\260\321\217, \320\277\320\276\320\273\321\203\320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\260\321\217 */\n"
"    color: black;\n"
"    border-radius: 8px;\n"
"    padding: 5px 10px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgba(255, 255, 255, 200);\n"
"}\n"
""));

        gridLayout->addWidget(LoadAddress, 5, 1, 1, 1);

        AddressInput = new QLineEdit(groupAddresses);
        AddressInput->setObjectName("AddressInput");
        AddressInput->setFont(font2);
        AddressInput->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: transparent;\n"
"    color: white;\n"
"    font-weight: bold;\n"
"}\n"
"auto* shadow = new QGraphicsDropShadowEffect();\n"
"shadow->setBlurRadius(0);\n"
"shadow->setColor(Qt::black);\n"
"shadow->setOffset(1, 1);\n"
"label->setGraphicsEffect(shadow);\n"
""));

        gridLayout->addWidget(AddressInput, 5, 0, 1, 1);

        ListOfAddresses = new QListWidget(groupAddresses);
        ListOfAddresses->setObjectName("ListOfAddresses");

        gridLayout->addWidget(ListOfAddresses, 3, 0, 1, 2);

        EmailUKInput = new QLineEdit(groupAddresses);
        EmailUKInput->setObjectName("EmailUKInput");
        EmailUKInput->setFont(font2);

        gridLayout->addWidget(EmailUKInput, 6, 0, 1, 2);

        BoxOfSensor = new QGroupBox(centralwidget);
        BoxOfSensor->setObjectName("BoxOfSensor");
        BoxOfSensor->setGeometry(QRect(350, 20, 301, 591));
        BoxOfSensor->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: none;\n"
"}"));
        gridLayout_2 = new QGridLayout(BoxOfSensor);
        gridLayout_2->setObjectName("gridLayout_2");
        LoadSensor = new QPushButton(BoxOfSensor);
        LoadSensor->setObjectName("LoadSensor");
        LoadSensor->setFont(font1);
        LoadSensor->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(255, 255, 255, 150);  /* \320\261\320\265\320\273\320\260\321\217, \320\277\320\276\320\273\321\203\320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\260\321\217 */\n"
"    color: black;\n"
"    border-radius: 8px;\n"
"    padding: 5px 10px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgba(255, 255, 255, 200);\n"
"}\n"
""));

        gridLayout_2->addWidget(LoadSensor, 5, 0, 1, 2);

        ConnectSensor = new QPushButton(BoxOfSensor);
        ConnectSensor->setObjectName("ConnectSensor");
        ConnectSensor->setFont(font1);
        ConnectSensor->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(255, 255, 255, 150);  /* \320\261\320\265\320\273\320\260\321\217, \320\277\320\276\320\273\321\203\320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\260\321\217 */\n"
"    color: black;\n"
"    border-radius: 8px;\n"
"    padding: 5px 10px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgba(255, 255, 255, 200);\n"
"}\n"
""));

        gridLayout_2->addWidget(ConnectSensor, 1, 0, 1, 2);

        LabelOfPlace = new QLabel(BoxOfSensor);
        LabelOfPlace->setObjectName("LabelOfPlace");
        QFont font3;
        font3.setPointSize(14);
        font3.setBold(false);
        LabelOfPlace->setFont(font3);

        gridLayout_2->addWidget(LabelOfPlace, 3, 1, 1, 1);

        LabelSensor = new QLabel(BoxOfSensor);
        LabelSensor->setObjectName("LabelSensor");
        LabelSensor->setFont(font);
        LabelSensor->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: transparent;\n"
"    color: white;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"auto* shadow = new QGraphicsDropShadowEffect();\n"
"shadow->setBlurRadius(0);\n"
"shadow->setColor(Qt::black);\n"
"shadow->setOffset(1, 1);\n"
"label->setGraphicsEffect(shadow);\n"
""));

        gridLayout_2->addWidget(LabelSensor, 0, 0, 1, 2);

        LabelOfID = new QLabel(BoxOfSensor);
        LabelOfID->setObjectName("LabelOfID");
        LabelOfID->setFont(font3);

        gridLayout_2->addWidget(LabelOfID, 3, 0, 1, 1);

        IDOfSensor = new QLabel(BoxOfSensor);
        IDOfSensor->setObjectName("IDOfSensor");
        IDOfSensor->setFont(font3);

        gridLayout_2->addWidget(IDOfSensor, 4, 0, 1, 1);

        PlaceInput = new QLineEdit(BoxOfSensor);
        PlaceInput->setObjectName("PlaceInput");
        PlaceInput->setFont(font2);

        gridLayout_2->addWidget(PlaceInput, 4, 1, 1, 1);

        ListOfSensors = new QListWidget(BoxOfSensor);
        ListOfSensors->setObjectName("ListOfSensors");

        gridLayout_2->addWidget(ListOfSensors, 2, 0, 1, 2);

        LabelStatus = new QLabel(BoxOfSensor);
        LabelStatus->setObjectName("LabelStatus");
        LabelStatus->setFont(font2);

        gridLayout_2->addWidget(LabelStatus, 6, 0, 1, 2);

        StatusOfSensor = new QLabel(BoxOfSensor);
        StatusOfSensor->setObjectName("StatusOfSensor");
        StatusOfSensor->setFont(font2);

        gridLayout_2->addWidget(StatusOfSensor, 7, 0, 1, 2);

        BoxOfSensor_2 = new QGroupBox(centralwidget);
        BoxOfSensor_2->setObjectName("BoxOfSensor_2");
        BoxOfSensor_2->setGeometry(QRect(660, 20, 291, 521));
        BoxOfSensor_2->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: none;\n"
"}"));
        gridLayout_3 = new QGridLayout(BoxOfSensor_2);
        gridLayout_3->setObjectName("gridLayout_3");
        LabelTemplate = new QLabel(BoxOfSensor_2);
        LabelTemplate->setObjectName("LabelTemplate");
        LabelTemplate->setFont(font);
        LabelTemplate->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: transparent;\n"
"    color: white;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"auto* shadow = new QGraphicsDropShadowEffect();\n"
"shadow->setBlurRadius(0);\n"
"shadow->setColor(Qt::black);\n"
"shadow->setOffset(1, 1);\n"
"label->setGraphicsEffect(shadow);\n"
""));

        gridLayout_3->addWidget(LabelTemplate, 0, 0, 1, 2);

        ChangeTemplate = new QPushButton(BoxOfSensor_2);
        ChangeTemplate->setObjectName("ChangeTemplate");
        ChangeTemplate->setFont(font1);
        ChangeTemplate->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(255, 255, 255, 150);  /* \320\261\320\265\320\273\320\260\321\217, \320\277\320\276\320\273\321\203\320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\260\321\217 */\n"
"    color: black;\n"
"    border-radius: 8px;\n"
"    padding: 5px 10px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgba(255, 255, 255, 200);\n"
"}\n"
""));

        gridLayout_3->addWidget(ChangeTemplate, 2, 0, 1, 2);

        TemplateLetter = new QTextEdit(BoxOfSensor_2);
        TemplateLetter->setObjectName("TemplateLetter");

        gridLayout_3->addWidget(TemplateLetter, 1, 0, 1, 2);

        BoxOfSensor_3 = new QGroupBox(centralwidget);
        BoxOfSensor_3->setObjectName("BoxOfSensor_3");
        BoxOfSensor_3->setGeometry(QRect(960, 20, 301, 521));
        BoxOfSensor_3->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: none;\n"
"}"));
        gridLayout_4 = new QGridLayout(BoxOfSensor_3);
        gridLayout_4->setObjectName("gridLayout_4");
        LabelSensor_3 = new QLabel(BoxOfSensor_3);
        LabelSensor_3->setObjectName("LabelSensor_3");
        LabelSensor_3->setFont(font);
        LabelSensor_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: transparent;\n"
"    color: white;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"auto* shadow = new QGraphicsDropShadowEffect();\n"
"shadow->setBlurRadius(0);\n"
"shadow->setColor(Qt::black);\n"
"shadow->setOffset(1, 1);\n"
"label->setGraphicsEffect(shadow);\n"
""));

        gridLayout_4->addWidget(LabelSensor_3, 0, 0, 1, 2);

        SendLetter = new QPushButton(BoxOfSensor_3);
        SendLetter->setObjectName("SendLetter");
        SendLetter->setFont(font1);
        SendLetter->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(255, 255, 255, 150);  /* \320\261\320\265\320\273\320\260\321\217, \320\277\320\276\320\273\321\203\320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\260\321\217 */\n"
"    color: black;\n"
"    border-radius: 8px;\n"
"    padding: 5px 10px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgba(255, 255, 255, 200);\n"
"}\n"
""));

        gridLayout_4->addWidget(SendLetter, 2, 0, 1, 2);

        OwnLetter = new QTextEdit(BoxOfSensor_3);
        OwnLetter->setObjectName("OwnLetter");

        gridLayout_4->addWidget(OwnLetter, 1, 0, 1, 2);

        MessageWeather = new QLabel(centralwidget);
        MessageWeather->setObjectName("MessageWeather");
        MessageWeather->setGeometry(QRect(360, 620, 611, 31));
        MessageWeather->setFont(font2);
        IDSapp->setCentralWidget(centralwidget);
        menubar = new QMenuBar(IDSapp);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1289, 25));
        IDSapp->setMenuBar(menubar);
        statusbar = new QStatusBar(IDSapp);
        statusbar->setObjectName("statusbar");
        IDSapp->setStatusBar(statusbar);

        retranslateUi(IDSapp);

        QMetaObject::connectSlotsByName(IDSapp);
    } // setupUi

    void retranslateUi(QMainWindow *IDSapp)
    {
        IDSapp->setWindowTitle(QCoreApplication::translate("IDSapp", "IDSapp", nullptr));
        groupAddresses->setTitle(QString());
        LabelAddresses->setText(QCoreApplication::translate("IDSapp", "\320\220\320\264\321\200\320\265\321\201\320\260:", nullptr));
        SaveData->setText(QCoreApplication::translate("IDSapp", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
        LoadAddress->setText(QCoreApplication::translate("IDSapp", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214", nullptr));
        BoxOfSensor->setTitle(QString());
        LoadSensor->setText(QCoreApplication::translate("IDSapp", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214", nullptr));
        ConnectSensor->setText(QCoreApplication::translate("IDSapp", "\320\237\320\276\320\264\320\272\320\273\321\216\321\207\320\270\321\202\321\214 \320\264\320\260\321\202\321\207\320\270\320\272", nullptr));
        LabelOfPlace->setText(QCoreApplication::translate("IDSapp", "\320\240\320\260\321\201\320\277\320\276\320\273\320\276\320\266\320\265\320\275\320\270\320\265:", nullptr));
        LabelSensor->setText(QCoreApplication::translate("IDSapp", "\320\224\320\260\321\202\321\207\320\270\320\272\320\270:", nullptr));
        LabelOfID->setText(QCoreApplication::translate("IDSapp", "ID:", nullptr));
        IDOfSensor->setText(QString());
        LabelStatus->setText(QCoreApplication::translate("IDSapp", "\320\241\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265 \320\264\320\260\321\202\321\207\320\270\320\272\320\260:", nullptr));
        StatusOfSensor->setText(QCoreApplication::translate("IDSapp", "\320\236\321\202\320\272\320\273\321\216\321\207\321\221\320\275", nullptr));
        BoxOfSensor_2->setTitle(QString());
        LabelTemplate->setText(QCoreApplication::translate("IDSapp", "\320\242\320\265\320\272\321\201\321\202 \321\210\320\260\320\261\320\273\320\276\320\275\320\260:", nullptr));
        ChangeTemplate->setText(QCoreApplication::translate("IDSapp", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        TemplateLetter->setHtml(QCoreApplication::translate("IDSapp", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\227\320\264\321\200\320\260\320\262\321\201\321\202\320\262\321\203\320\271\321\202\320\265!</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\241\320\276\320\276\320\261\321\211\320\260\320\265\320\274, \321\207\321\202\320\276 \320\262 \321\201\320\262\321\217\320\267\320\270 \321\201 \320\275\320\265\320\262\321"
                        "\213\320\277\320\276\320\273\320\275\320\265\320\275\320\270\320\265\320\274 \320\276\320\261\321\217\320\267\320\260\321\202\320\265\320\273\321\214\321\201\321\202\320\262 \320\277\320\276 \321\203\320\261\320\276\321\200\320\272\320\265 \321\201\320\275\320\265\320\263\320\260 \320\262 \321\202\320\265\321\207\320\265\320\275\320\270\320\265 \320\264\320\262\321\203\321\205 \321\201\321\203\321\202\320\276\320\272, \320\275\320\260 \321\203\320\277\321\200\320\260\320\262\320\273\321\217\321\216\321\211\321\203\321\216 \320\272\320\276\320\274\320\277\320\260\320\275\320\270\321\216 \320\275\320\260\320\273\320\260\320\263\320\260\320\265\321\202\321\201\321\217 \321\210\321\202\321\200\320\260\321\204 \320\262 \321\200\320\260\320\267\320\274\320\265\321\200\320\265 2000 \321\200\321\203\320\261. \320\224\320\273\321\217 \320\276\320\261\320\266\320\260\320\273\320\276\320\262\320\260\320\275\320\270\321\217 \320\276\320\261\321\200\320\260\321\211\320\260\320\271\321\202\320\265\321\201\321\214 \320\275\320"
                        "\260 \321\215\321\202\320\276\321\202 \320\260\320\264\321\200\320\265\321\201 \321\215\320\273\320\265\320\272\321\202\321\200\320\276\320\275\320\275\320\276\320\271 \320\277\320\276\321\207\321\202\321\213.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\241 \321\203\320\262\320\260\320\266\320\265\320\275\320\270\320\265\320\274, IDS!</p></body></html>", nullptr));
        BoxOfSensor_3->setTitle(QString());
        LabelSensor_3->setText(QCoreApplication::translate("IDSapp", "\320\242\320\265\320\272\321\201\321\202 \320\277\320\270\321\201\321\214\320\274\320\260:", nullptr));
        SendLetter->setText(QCoreApplication::translate("IDSapp", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214", nullptr));
        MessageWeather->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class IDSapp: public Ui_IDSapp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IDSAPP_H
