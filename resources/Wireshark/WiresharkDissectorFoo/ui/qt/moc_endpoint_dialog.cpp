/****************************************************************************
** Meta object code from reading C++ file 'endpoint_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "endpoint_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'endpoint_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_EndpointTreeWidget_t {
    QByteArrayData data[3];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EndpointTreeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EndpointTreeWidget_t qt_meta_stringdata_EndpointTreeWidget = {
    {
QT_MOC_LITERAL(0, 0, 18), // "EndpointTreeWidget"
QT_MOC_LITERAL(1, 19, 21), // "filterActionTriggered"
QT_MOC_LITERAL(2, 41, 0) // ""

    },
    "EndpointTreeWidget\0filterActionTriggered\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EndpointTreeWidget[] = {

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
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void EndpointTreeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EndpointTreeWidget *_t = static_cast<EndpointTreeWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->filterActionTriggered(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject EndpointTreeWidget::staticMetaObject = {
    { &TrafficTableTreeWidget::staticMetaObject, qt_meta_stringdata_EndpointTreeWidget.data,
      qt_meta_data_EndpointTreeWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *EndpointTreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EndpointTreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_EndpointTreeWidget.stringdata0))
        return static_cast<void*>(const_cast< EndpointTreeWidget*>(this));
    return TrafficTableTreeWidget::qt_metacast(_clname);
}

int EndpointTreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TrafficTableTreeWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_EndpointDialog_t {
    QByteArrayData data[4];
    char stringdata0[62];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EndpointDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EndpointDialog_t qt_meta_stringdata_EndpointDialog = {
    {
QT_MOC_LITERAL(0, 0, 14), // "EndpointDialog"
QT_MOC_LITERAL(1, 15, 18), // "captureFileClosing"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 26) // "on_buttonBox_helpRequested"

    },
    "EndpointDialog\0captureFileClosing\0\0"
    "on_buttonBox_helpRequested"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EndpointDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void EndpointDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EndpointDialog *_t = static_cast<EndpointDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->captureFileClosing(); break;
        case 1: _t->on_buttonBox_helpRequested(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject EndpointDialog::staticMetaObject = {
    { &TrafficTableDialog::staticMetaObject, qt_meta_stringdata_EndpointDialog.data,
      qt_meta_data_EndpointDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *EndpointDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EndpointDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_EndpointDialog.stringdata0))
        return static_cast<void*>(const_cast< EndpointDialog*>(this));
    return TrafficTableDialog::qt_metacast(_clname);
}

int EndpointDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TrafficTableDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
