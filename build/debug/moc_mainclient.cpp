/****************************************************************************
** Meta object code from reading C++ file 'mainclient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mainclient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainClient_t {
    QByteArrayData data[21];
    char stringdata0[238];
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
QT_MOC_LITERAL(4, 26, 8), // "messaged"
QT_MOC_LITERAL(5, 35, 8), // "xclicked"
QT_MOC_LITERAL(6, 44, 9), // "reconnect"
QT_MOC_LITERAL(7, 54, 13), // "slotReadyRead"
QT_MOC_LITERAL(8, 68, 9), // "slotError"
QT_MOC_LITERAL(9, 78, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(10, 107, 16), // "slotSendToServer"
QT_MOC_LITERAL(11, 124, 13), // "slotConnected"
QT_MOC_LITERAL(12, 138, 15), // "slotDisconected"
QT_MOC_LITERAL(13, 154, 11), // "slotConnect"
QT_MOC_LITERAL(14, 166, 10), // "slotSender"
QT_MOC_LITERAL(15, 177, 10), // "slotConfig"
QT_MOC_LITERAL(16, 188, 10), // "slotLaunch"
QT_MOC_LITERAL(17, 199, 8), // "showinfo"
QT_MOC_LITERAL(18, 208, 10), // "closeEvent"
QT_MOC_LITERAL(19, 219, 12), // "QCloseEvent*"
QT_MOC_LITERAL(20, 232, 5) // "event"

    },
    "MainClient\0closing\0\0error\0messaged\0"
    "xclicked\0reconnect\0slotReadyRead\0"
    "slotError\0QAbstractSocket::SocketError\0"
    "slotSendToServer\0slotConnected\0"
    "slotDisconected\0slotConnect\0slotSender\0"
    "slotConfig\0slotLaunch\0showinfo\0"
    "closeEvent\0QCloseEvent*\0event"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x06 /* Public */,
       3,    0,   95,    2, 0x06 /* Public */,
       4,    0,   96,    2, 0x06 /* Public */,
       5,    0,   97,    2, 0x06 /* Public */,
       6,    0,   98,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   99,    2, 0x08 /* Private */,
       8,    1,  100,    2, 0x08 /* Private */,
      10,    1,  103,    2, 0x08 /* Private */,
      11,    0,  106,    2, 0x08 /* Private */,
      12,    0,  107,    2, 0x08 /* Private */,
      13,    0,  108,    2, 0x08 /* Private */,
      14,    0,  109,    2, 0x08 /* Private */,
      15,    0,  110,    2, 0x08 /* Private */,
      16,    0,  111,    2, 0x08 /* Private */,
      17,    0,  112,    2, 0x08 /* Private */,
      18,    1,  113,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,   20,

       0        // eod
};

void MainClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainClient *_t = static_cast<MainClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closing(); break;
        case 1: _t->error(); break;
        case 2: _t->messaged(); break;
        case 3: _t->xclicked(); break;
        case 4: _t->reconnect(); break;
        case 5: _t->slotReadyRead(); break;
        case 6: _t->slotError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 7: _t->slotSendToServer((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->slotConnected(); break;
        case 9: _t->slotDisconected(); break;
        case 10: _t->slotConnect(); break;
        case 11: _t->slotSender(); break;
        case 12: _t->slotConfig(); break;
        case 13: _t->slotLaunch(); break;
        case 14: _t->showinfo(); break;
        case 15: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MainClient::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainClient::closing)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MainClient::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainClient::error)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MainClient::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainClient::messaged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MainClient::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainClient::xclicked)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (MainClient::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainClient::reconnect)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainClient::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainClient.data,
      qt_meta_data_MainClient,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainClient.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void MainClient::closing()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MainClient::error()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MainClient::messaged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MainClient::xclicked()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MainClient::reconnect()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
