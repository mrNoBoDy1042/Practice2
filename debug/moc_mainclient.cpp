/****************************************************************************
** Meta object code from reading C++ file 'mainclient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainclient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainClient_t {
    QByteArrayData data[31];
    char stringdata0[350];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainClient_t qt_meta_stringdata_MainClient = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainClient"
QT_MOC_LITERAL(1, 11, 7), // "closing"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 5), // "error"
QT_MOC_LITERAL(4, 26, 9), // "reconnect"
QT_MOC_LITERAL(5, 36, 6), // "launch"
QT_MOC_LITERAL(6, 43, 6), // "change"
QT_MOC_LITERAL(7, 50, 11), // "UpdateLabel"
QT_MOC_LITERAL(8, 62, 3), // "CPU"
QT_MOC_LITERAL(9, 66, 3), // "GPU"
QT_MOC_LITERAL(10, 70, 8), // "getTasks"
QT_MOC_LITERAL(11, 79, 13), // "slotReadyRead"
QT_MOC_LITERAL(12, 93, 9), // "slotError"
QT_MOC_LITERAL(13, 103, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(14, 132, 16), // "slotSendToServer"
QT_MOC_LITERAL(15, 149, 13), // "slotConnected"
QT_MOC_LITERAL(16, 163, 15), // "slotDisconected"
QT_MOC_LITERAL(17, 179, 11), // "slotConnect"
QT_MOC_LITERAL(18, 191, 10), // "slotSender"
QT_MOC_LITERAL(19, 202, 10), // "slotConfig"
QT_MOC_LITERAL(20, 213, 10), // "slotLaunch"
QT_MOC_LITERAL(21, 224, 10), // "closeEvent"
QT_MOC_LITERAL(22, 235, 12), // "QCloseEvent*"
QT_MOC_LITERAL(23, 248, 5), // "event"
QT_MOC_LITERAL(24, 254, 14), // "slotSetDefault"
QT_MOC_LITERAL(25, 269, 12), // "saveSettings"
QT_MOC_LITERAL(26, 282, 12), // "slotMainPage"
QT_MOC_LITERAL(27, 295, 11), // "slotProcess"
QT_MOC_LITERAL(28, 307, 8), // "slotHint"
QT_MOC_LITERAL(29, 316, 15), // "slotAboutToExit"
QT_MOC_LITERAL(30, 332, 17) // "slotButtonHandler"

    },
    "MainClient\0closing\0\0error\0reconnect\0"
    "launch\0change\0UpdateLabel\0CPU\0GPU\0"
    "getTasks\0slotReadyRead\0slotError\0"
    "QAbstractSocket::SocketError\0"
    "slotSendToServer\0slotConnected\0"
    "slotDisconected\0slotConnect\0slotSender\0"
    "slotConfig\0slotLaunch\0closeEvent\0"
    "QCloseEvent*\0event\0slotSetDefault\0"
    "saveSettings\0slotMainPage\0slotProcess\0"
    "slotHint\0slotAboutToExit\0slotButtonHandler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  134,    2, 0x06 /* Public */,
       3,    1,  135,    2, 0x06 /* Public */,
       4,    0,  138,    2, 0x06 /* Public */,
       5,    0,  139,    2, 0x06 /* Public */,
       6,    2,  140,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    2,  145,    2, 0x08 /* Private */,
      10,    0,  150,    2, 0x08 /* Private */,
      11,    0,  151,    2, 0x08 /* Private */,
      12,    1,  152,    2, 0x08 /* Private */,
      14,    0,  155,    2, 0x08 /* Private */,
      15,    0,  156,    2, 0x08 /* Private */,
      16,    0,  157,    2, 0x08 /* Private */,
      17,    0,  158,    2, 0x08 /* Private */,
      18,    0,  159,    2, 0x08 /* Private */,
      19,    0,  160,    2, 0x08 /* Private */,
      20,    0,  161,    2, 0x08 /* Private */,
      21,    1,  162,    2, 0x08 /* Private */,
      24,    0,  165,    2, 0x08 /* Private */,
      25,    0,  166,    2, 0x08 /* Private */,
      26,    0,  167,    2, 0x08 /* Private */,
      27,    0,  168,    2, 0x08 /* Private */,
      28,    1,  169,    2, 0x08 /* Private */,
      29,    0,  172,    2, 0x08 /* Private */,
      30,    0,  173,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainClient *_t = static_cast<MainClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closing(); break;
        case 1: _t->error((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->reconnect(); break;
        case 3: _t->launch(); break;
        case 4: _t->change((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->UpdateLabel((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 6: _t->getTasks(); break;
        case 7: _t->slotReadyRead(); break;
        case 8: _t->slotError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 9: _t->slotSendToServer(); break;
        case 10: _t->slotConnected(); break;
        case 11: _t->slotDisconected(); break;
        case 12: _t->slotConnect(); break;
        case 13: _t->slotSender(); break;
        case 14: _t->slotConfig(); break;
        case 15: _t->slotLaunch(); break;
        case 16: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 17: _t->slotSetDefault(); break;
        case 18: _t->saveSettings(); break;
        case 19: _t->slotMainPage(); break;
        case 20: _t->slotProcess(); break;
        case 21: _t->slotHint((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 22: _t->slotAboutToExit(); break;
        case 23: _t->slotButtonHandler(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainClient::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainClient::closing)) {
                *result = 0;
            }
        }
        {
            typedef void (MainClient::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainClient::error)) {
                *result = 1;
            }
        }
        {
            typedef void (MainClient::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainClient::reconnect)) {
                *result = 2;
            }
        }
        {
            typedef void (MainClient::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainClient::launch)) {
                *result = 3;
            }
        }
        {
            typedef void (MainClient::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainClient::change)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject MainClient::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainClient.data,
      qt_meta_data_MainClient,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainClient::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainClient.stringdata0))
        return static_cast<void*>(const_cast< MainClient*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    }
    return _id;
}

// SIGNAL 0
void MainClient::closing()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void MainClient::error(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainClient::reconnect()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void MainClient::launch()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void MainClient::change(QString _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE