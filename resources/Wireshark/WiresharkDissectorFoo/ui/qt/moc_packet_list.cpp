/****************************************************************************
** Meta object code from reading C++ file 'packet_list.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "packet_list.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'packet_list.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PacketList_t {
    QByteArrayData data[73];
    char stringdata0[1004];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PacketList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PacketList_t qt_meta_stringdata_PacketList = {
    {
QT_MOC_LITERAL(0, 0, 10), // "PacketList"
QT_MOC_LITERAL(1, 11, 23), // "packetDissectionChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 21), // "showColumnPreferences"
QT_MOC_LITERAL(4, 58, 9), // "pane_name"
QT_MOC_LITERAL(5, 68, 10), // "editColumn"
QT_MOC_LITERAL(6, 79, 6), // "column"
QT_MOC_LITERAL(7, 86, 18), // "packetListScrolled"
QT_MOC_LITERAL(8, 105, 6), // "at_end"
QT_MOC_LITERAL(9, 112, 23), // "showProtocolPreferences"
QT_MOC_LITERAL(10, 136, 11), // "module_name"
QT_MOC_LITERAL(11, 148, 22), // "editProtocolPreference"
QT_MOC_LITERAL(12, 171, 11), // "preference*"
QT_MOC_LITERAL(13, 183, 4), // "pref"
QT_MOC_LITERAL(14, 188, 12), // "pref_module*"
QT_MOC_LITERAL(15, 201, 6), // "module"
QT_MOC_LITERAL(16, 208, 13), // "frameSelected"
QT_MOC_LITERAL(17, 222, 8), // "frameNum"
QT_MOC_LITERAL(18, 231, 13), // "fieldSelected"
QT_MOC_LITERAL(19, 245, 17), // "FieldInformation*"
QT_MOC_LITERAL(20, 263, 12), // "rowsInserted"
QT_MOC_LITERAL(21, 276, 6), // "parent"
QT_MOC_LITERAL(22, 283, 5), // "start"
QT_MOC_LITERAL(23, 289, 3), // "end"
QT_MOC_LITERAL(24, 293, 7), // "drawRow"
QT_MOC_LITERAL(25, 301, 9), // "QPainter*"
QT_MOC_LITERAL(26, 311, 7), // "painter"
QT_MOC_LITERAL(27, 319, 20), // "QStyleOptionViewItem"
QT_MOC_LITERAL(28, 340, 6), // "option"
QT_MOC_LITERAL(29, 347, 5), // "index"
QT_MOC_LITERAL(30, 353, 14), // "setCaptureFile"
QT_MOC_LITERAL(31, 368, 13), // "capture_file*"
QT_MOC_LITERAL(32, 382, 2), // "cf"
QT_MOC_LITERAL(33, 385, 16), // "setMonospaceFont"
QT_MOC_LITERAL(34, 402, 9), // "mono_font"
QT_MOC_LITERAL(35, 412, 12), // "goNextPacket"
QT_MOC_LITERAL(36, 425, 16), // "goPreviousPacket"
QT_MOC_LITERAL(37, 442, 13), // "goFirstPacket"
QT_MOC_LITERAL(38, 456, 13), // "user_selected"
QT_MOC_LITERAL(39, 470, 12), // "goLastPacket"
QT_MOC_LITERAL(40, 483, 10), // "goToPacket"
QT_MOC_LITERAL(41, 494, 6), // "packet"
QT_MOC_LITERAL(42, 501, 5), // "hf_id"
QT_MOC_LITERAL(43, 507, 19), // "goNextHistoryPacket"
QT_MOC_LITERAL(44, 527, 23), // "goPreviousHistoryPacket"
QT_MOC_LITERAL(45, 551, 9), // "markFrame"
QT_MOC_LITERAL(46, 561, 22), // "markAllDisplayedFrames"
QT_MOC_LITERAL(47, 584, 3), // "set"
QT_MOC_LITERAL(48, 588, 11), // "ignoreFrame"
QT_MOC_LITERAL(49, 600, 24), // "ignoreAllDisplayedFrames"
QT_MOC_LITERAL(50, 625, 16), // "setTimeReference"
QT_MOC_LITERAL(51, 642, 22), // "unsetAllTimeReferences"
QT_MOC_LITERAL(52, 665, 14), // "applyTimeShift"
QT_MOC_LITERAL(53, 680, 14), // "recolorPackets"
QT_MOC_LITERAL(54, 695, 20), // "redrawVisiblePackets"
QT_MOC_LITERAL(55, 716, 37), // "redrawVisiblePacketsDontSelec..."
QT_MOC_LITERAL(56, 754, 14), // "columnsChanged"
QT_MOC_LITERAL(57, 769, 13), // "fieldsChanged"
QT_MOC_LITERAL(58, 783, 18), // "preferencesChanged"
QT_MOC_LITERAL(59, 802, 14), // "showHeaderMenu"
QT_MOC_LITERAL(60, 817, 3), // "pos"
QT_MOC_LITERAL(61, 821, 19), // "headerMenuTriggered"
QT_MOC_LITERAL(62, 841, 25), // "columnVisibilityTriggered"
QT_MOC_LITERAL(63, 867, 14), // "sectionResized"
QT_MOC_LITERAL(64, 882, 3), // "col"
QT_MOC_LITERAL(65, 886, 9), // "new_width"
QT_MOC_LITERAL(66, 896, 12), // "sectionMoved"
QT_MOC_LITERAL(67, 909, 16), // "updateRowHeights"
QT_MOC_LITERAL(68, 926, 8), // "ih_index"
QT_MOC_LITERAL(69, 935, 11), // "copySummary"
QT_MOC_LITERAL(70, 947, 25), // "vScrollBarActionTriggered"
QT_MOC_LITERAL(71, 973, 14), // "drawFarOverlay"
QT_MOC_LITERAL(72, 988, 15) // "drawNearOverlay"

    },
    "PacketList\0packetDissectionChanged\0\0"
    "showColumnPreferences\0pane_name\0"
    "editColumn\0column\0packetListScrolled\0"
    "at_end\0showProtocolPreferences\0"
    "module_name\0editProtocolPreference\0"
    "preference*\0pref\0pref_module*\0module\0"
    "frameSelected\0frameNum\0fieldSelected\0"
    "FieldInformation*\0rowsInserted\0parent\0"
    "start\0end\0drawRow\0QPainter*\0painter\0"
    "QStyleOptionViewItem\0option\0index\0"
    "setCaptureFile\0capture_file*\0cf\0"
    "setMonospaceFont\0mono_font\0goNextPacket\0"
    "goPreviousPacket\0goFirstPacket\0"
    "user_selected\0goLastPacket\0goToPacket\0"
    "packet\0hf_id\0goNextHistoryPacket\0"
    "goPreviousHistoryPacket\0markFrame\0"
    "markAllDisplayedFrames\0set\0ignoreFrame\0"
    "ignoreAllDisplayedFrames\0setTimeReference\0"
    "unsetAllTimeReferences\0applyTimeShift\0"
    "recolorPackets\0redrawVisiblePackets\0"
    "redrawVisiblePacketsDontSelectCurrent\0"
    "columnsChanged\0fieldsChanged\0"
    "preferencesChanged\0showHeaderMenu\0pos\0"
    "headerMenuTriggered\0columnVisibilityTriggered\0"
    "sectionResized\0col\0new_width\0sectionMoved\0"
    "updateRowHeights\0ih_index\0copySummary\0"
    "vScrollBarActionTriggered\0drawFarOverlay\0"
    "drawNearOverlay"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PacketList[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      44,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  234,    2, 0x06 /* Public */,
       3,    1,  235,    2, 0x06 /* Public */,
       5,    1,  238,    2, 0x06 /* Public */,
       7,    1,  241,    2, 0x06 /* Public */,
       9,    1,  244,    2, 0x06 /* Public */,
      11,    2,  247,    2, 0x06 /* Public */,
      16,    1,  252,    2, 0x06 /* Public */,
      18,    1,  255,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      20,    3,  258,    2, 0x09 /* Protected */,
      24,    3,  265,    2, 0x09 /* Protected */,
      30,    1,  272,    2, 0x0a /* Public */,
      33,    1,  275,    2, 0x0a /* Public */,
      35,    0,  278,    2, 0x0a /* Public */,
      36,    0,  279,    2, 0x0a /* Public */,
      37,    1,  280,    2, 0x0a /* Public */,
      37,    0,  283,    2, 0x2a /* Public | MethodCloned */,
      39,    0,  284,    2, 0x0a /* Public */,
      40,    1,  285,    2, 0x0a /* Public */,
      40,    2,  288,    2, 0x0a /* Public */,
      43,    0,  293,    2, 0x0a /* Public */,
      44,    0,  294,    2, 0x0a /* Public */,
      45,    0,  295,    2, 0x0a /* Public */,
      46,    1,  296,    2, 0x0a /* Public */,
      48,    0,  299,    2, 0x0a /* Public */,
      49,    1,  300,    2, 0x0a /* Public */,
      50,    0,  303,    2, 0x0a /* Public */,
      51,    0,  304,    2, 0x0a /* Public */,
      52,    0,  305,    2, 0x0a /* Public */,
      53,    0,  306,    2, 0x0a /* Public */,
      54,    0,  307,    2, 0x0a /* Public */,
      55,    0,  308,    2, 0x0a /* Public */,
      56,    0,  309,    2, 0x0a /* Public */,
      57,    1,  310,    2, 0x0a /* Public */,
      58,    0,  313,    2, 0x0a /* Public */,
      59,    1,  314,    2, 0x08 /* Private */,
      61,    0,  317,    2, 0x08 /* Private */,
      62,    0,  318,    2, 0x08 /* Private */,
      63,    3,  319,    2, 0x08 /* Private */,
      66,    3,  326,    2, 0x08 /* Private */,
      67,    1,  333,    2, 0x08 /* Private */,
      69,    0,  336,    2, 0x08 /* Private */,
      70,    1,  337,    2, 0x08 /* Private */,
      71,    0,  340,    2, 0x08 /* Private */,
      72,    0,  341,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 14,   13,   15,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, 0x80000000 | 19,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,   21,   22,   23,
    QMetaType::Void, 0x80000000 | 25, 0x80000000 | 27, QMetaType::QModelIndex,   26,   28,   29,
    QMetaType::Void, 0x80000000 | 31,   32,
    QMetaType::Void, QMetaType::QFont,   34,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   38,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   41,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   41,   42,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   47,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   47,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 31,   32,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   60,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   64,    2,   65,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, QMetaType::QModelIndex,   68,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PacketList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PacketList *_t = static_cast<PacketList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->packetDissectionChanged(); break;
        case 1: _t->showColumnPreferences((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->editColumn((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->packetListScrolled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->showProtocolPreferences((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->editProtocolPreference((*reinterpret_cast< preference*(*)>(_a[1])),(*reinterpret_cast< pref_module*(*)>(_a[2]))); break;
        case 6: _t->frameSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->fieldSelected((*reinterpret_cast< FieldInformation*(*)>(_a[1]))); break;
        case 8: _t->rowsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 9: _t->drawRow((*reinterpret_cast< QPainter*(*)>(_a[1])),(*reinterpret_cast< const QStyleOptionViewItem(*)>(_a[2])),(*reinterpret_cast< const QModelIndex(*)>(_a[3]))); break;
        case 10: _t->setCaptureFile((*reinterpret_cast< capture_file*(*)>(_a[1]))); break;
        case 11: _t->setMonospaceFont((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 12: _t->goNextPacket(); break;
        case 13: _t->goPreviousPacket(); break;
        case 14: _t->goFirstPacket((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->goFirstPacket(); break;
        case 16: _t->goLastPacket(); break;
        case 17: _t->goToPacket((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->goToPacket((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 19: _t->goNextHistoryPacket(); break;
        case 20: _t->goPreviousHistoryPacket(); break;
        case 21: _t->markFrame(); break;
        case 22: _t->markAllDisplayedFrames((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->ignoreFrame(); break;
        case 24: _t->ignoreAllDisplayedFrames((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->setTimeReference(); break;
        case 26: _t->unsetAllTimeReferences(); break;
        case 27: _t->applyTimeShift(); break;
        case 28: _t->recolorPackets(); break;
        case 29: _t->redrawVisiblePackets(); break;
        case 30: _t->redrawVisiblePacketsDontSelectCurrent(); break;
        case 31: _t->columnsChanged(); break;
        case 32: _t->fieldsChanged((*reinterpret_cast< capture_file*(*)>(_a[1]))); break;
        case 33: _t->preferencesChanged(); break;
        case 34: _t->showHeaderMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 35: _t->headerMenuTriggered(); break;
        case 36: _t->columnVisibilityTriggered(); break;
        case 37: _t->sectionResized((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 38: _t->sectionMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 39: _t->updateRowHeights((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 40: _t->copySummary(); break;
        case 41: _t->vScrollBarActionTriggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 42: _t->drawFarOverlay(); break;
        case 43: _t->drawNearOverlay(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< FieldInformation* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PacketList::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PacketList::packetDissectionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PacketList::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PacketList::showColumnPreferences)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (PacketList::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PacketList::editColumn)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (PacketList::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PacketList::packetListScrolled)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (PacketList::*_t)(const QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PacketList::showProtocolPreferences)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (PacketList::*_t)(preference * , pref_module * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PacketList::editProtocolPreference)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (PacketList::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PacketList::frameSelected)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (PacketList::*_t)(FieldInformation * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PacketList::fieldSelected)) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject PacketList::staticMetaObject = {
    { &QTreeView::staticMetaObject, qt_meta_stringdata_PacketList.data,
      qt_meta_data_PacketList,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PacketList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PacketList::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PacketList.stringdata0))
        return static_cast<void*>(const_cast< PacketList*>(this));
    return QTreeView::qt_metacast(_clname);
}

int PacketList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 44)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 44;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 44)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 44;
    }
    return _id;
}

// SIGNAL 0
void PacketList::packetDissectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void PacketList::showColumnPreferences(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PacketList::editColumn(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PacketList::packetListScrolled(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PacketList::showProtocolPreferences(const QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void PacketList::editProtocolPreference(preference * _t1, pref_module * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void PacketList::frameSelected(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void PacketList::fieldSelected(FieldInformation * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
