/****************************************************************************
** Meta object code from reading C++ file 'sctp_graph_arwnd_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "sctp_graph_arwnd_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sctp_graph_arwnd_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SCTPGraphArwndDialog_t {
    QByteArrayData data[12];
    char stringdata0[164];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SCTPGraphArwndDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SCTPGraphArwndDialog_t qt_meta_stringdata_SCTPGraphArwndDialog = {
    {
QT_MOC_LITERAL(0, 0, 20), // "SCTPGraphArwndDialog"
QT_MOC_LITERAL(1, 21, 14), // "setCaptureFile"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 13), // "capture_file*"
QT_MOC_LITERAL(4, 51, 2), // "cf"
QT_MOC_LITERAL(5, 54, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(6, 78, 12), // "graphClicked"
QT_MOC_LITERAL(7, 91, 21), // "QCPAbstractPlottable*"
QT_MOC_LITERAL(8, 113, 9), // "plottable"
QT_MOC_LITERAL(9, 123, 12), // "QMouseEvent*"
QT_MOC_LITERAL(10, 136, 5), // "event"
QT_MOC_LITERAL(11, 142, 21) // "on_saveButton_clicked"

    },
    "SCTPGraphArwndDialog\0setCaptureFile\0"
    "\0capture_file*\0cf\0on_pushButton_4_clicked\0"
    "graphClicked\0QCPAbstractPlottable*\0"
    "plottable\0QMouseEvent*\0event\0"
    "on_saveButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SCTPGraphArwndDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       5,    0,   37,    2, 0x08 /* Private */,
       6,    2,   38,    2, 0x08 /* Private */,
      11,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 9,    8,   10,
    QMetaType::Void,

       0        // eod
};

void SCTPGraphArwndDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SCTPGraphArwndDialog *_t = static_cast<SCTPGraphArwndDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setCaptureFile((*reinterpret_cast< capture_file*(*)>(_a[1]))); break;
        case 1: _t->on_pushButton_4_clicked(); break;
        case 2: _t->graphClicked((*reinterpret_cast< QCPAbstractPlottable*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 3: _t->on_saveButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject SCTPGraphArwndDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SCTPGraphArwndDialog.data,
      qt_meta_data_SCTPGraphArwndDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SCTPGraphArwndDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SCTPGraphArwndDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SCTPGraphArwndDialog.stringdata0))
        return static_cast<void*>(const_cast< SCTPGraphArwndDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int SCTPGraphArwndDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
