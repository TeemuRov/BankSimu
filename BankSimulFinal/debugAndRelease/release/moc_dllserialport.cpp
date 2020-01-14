/****************************************************************************
** Meta object code from reading C++ file 'dllserialport.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../DLLSerialPort/dllserialport.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dllserialport.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DLLSerialPort_t {
    QByteArrayData data[5];
    char stringdata0[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DLLSerialPort_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DLLSerialPort_t qt_meta_stringdata_DLLSerialPort = {
    {
QT_MOC_LITERAL(0, 0, 13), // "DLLSerialPort"
QT_MOC_LITERAL(1, 14, 20), // "layerInterfaceSignal"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 27), // "emitInterfaceSignalFunction"
QT_MOC_LITERAL(4, 64, 13) // "printCardInfo"

    },
    "DLLSerialPort\0layerInterfaceSignal\0\0"
    "emitInterfaceSignalFunction\0printCardInfo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DLLSerialPort[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   30,    2, 0x0a /* Public */,
       4,    0,   31,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::QString,

       0        // eod
};

void DLLSerialPort::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DLLSerialPort *_t = static_cast<DLLSerialPort *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->layerInterfaceSignal(); break;
        case 1: _t->emitInterfaceSignalFunction(); break;
        case 2: { QString _r = _t->printCardInfo();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DLLSerialPort::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DLLSerialPort::layerInterfaceSignal)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject DLLSerialPort::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DLLSerialPort.data,
      qt_meta_data_DLLSerialPort,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DLLSerialPort::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DLLSerialPort::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DLLSerialPort.stringdata0))
        return static_cast<void*>(const_cast< DLLSerialPort*>(this));
    return QObject::qt_metacast(_clname);
}

int DLLSerialPort::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void DLLSerialPort::layerInterfaceSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
