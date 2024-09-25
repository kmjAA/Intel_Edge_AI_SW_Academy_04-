/****************************************************************************
** Meta object code from reading C++ file 'tab2sockeclient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../AiotClient_tab2/tab2sockeclient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tab2sockeclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Tab2SockeClient_t {
    QByteArrayData data[7];
    char stringdata0[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Tab2SockeClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Tab2SockeClient_t qt_meta_stringdata_Tab2SockeClient = {
    {
QT_MOC_LITERAL(0, 0, 15), // "Tab2SockeClient"
QT_MOC_LITERAL(1, 16, 11), // "ledWriteSig"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 27), // "on_pPBServerConnect_clicked"
QT_MOC_LITERAL(4, 57, 7), // "checked"
QT_MOC_LITERAL(5, 65, 20), // "socketRecvUpdateSlot"
QT_MOC_LITERAL(6, 86, 24) // "on_pPBSendButton_clicked"

    },
    "Tab2SockeClient\0ledWriteSig\0\0"
    "on_pPBServerConnect_clicked\0checked\0"
    "socketRecvUpdateSlot\0on_pPBSendButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Tab2SockeClient[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   37,    2, 0x08 /* Private */,
       5,    1,   40,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

       0        // eod
};

void Tab2SockeClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Tab2SockeClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ledWriteSig((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_pPBServerConnect_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->socketRecvUpdateSlot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->on_pPBSendButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Tab2SockeClient::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Tab2SockeClient::ledWriteSig)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Tab2SockeClient::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Tab2SockeClient.data,
    qt_meta_data_Tab2SockeClient,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Tab2SockeClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tab2SockeClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Tab2SockeClient.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Tab2SockeClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Tab2SockeClient::ledWriteSig(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
