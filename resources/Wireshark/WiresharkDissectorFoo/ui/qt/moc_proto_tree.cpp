/****************************************************************************
** Meta object code from reading C++ file 'proto_tree.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "proto_tree.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'proto_tree.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ProtoTree_t {
    QByteArrayData data[34];
    char stringdata0[460];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ProtoTree_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ProtoTree_t qt_meta_stringdata_ProtoTree = {
    {
QT_MOC_LITERAL(0, 0, 9), // "ProtoTree"
QT_MOC_LITERAL(1, 10, 13), // "fieldSelected"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 17), // "FieldInformation*"
QT_MOC_LITERAL(4, 43, 21), // "openPacketInNewWindow"
QT_MOC_LITERAL(5, 65, 10), // "goToPacket"
QT_MOC_LITERAL(6, 76, 12), // "relatedFrame"
QT_MOC_LITERAL(7, 89, 18), // "ft_framenum_type_t"
QT_MOC_LITERAL(8, 108, 23), // "showProtocolPreferences"
QT_MOC_LITERAL(9, 132, 11), // "module_name"
QT_MOC_LITERAL(10, 144, 22), // "editProtocolPreference"
QT_MOC_LITERAL(11, 167, 11), // "preference*"
QT_MOC_LITERAL(12, 179, 4), // "pref"
QT_MOC_LITERAL(13, 184, 12), // "pref_module*"
QT_MOC_LITERAL(14, 197, 6), // "module"
QT_MOC_LITERAL(15, 204, 14), // "setCaptureFile"
QT_MOC_LITERAL(16, 219, 13), // "capture_file*"
QT_MOC_LITERAL(17, 233, 2), // "cf"
QT_MOC_LITERAL(18, 236, 16), // "setMonospaceFont"
QT_MOC_LITERAL(19, 253, 9), // "mono_font"
QT_MOC_LITERAL(20, 263, 12), // "syncExpanded"
QT_MOC_LITERAL(21, 276, 5), // "index"
QT_MOC_LITERAL(22, 282, 13), // "syncCollapsed"
QT_MOC_LITERAL(23, 296, 14), // "expandSubtrees"
QT_MOC_LITERAL(24, 311, 16), // "collapseSubtrees"
QT_MOC_LITERAL(25, 328, 9), // "expandAll"
QT_MOC_LITERAL(26, 338, 11), // "collapseAll"
QT_MOC_LITERAL(27, 350, 17), // "itemDoubleClicked"
QT_MOC_LITERAL(28, 368, 20), // "selectedFieldChanged"
QT_MOC_LITERAL(29, 389, 16), // "selectionChanged"
QT_MOC_LITERAL(30, 406, 14), // "QItemSelection"
QT_MOC_LITERAL(31, 421, 8), // "selected"
QT_MOC_LITERAL(32, 430, 10), // "deselected"
QT_MOC_LITERAL(33, 441, 18) // "updateContentWidth"

    },
    "ProtoTree\0fieldSelected\0\0FieldInformation*\0"
    "openPacketInNewWindow\0goToPacket\0"
    "relatedFrame\0ft_framenum_type_t\0"
    "showProtocolPreferences\0module_name\0"
    "editProtocolPreference\0preference*\0"
    "pref\0pref_module*\0module\0setCaptureFile\0"
    "capture_file*\0cf\0setMonospaceFont\0"
    "mono_font\0syncExpanded\0index\0syncCollapsed\0"
    "expandSubtrees\0collapseSubtrees\0"
    "expandAll\0collapseAll\0itemDoubleClicked\0"
    "selectedFieldChanged\0selectionChanged\0"
    "QItemSelection\0selected\0deselected\0"
    "updateContentWidth"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProtoTree[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  104,    2, 0x06 /* Public */,
       4,    1,  107,    2, 0x06 /* Public */,
       5,    1,  110,    2, 0x06 /* Public */,
       6,    2,  113,    2, 0x06 /* Public */,
       8,    1,  118,    2, 0x06 /* Public */,
      10,    2,  121,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    1,  126,    2, 0x0a /* Public */,
      18,    1,  129,    2, 0x0a /* Public */,
      20,    1,  132,    2, 0x0a /* Public */,
      22,    1,  135,    2, 0x0a /* Public */,
      23,    0,  138,    2, 0x0a /* Public */,
      24,    0,  139,    2, 0x0a /* Public */,
      25,    0,  140,    2, 0x0a /* Public */,
      26,    0,  141,    2, 0x0a /* Public */,
      27,    1,  142,    2, 0x0a /* Public */,
      28,    1,  145,    2, 0x0a /* Public */,
      29,    2,  148,    2, 0x09 /* Protected */,
      33,    0,  153,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 7,    2,    2,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 13,   12,   14,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, QMetaType::QFont,   19,
    QMetaType::Void, QMetaType::QModelIndex,   21,
    QMetaType::Void, QMetaType::QModelIndex,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   21,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 30, 0x80000000 | 30,   31,   32,
    QMetaType::Void,

       0        // eod
};

void ProtoTree::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ProtoTree *_t = static_cast<ProtoTree *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fieldSelected((*reinterpret_cast< FieldInformation*(*)>(_a[1]))); break;
        case 1: _t->openPacketInNewWindow((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->goToPacket((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->relatedFrame((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< ft_framenum_type_t(*)>(_a[2]))); break;
        case 4: _t->showProtocolPreferences((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->editProtocolPreference((*reinterpret_cast< preference*(*)>(_a[1])),(*reinterpret_cast< pref_module*(*)>(_a[2]))); break;
        case 6: _t->setCaptureFile((*reinterpret_cast< capture_file*(*)>(_a[1]))); break;
        case 7: _t->setMonospaceFont((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 8: _t->syncExpanded((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 9: _t->syncCollapsed((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 10: _t->expandSubtrees(); break;
        case 11: _t->collapseSubtrees(); break;
        case 12: _t->expandAll(); break;
        case 13: _t->collapseAll(); break;
        case 14: _t->itemDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 15: _t->selectedFieldChanged((*reinterpret_cast< FieldInformation*(*)>(_a[1]))); break;
        case 16: _t->selectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 17: _t->updateContentWidth(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< FieldInformation* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< FieldInformation* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QItemSelection >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ProtoTree::*_t)(FieldInformation * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProtoTree::fieldSelected)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ProtoTree::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProtoTree::openPacketInNewWindow)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ProtoTree::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProtoTree::goToPacket)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ProtoTree::*_t)(int , ft_framenum_type_t );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProtoTree::relatedFrame)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (ProtoTree::*_t)(const QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProtoTree::showProtocolPreferences)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (ProtoTree::*_t)(preference * , pref_module * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProtoTree::editProtocolPreference)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject ProtoTree::staticMetaObject = {
    { &QTreeView::staticMetaObject, qt_meta_stringdata_ProtoTree.data,
      qt_meta_data_ProtoTree,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ProtoTree::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProtoTree::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ProtoTree.stringdata0))
        return static_cast<void*>(const_cast< ProtoTree*>(this));
    return QTreeView::qt_metacast(_clname);
}

int ProtoTree::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void ProtoTree::fieldSelected(FieldInformation * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ProtoTree::openPacketInNewWindow(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ProtoTree::goToPacket(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ProtoTree::relatedFrame(int _t1, ft_framenum_type_t _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ProtoTree::showProtocolPreferences(const QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ProtoTree::editProtocolPreference(preference * _t1, pref_module * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
