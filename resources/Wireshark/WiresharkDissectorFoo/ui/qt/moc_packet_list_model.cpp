/****************************************************************************
** Meta object code from reading C++ file 'packet_list_model.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "models/packet_list_model.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'packet_list_model.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PacketListModel_t {
    QByteArrayData data[28];
    char stringdata0[344];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PacketListModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PacketListModel_t qt_meta_stringdata_PacketListModel = {
    {
QT_MOC_LITERAL(0, 0, 15), // "PacketListModel"
QT_MOC_LITERAL(1, 16, 10), // "goToPacket"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 19), // "maxLineCountChanged"
QT_MOC_LITERAL(4, 48, 8), // "ih_index"
QT_MOC_LITERAL(5, 57, 17), // "itemHeightChanged"
QT_MOC_LITERAL(6, 75, 14), // "pushBusyStatus"
QT_MOC_LITERAL(7, 90, 6), // "status"
QT_MOC_LITERAL(8, 97, 13), // "popBusyStatus"
QT_MOC_LITERAL(9, 111, 18), // "pushProgressStatus"
QT_MOC_LITERAL(10, 130, 7), // "animate"
QT_MOC_LITERAL(11, 138, 17), // "terminate_is_stop"
QT_MOC_LITERAL(12, 156, 9), // "gboolean*"
QT_MOC_LITERAL(13, 166, 9), // "stop_flag"
QT_MOC_LITERAL(14, 176, 20), // "updateProgressStatus"
QT_MOC_LITERAL(15, 197, 5), // "value"
QT_MOC_LITERAL(16, 203, 17), // "popProgressStatus"
QT_MOC_LITERAL(17, 221, 22), // "bgColorizationProgress"
QT_MOC_LITERAL(18, 244, 5), // "first"
QT_MOC_LITERAL(19, 250, 4), // "last"
QT_MOC_LITERAL(20, 255, 4), // "sort"
QT_MOC_LITERAL(21, 260, 6), // "column"
QT_MOC_LITERAL(22, 267, 13), // "Qt::SortOrder"
QT_MOC_LITERAL(23, 281, 5), // "order"
QT_MOC_LITERAL(24, 287, 16), // "flushVisibleRows"
QT_MOC_LITERAL(25, 304, 11), // "dissectIdle"
QT_MOC_LITERAL(26, 316, 5), // "reset"
QT_MOC_LITERAL(27, 322, 21) // "emitItemHeightChanged"

    },
    "PacketListModel\0goToPacket\0\0"
    "maxLineCountChanged\0ih_index\0"
    "itemHeightChanged\0pushBusyStatus\0"
    "status\0popBusyStatus\0pushProgressStatus\0"
    "animate\0terminate_is_stop\0gboolean*\0"
    "stop_flag\0updateProgressStatus\0value\0"
    "popProgressStatus\0bgColorizationProgress\0"
    "first\0last\0sort\0column\0Qt::SortOrder\0"
    "order\0flushVisibleRows\0dissectIdle\0"
    "reset\0emitItemHeightChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PacketListModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       3,    1,   92,    2, 0x06 /* Public */,
       5,    1,   95,    2, 0x06 /* Public */,
       6,    1,   98,    2, 0x06 /* Public */,
       8,    0,  101,    2, 0x06 /* Public */,
       9,    4,  102,    2, 0x06 /* Public */,
      14,    1,  111,    2, 0x06 /* Public */,
      16,    0,  114,    2, 0x06 /* Public */,
      17,    2,  115,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      20,    2,  120,    2, 0x0a /* Public */,
      20,    1,  125,    2, 0x2a /* Public | MethodCloned */,
      24,    0,  128,    2, 0x0a /* Public */,
      25,    1,  129,    2, 0x0a /* Public */,
      25,    0,  132,    2, 0x2a /* Public | MethodCloned */,
      27,    1,  133,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QModelIndex,    4,
    QMetaType::Void, QMetaType::QModelIndex,    4,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, QMetaType::Bool, 0x80000000 | 12,    7,   10,   11,   13,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   18,   19,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 22,   21,   23,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    4,

       0        // eod
};

void PacketListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PacketListModel *_t = static_cast<PacketListModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->goToPacket((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->maxLineCountChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->itemHeightChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->pushBusyStatus((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->popBusyStatus(); break;
        case 5: _t->pushProgressStatus((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< gboolean*(*)>(_a[4]))); break;
        case 6: _t->updateProgressStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->popProgressStatus(); break;
        case 8: _t->bgColorizationProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->sort((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Qt::SortOrder(*)>(_a[2]))); break;
        case 10: _t->sort((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->flushVisibleRows(); break;
        case 12: _t->dissectIdle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->dissectIdle(); break;
        case 14: _t->emitItemHeightChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PacketListModel::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PacketListModel::goToPacket)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PacketListModel::*_t)(const QModelIndex & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PacketListModel::maxLineCountChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (PacketListModel::*_t)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PacketListModel::itemHeightChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (PacketListModel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PacketListModel::pushBusyStatus)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (PacketListModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PacketListModel::popBusyStatus)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (PacketListModel::*_t)(const QString & , bool , bool , gboolean * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PacketListModel::pushProgressStatus)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (PacketListModel::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PacketListModel::updateProgressStatus)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (PacketListModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PacketListModel::popProgressStatus)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (PacketListModel::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PacketListModel::bgColorizationProgress)) {
                *result = 8;
                return;
            }
        }
    }
}

const QMetaObject PacketListModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_PacketListModel.data,
      qt_meta_data_PacketListModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PacketListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PacketListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PacketListModel.stringdata0))
        return static_cast<void*>(const_cast< PacketListModel*>(this));
    return QAbstractItemModel::qt_metacast(_clname);
}

int PacketListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void PacketListModel::goToPacket(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PacketListModel::maxLineCountChanged(const QModelIndex & _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< PacketListModel *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PacketListModel::itemHeightChanged(const QModelIndex & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PacketListModel::pushBusyStatus(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PacketListModel::popBusyStatus()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void PacketListModel::pushProgressStatus(const QString & _t1, bool _t2, bool _t3, gboolean * _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void PacketListModel::updateProgressStatus(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void PacketListModel::popProgressStatus()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void PacketListModel::bgColorizationProgress(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_END_MOC_NAMESPACE
