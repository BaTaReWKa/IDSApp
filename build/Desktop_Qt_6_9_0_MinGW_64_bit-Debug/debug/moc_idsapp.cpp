/****************************************************************************
** Meta object code from reading C++ file 'idsapp.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../idsapp.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'idsapp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN6IDSappE_t {};
} // unnamed namespace

template <> constexpr inline auto IDSapp::qt_create_metaobjectdata<qt_meta_tag_ZN6IDSappE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "IDSapp",
        "AddAddress",
        "",
        "ValidateAddress",
        "address",
        "on_SearchAddress_textChanged",
        "searchText",
        "selectedAddress",
        "loadDataFromFile",
        "saveDataToFile",
        "connectSensor",
        "readSensorData",
        "on_LoadSensor_clicked",
        "onSensorSelected",
        "updateSensorsDisplay",
        "onWeatherDataReceived",
        "QNetworkReply*",
        "reply",
        "fetchWeather",
        "showAddressContextMenu",
        "pos",
        "deleteSelectedAddress",
        "showSensorContextMenu",
        "deleteSelectedSensor",
        "on_ChangeTemplate_clicked",
        "on_SendLetter_clicked",
        "sendEmail",
        "from",
        "to",
        "body",
        "encryptDecrypt",
        "data",
        "decrypt",
        "encoded"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'AddAddress'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'ValidateAddress'
        QtMocHelpers::SlotData<bool(const QString &)>(3, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 4 },
        }}),
        // Slot 'on_SearchAddress_textChanged'
        QtMocHelpers::SlotData<void(const QString &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 6 },
        }}),
        // Slot 'selectedAddress'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'loadDataFromFile'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'saveDataToFile'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'connectSensor'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'readSensorData'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_LoadSensor_clicked'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onSensorSelected'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateSensorsDisplay'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onWeatherDataReceived'
        QtMocHelpers::SlotData<void(QNetworkReply *)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 16, 17 },
        }}),
        // Slot 'fetchWeather'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'showAddressContextMenu'
        QtMocHelpers::SlotData<void(const QPoint &)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QPoint, 20 },
        }}),
        // Slot 'deleteSelectedAddress'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'showSensorContextMenu'
        QtMocHelpers::SlotData<void(const QPoint &)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QPoint, 20 },
        }}),
        // Slot 'deleteSelectedSensor'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_ChangeTemplate_clicked'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_SendLetter_clicked'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'sendEmail'
        QtMocHelpers::SlotData<void(const QString &, const QString &, const QString &)>(26, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 27 }, { QMetaType::QString, 28 }, { QMetaType::QString, 29 },
        }}),
        // Slot 'encryptDecrypt'
        QtMocHelpers::SlotData<QString(const QString &)>(30, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::QString, 31 },
        }}),
        // Slot 'decrypt'
        QtMocHelpers::SlotData<QString(const QString &)>(32, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::QString, 33 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<IDSapp, qt_meta_tag_ZN6IDSappE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject IDSapp::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6IDSappE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6IDSappE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6IDSappE_t>.metaTypes,
    nullptr
} };

void IDSapp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<IDSapp *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->AddAddress(); break;
        case 1: { bool _r = _t->ValidateAddress((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->on_SearchAddress_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->selectedAddress(); break;
        case 4: _t->loadDataFromFile(); break;
        case 5: _t->saveDataToFile(); break;
        case 6: _t->connectSensor(); break;
        case 7: _t->readSensorData(); break;
        case 8: _t->on_LoadSensor_clicked(); break;
        case 9: _t->onSensorSelected(); break;
        case 10: _t->updateSensorsDisplay(); break;
        case 11: _t->onWeatherDataReceived((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        case 12: _t->fetchWeather(); break;
        case 13: _t->showAddressContextMenu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 14: _t->deleteSelectedAddress(); break;
        case 15: _t->showSensorContextMenu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 16: _t->deleteSelectedSensor(); break;
        case 17: _t->on_ChangeTemplate_clicked(); break;
        case 18: _t->on_SendLetter_clicked(); break;
        case 19: _t->sendEmail((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 20: { QString _r = _t->encryptDecrypt((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 21: { QString _r = _t->decrypt((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *IDSapp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IDSapp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6IDSappE_t>.strings))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int IDSapp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}
QT_WARNING_POP
