/****************************************************************************
** Meta object code from reading C++ file 'dialog.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/game_engine/include/graphics/dialog.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,    8,    7,    7, 0x05,
      60,    7,    7,    7, 0x05,
      76,    7,    7,    7, 0x05,

 // slots: signature, parameters, type, tag, flags
     111,    7,    7,    7, 0x0a,
     136,    7,    7,    7, 0x0a,
     159,    7,    7,    7, 0x0a,
     173,    7,    7,    7, 0x0a,
     223,  220,    7,    7, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Dialog[] = {
    "Dialog\0\0,,\0calibDone(bool,cv::Mat,std::vector<cv::Point2f>)\0"
    "reset_buttons()\0detected_robots(std::map<int,int>)\0"
    "calibrateSIGNAL(int64_t)\0"
    "endCalibrationSIGNAL()\0startSIGNAL()\0"
    "manually_calibration(std::vector<cv::Point2f>)\0"
    "id\0updateWallMessage(int)\0"
};

void Dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Dialog *_t = static_cast<Dialog *>(_o);
        switch (_id) {
        case 0: _t->calibDone((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< cv::Mat(*)>(_a[2])),(*reinterpret_cast< std::vector<cv::Point2f>(*)>(_a[3]))); break;
        case 1: _t->reset_buttons(); break;
        case 2: _t->detected_robots((*reinterpret_cast< std::map<int,int>(*)>(_a[1]))); break;
        case 3: _t->calibrateSIGNAL((*reinterpret_cast< int64_t(*)>(_a[1]))); break;
        case 4: _t->endCalibrationSIGNAL(); break;
        case 5: _t->startSIGNAL(); break;
        case 6: _t->manually_calibration((*reinterpret_cast< std::vector<cv::Point2f>(*)>(_a[1]))); break;
        case 7: _t->updateWallMessage((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Dialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Dialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Dialog,
      qt_meta_data_Dialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dialog))
        return static_cast<void*>(const_cast< Dialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Dialog::calibDone(bool _t1, cv::Mat _t2, std::vector<cv::Point2f> _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Dialog::reset_buttons()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Dialog::detected_robots(std::map<int,int> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
