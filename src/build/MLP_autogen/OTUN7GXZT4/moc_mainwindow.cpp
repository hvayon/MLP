/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../MLP/view/mainwindow.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_MainWindow_t {
    uint offsetsAndSizes[38];
    char stringdata0[11];
    char stringdata1[25];
    char stringdata2[1];
    char stringdata3[23];
    char stringdata4[25];
    char stringdata5[17];
    char stringdata6[22];
    char stringdata7[33];
    char stringdata8[32];
    char stringdata9[20];
    char stringdata10[12];
    char stringdata11[2];
    char stringdata12[17];
    char stringdata13[25];
    char stringdata14[20];
    char stringdata15[21];
    char stringdata16[25];
    char stringdata17[13];
    char stringdata18[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_MainWindow_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 24),  // "terminateTrainingProcess"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 22),  // "on_modelLoader_clicked"
        QT_MOC_LITERAL(60, 24),  // "on_classifyImage_clicked"
        QT_MOC_LITERAL(85, 16),  // "on_clear_clicked"
        QT_MOC_LITERAL(102, 21),  // "on_trainModel_clicked"
        QT_MOC_LITERAL(124, 32),  // "on_chooseTrainingDataset_clicked"
        QT_MOC_LITERAL(157, 31),  // "on_chooseTestingDataset_clicked"
        QT_MOC_LITERAL(189, 19),  // "updateStatusMessage"
        QT_MOC_LITERAL(209, 11),  // "std::string"
        QT_MOC_LITERAL(221, 1),  // "s"
        QT_MOC_LITERAL(223, 16),  // "terminateProcess"
        QT_MOC_LITERAL(240, 24),  // "updateModeDisplayedlInfo"
        QT_MOC_LITERAL(265, 19),  // "on_load_img_clicked"
        QT_MOC_LITERAL(285, 20),  // "on_saveModel_clicked"
        QT_MOC_LITERAL(306, 24),  // "on_runExperiment_clicked"
        QT_MOC_LITERAL(331, 12),  // "hiddenLayers"
        QT_MOC_LITERAL(344, 19)   // "on_Research_clicked"
    },
    "MainWindow",
    "terminateTrainingProcess",
    "",
    "on_modelLoader_clicked",
    "on_classifyImage_clicked",
    "on_clear_clicked",
    "on_trainModel_clicked",
    "on_chooseTrainingDataset_clicked",
    "on_chooseTestingDataset_clicked",
    "updateStatusMessage",
    "std::string",
    "s",
    "terminateProcess",
    "updateModeDisplayedlInfo",
    "on_load_img_clicked",
    "on_saveModel_clicked",
    "on_runExperiment_clicked",
    "hiddenLayers",
    "on_Research_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  104,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,  105,    2, 0x08,    2 /* Private */,
       4,    0,  106,    2, 0x08,    3 /* Private */,
       5,    0,  107,    2, 0x08,    4 /* Private */,
       6,    0,  108,    2, 0x08,    5 /* Private */,
       7,    0,  109,    2, 0x08,    6 /* Private */,
       8,    0,  110,    2, 0x08,    7 /* Private */,
       9,    1,  111,    2, 0x08,    8 /* Private */,
      12,    0,  114,    2, 0x08,   10 /* Private */,
      13,    0,  115,    2, 0x08,   11 /* Private */,
      14,    0,  116,    2, 0x08,   12 /* Private */,
      15,    0,  117,    2, 0x08,   13 /* Private */,
      16,    0,  118,    2, 0x08,   14 /* Private */,
      17,    0,  119,    2, 0x08,   15 /* Private */,
      18,    0,  120,    2, 0x08,   16 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSizes,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'terminateTrainingProcess'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_modelLoader_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_classifyImage_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_clear_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_trainModel_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_chooseTrainingDataset_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_chooseTestingDataset_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateStatusMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::string, std::false_type>,
        // method 'terminateProcess'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateModeDisplayedlInfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_load_img_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_saveModel_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_runExperiment_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'hiddenLayers'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Research_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->terminateTrainingProcess(); break;
        case 1: _t->on_modelLoader_clicked(); break;
        case 2: _t->on_classifyImage_clicked(); break;
        case 3: _t->on_clear_clicked(); break;
        case 4: _t->on_trainModel_clicked(); break;
        case 5: _t->on_chooseTrainingDataset_clicked(); break;
        case 6: _t->on_chooseTestingDataset_clicked(); break;
        case 7: _t->updateStatusMessage((*reinterpret_cast< std::add_pointer_t<std::string>>(_a[1]))); break;
        case 8: _t->terminateProcess(); break;
        case 9: _t->updateModeDisplayedlInfo(); break;
        case 10: _t->on_load_img_clicked(); break;
        case 11: _t->on_saveModel_clicked(); break;
        case 12: _t->on_runExperiment_clicked(); break;
        case 13: _t->hiddenLayers(); break;
        case 14: _t->on_Research_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)();
            if (_t _q_method = &MainWindow::terminateTrainingProcess; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
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
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
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
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::terminateTrainingProcess()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
