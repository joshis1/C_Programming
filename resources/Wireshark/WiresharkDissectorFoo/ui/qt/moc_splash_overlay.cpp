/****************************************************************************
** Meta object code from reading C++ file 'splash_overlay.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "splash_overlay.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'splash_overlay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SplashOverlay_t {
    QByteArrayData data[7];
    char stringdata0[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SplashOverlay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SplashOverlay_t qt_meta_stringdata_SplashOverlay = {
    {
QT_MOC_LITERAL(0, 0, 13), // "SplashOverlay"
QT_MOC_LITERAL(1, 14, 12), // "splashUpdate"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 17), // "register_action_e"
QT_MOC_LITERAL(4, 46, 6), // "action"
QT_MOC_LITERAL(5, 53, 11), // "const char*"
QT_MOC_LITERAL(6, 65, 7) // "message"

    },
    "SplashOverlay\0splashUpdate\0\0"
    "register_action_e\0action\0const char*\0"
    "message"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SplashOverlay[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,

       0        // eod
};

void SplashOverlay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SplashOverlay *_t = static_cast<SplashOverlay *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->splashUpdate((*reinterpret_cast< register_action_e(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject SplashOverlay::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SplashOverlay.data,
      qt_meta_data_SplashOverlay,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SplashOverlay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SplashOverlay::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SplashOverlay.stringdata0))
        return static_cast<void*>(const_cast< SplashOverlay*>(this));
    return QWidget::qt_metacast(_clname);
}

int SplashOverlay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
