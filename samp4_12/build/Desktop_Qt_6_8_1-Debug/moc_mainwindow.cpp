/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN10MainWindowE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN10MainWindowE = QtMocHelpers::stringData(
    "MainWindow",
    "on_treeWidget_itemChanged",
    "",
    "QTreeWidgetItem*",
    "item",
    "column",
    "on_treeWidget_itemSelectionChanged",
    "on_actAddFolder_triggered",
    "on_actAddFiles_triggered",
    "on_treeWidget_currentItemChanged",
    "current",
    "previous",
    "on_actDeleteItem_triggered",
    "on_actScanItem_triggered",
    "on_actZoomFitH_triggered",
    "on_actZoomIn_triggered",
    "on_actZoomOut_triggered",
    "on_actZoomRealSize_triggered",
    "on_actZoomFitW_triggered",
    "on_actDocKFloat_triggered",
    "checked",
    "on_actDockVisible_triggered",
    "on_actQuit_triggered"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN10MainWindowE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,  104,    2, 0x08,    1 /* Private */,
       6,    0,  109,    2, 0x08,    4 /* Private */,
       7,    0,  110,    2, 0x08,    5 /* Private */,
       8,    0,  111,    2, 0x08,    6 /* Private */,
       9,    2,  112,    2, 0x08,    7 /* Private */,
      12,    0,  117,    2, 0x08,   10 /* Private */,
      13,    0,  118,    2, 0x08,   11 /* Private */,
      14,    0,  119,    2, 0x08,   12 /* Private */,
      15,    0,  120,    2, 0x08,   13 /* Private */,
      16,    0,  121,    2, 0x08,   14 /* Private */,
      17,    0,  122,    2, 0x08,   15 /* Private */,
      18,    0,  123,    2, 0x08,   16 /* Private */,
      19,    1,  124,    2, 0x08,   17 /* Private */,
      21,    1,  127,    2, 0x08,   19 /* Private */,
      22,    0,  130,    2, 0x08,   21 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,   10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_ZN10MainWindowE.offsetsAndSizes,
    qt_meta_data_ZN10MainWindowE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN10MainWindowE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'on_treeWidget_itemChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_treeWidget_itemSelectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actAddFolder_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actAddFiles_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_treeWidget_currentItemChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        // method 'on_actDeleteItem_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actScanItem_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actZoomFitH_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actZoomIn_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actZoomOut_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actZoomRealSize_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actZoomFitW_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actDocKFloat_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_actDockVisible_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_actQuit_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MainWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->on_treeWidget_itemChanged((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->on_treeWidget_itemSelectionChanged(); break;
        case 2: _t->on_actAddFolder_triggered(); break;
        case 3: _t->on_actAddFiles_triggered(); break;
        case 4: _t->on_treeWidget_currentItemChanged((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[2]))); break;
        case 5: _t->on_actDeleteItem_triggered(); break;
        case 6: _t->on_actScanItem_triggered(); break;
        case 7: _t->on_actZoomFitH_triggered(); break;
        case 8: _t->on_actZoomIn_triggered(); break;
        case 9: _t->on_actZoomOut_triggered(); break;
        case 10: _t->on_actZoomRealSize_triggered(); break;
        case 11: _t->on_actZoomFitW_triggered(); break;
        case 12: _t->on_actDocKFloat_triggered((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->on_actDockVisible_triggered((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 14: _t->on_actQuit_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN10MainWindowE.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
