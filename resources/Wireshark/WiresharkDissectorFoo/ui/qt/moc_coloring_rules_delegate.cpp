/****************************************************************************
** Meta object code from reading C++ file 'coloring_rules_delegate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "models/coloring_rules_delegate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'coloring_rules_delegate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ColoringRulesDelegate_t {
    QByteArrayData data[8];
    char stringdata0[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ColoringRulesDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ColoringRulesDelegate_t qt_meta_stringdata_ColoringRulesDelegate = {
    {
QT_MOC_LITERAL(0, 0, 21), // "ColoringRulesDelegate"
QT_MOC_LITERAL(1, 22, 12), // "invalidField"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 5), // "index"
QT_MOC_LITERAL(4, 42, 10), // "errMessage"
QT_MOC_LITERAL(5, 53, 10), // "validField"
QT_MOC_LITERAL(6, 64, 15), // "ruleNameChanged"
QT_MOC_LITERAL(7, 80, 4) // "name"

    },
    "ColoringRulesDelegate\0invalidField\0\0"
    "index\0errMessage\0validField\0ruleNameChanged\0"
    "name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ColoringRulesDelegate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,
       5,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QModelIndex,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

void ColoringRulesDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ColoringRulesDelegate *_t = static_cast<ColoringRulesDelegate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->invalidField((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->validField((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->ruleNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ColoringRulesDelegate::*_t)(const QModelIndex & , const QString & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ColoringRulesDelegate::invalidField)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ColoringRulesDelegate::*_t)(const QModelIndex & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ColoringRulesDelegate::validField)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject ColoringRulesDelegate::staticMetaObject = {
    { &QStyledItemDelegate::staticMetaObject, qt_meta_stringdata_ColoringRulesDelegate.data,
      qt_meta_data_ColoringRulesDelegate,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ColoringRulesDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColoringRulesDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ColoringRulesDelegate.stringdata0))
        return static_cast<void*>(const_cast< ColoringRulesDelegate*>(this));
    return QStyledItemDelegate::qt_metacast(_clname);
}

int ColoringRulesDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
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
void ColoringRulesDelegate::invalidField(const QModelIndex & _t1, const QString & _t2)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(const_cast< ColoringRulesDelegate *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ColoringRulesDelegate::validField(const QModelIndex & _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< ColoringRulesDelegate *>(this), &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
