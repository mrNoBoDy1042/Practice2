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
    QByteArrayData data[23];
    char stringdata0[263];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainClient_t qt_meta_stringdata_MainClient = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainClient"
QT_MOC_LITERAL(1, 11, 9), // "reconnect"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 6), // "launch"
QT_MOC_LITERAL(4, 29, 6), // "change"
QT_MOC_LITERAL(5, 36, 11), // "UpdateLabel"
QT_MOC_LITERAL(6, 48, 3), // "CPU"
QT_MOC_LITERAL(7, 52, 3), // "GPU"
QT_MOC_LITERAL(8, 56, 8), // "getTasks"
QT_MOC_LITERAL(9, 65, 13), // "slotReadyRead"
QT_MOC_LITERAL(10, 79, 9), // "slotError"
QT_MOC_LITERAL(11, 89, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(12, 118, 13), // "slotConnected"
QT_MOC_LITERAL(13, 132, 15), // "slotDisconected"
QT_MOC_LITERAL(14, 148, 11), // "slotConnect"
QT_MOC_LITERAL(15, 160, 10), // "slotLaunch"
QT_MOC_LITERAL(16, 171, 10), // "closeEvent"
QT_MOC_LITERAL(17, 182, 12), // "QCloseEvent*"
QT_MOC_LITERAL(18, 195, 5), // "event"
QT_MOC_LITERAL(19, 201, 14), // "slotSetDefault"
QT_MOC_LITERAL(20, 216, 12), // "saveSettings"
QT_MOC_LITERAL(21, 229, 15), // "slotAboutToExit"
QT_MOC_LITERAL(22, 245, 17) // "slotButtonHandler"

    },
    "MainClient\0reconnect\0\0launch\0change\0"
    "UpdateLabel\0CPU\0GPU\0getTasks\0slotReadyRead\0"
    "slotError\0QAbstractSocket::SocketError\0"
    "slotConnected\0slotDisconected\0slotConnect\0"
    "slotLaunch\0closeEvent\0QCloseEvent*\0"
    "event\0slotSetDefault\0saveSettings\0"
    "slotAboutToExit\0slotButtonHandler"
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
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x06 /* Public */,
       3,    0,   95,    2, 0x06 /* Public */,
       4,    2,   96,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    2,  101,    2, 0x08 /* Private */,
       8,    0,  106,    2, 0x08 /* Private */,
       9,    0,  107,    2, 0x08 /* Private */,
      10,    1,  108,    2, 0x08 /* Private */,
      12,    0,  111,    2, 0x08 /* Private */,
      13,    0,  112,    2, 0x08 /* Private */,
      14,    0,  113,    2, 0x08 /* Private */,
      15,    0,  114,    2, 0x08 /* Private */,
      16,    1,  115,    2, 0x08 /* Private */,
      19,    0,  118,    2, 0x08 /* Private */,
      20,    0,  119,    2, 0x08 /* Private */,
      21,    0,  120,    2, 0x08 /* Private */,
      22,    0,  121,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void,
    QMetaType::Void,
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
        case 0: _t->reconnect(); break;
        case 1: _t->launch(); break;
        case 2: _t->change((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->UpdateLabel((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->getTasks(); break;
        case 5: _t->slotReadyRead(); break;
        case 6: _t->slotError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 7: _t->slotConnected(); break;
        case 8: _t->slotDisconected(); break;
        case 9: _t->slotConnect(); break;
        case 10: _t->slotLaunch(); break;
        case 11: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 12: _t->slotSetDefault(); break;
        case 13: _t->saveSettings(); break;
        case 14: _t->slotAboutToExit(); break;
        case 15: _t->slotButtonHandler(); break;
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
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainClient::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainClient::reconnect)) {
                *result = 0;
            }
        }
        {
            typedef void (MainClient::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainClient::launch)) {
                *result = 1;
            }
        }
        {
            typedef void (MainClient::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainClient::change)) {
                *result = 2;
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
void MainClient::reconnect()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void MainClient::launch()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void MainClient::change(QString _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
