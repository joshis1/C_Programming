/****************************************************************************
** Meta object code from reading C++ file 'uat_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "uat_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uat_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UatDialog_t {
    QByteArrayData data[21];
    char stringdata0[370];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UatDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UatDialog_t qt_meta_stringdata_UatDialog = {
    {
QT_MOC_LITERAL(0, 0, 9), // "UatDialog"
QT_MOC_LITERAL(1, 10, 15), // "copyFromProfile"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 8), // "QAction*"
QT_MOC_LITERAL(4, 36, 6), // "action"
QT_MOC_LITERAL(5, 43, 16), // "modelDataChanged"
QT_MOC_LITERAL(6, 60, 7), // "topLeft"
QT_MOC_LITERAL(7, 68, 16), // "modelRowsRemoved"
QT_MOC_LITERAL(8, 85, 14), // "modelRowsReset"
QT_MOC_LITERAL(9, 100, 33), // "on_uatTreeView_currentItemCha..."
QT_MOC_LITERAL(10, 134, 7), // "current"
QT_MOC_LITERAL(11, 142, 8), // "previous"
QT_MOC_LITERAL(12, 151, 13), // "acceptChanges"
QT_MOC_LITERAL(13, 165, 13), // "rejectChanges"
QT_MOC_LITERAL(14, 179, 24), // "on_newToolButton_clicked"
QT_MOC_LITERAL(15, 204, 27), // "on_deleteToolButton_clicked"
QT_MOC_LITERAL(16, 232, 25), // "on_copyToolButton_clicked"
QT_MOC_LITERAL(17, 258, 27), // "on_moveUpToolButton_clicked"
QT_MOC_LITERAL(18, 286, 29), // "on_moveDownToolButton_clicked"
QT_MOC_LITERAL(19, 316, 26), // "on_clearToolButton_clicked"
QT_MOC_LITERAL(20, 343, 26) // "on_buttonBox_helpRequested"

    },
    "UatDialog\0copyFromProfile\0\0QAction*\0"
    "action\0modelDataChanged\0topLeft\0"
    "modelRowsRemoved\0modelRowsReset\0"
    "on_uatTreeView_currentItemChanged\0"
    "current\0previous\0acceptChanges\0"
    "rejectChanges\0on_newToolButton_clicked\0"
    "on_deleteToolButton_clicked\0"
    "on_copyToolButton_clicked\0"
    "on_moveUpToolButton_clicked\0"
    "on_moveDownToolButton_clicked\0"
    "on_clearToolButton_clicked\0"
    "on_buttonBox_helpRequested"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UatDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x08 /* Private */,
       5,    1,   87,    2, 0x08 /* Private */,
       7,    0,   90,    2, 0x08 /* Private */,
       8,    0,   91,    2, 0x08 /* Private */,
       9,    2,   92,    2, 0x08 /* Private */,
      12,    0,   97,    2, 0x08 /* Private */,
      13,    0,   98,    2, 0x08 /* Private */,
      14,    0,   99,    2, 0x08 /* Private */,
      15,    0,  100,    2, 0x08 /* Private */,
      16,    0,  101,    2, 0x08 /* Private */,
      17,    0,  102,    2, 0x08 /* Private */,
      18,    0,  103,    2, 0x08 /* Private */,
      19,    0,  104,    2, 0x08 /* Private */,
      20,    0,  105,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QModelIndex,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,   10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void UatDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UatDialog *_t = static_cast<UatDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->copyFromProfile((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 1: _t->modelDataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->modelRowsRemoved(); break;
        case 3: _t->modelRowsReset(); break;
        case 4: _t->on_uatTreeView_currentItemChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 5: _t->acceptChanges(); break;
        case 6: _t->rejectChanges(); break;
        case 7: _t->on_newToolButton_clicked(); break;
        case 8: _t->on_deleteToolButton_clicked(); break;
        case 9: _t->on_copyToolButton_clicked(); break;
        case 10: _t->on_moveUpToolButton_clicked(); break;
        case 11: _t->on_moveDownToolButton_clicked(); break;
        case 12: _t->on_clearToolButton_clicked(); break;
        case 13: _t->on_buttonBox_helpRequested(); break;
        default: ;
        }
    }
}

const QMetaObject UatDialog::staticMetaObject = {
    { &GeometryStateDialog::staticMetaObject, qt_meta_stringdata_UatDialog.data,
      qt_meta_data_UatDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UatDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UatDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UatDialog.stringdata0))
        return static_cast<void*>(const_cast< UatDialog*>(this));
    return GeometryStateDialog::qt_metacast(_clname);
}

int UatDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GeometryStateDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
