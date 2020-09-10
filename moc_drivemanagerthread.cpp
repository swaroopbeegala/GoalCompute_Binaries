/****************************************************************************
** Meta object code from reading C++ file 'drivemanagerthread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Goal_Compute_Testing/DriveManager/drivemanagerthread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'drivemanagerthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DriveManagerThread_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DriveManagerThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DriveManagerThread_t qt_meta_stringdata_DriveManagerThread = {
    {
QT_MOC_LITERAL(0, 0, 18) // "DriveManagerThread"

    },
    "DriveManagerThread"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DriveManagerThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void DriveManagerThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject DriveManagerThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_DriveManagerThread.data,
      qt_meta_data_DriveManagerThread,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DriveManagerThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DriveManagerThread::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DriveManagerThread.stringdata0))
        return static_cast<void*>(const_cast< DriveManagerThread*>(this));
    return QThread::qt_metacast(_clname);
}

int DriveManagerThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_DriveManagerWorker_t {
    QByteArrayData data[20];
    char stringdata0[203];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DriveManagerWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DriveManagerWorker_t qt_meta_stringdata_DriveManagerWorker = {
    {
QT_MOC_LITERAL(0, 0, 18), // "DriveManagerWorker"
QT_MOC_LITERAL(1, 19, 18), // "OdometryParameters"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 15), // "DriveParameters"
QT_MOC_LITERAL(4, 55, 8), // "PIDGains"
QT_MOC_LITERAL(5, 64, 12), // "GoalDistance"
QT_MOC_LITERAL(6, 77, 5), // "Estop"
QT_MOC_LITERAL(7, 83, 11), // "ResetFaults"
QT_MOC_LITERAL(8, 95, 10), // "StartDrive"
QT_MOC_LITERAL(9, 106, 7), // "Reverse"
QT_MOC_LITERAL(10, 114, 9), // "TurnAngle"
QT_MOC_LITERAL(11, 124, 13), // "QrCameraError"
QT_MOC_LITERAL(12, 138, 7), // "Disable"
QT_MOC_LITERAL(13, 146, 5), // "Error"
QT_MOC_LITERAL(14, 152, 18), // "vSlottoStartWorker"
QT_MOC_LITERAL(15, 171, 12), // "FindCommands"
QT_MOC_LITERAL(16, 184, 1), // "x"
QT_MOC_LITERAL(17, 186, 1), // "y"
QT_MOC_LITERAL(18, 188, 5), // "theta"
QT_MOC_LITERAL(19, 194, 8) // "Finished"

    },
    "DriveManagerWorker\0OdometryParameters\0"
    "\0DriveParameters\0PIDGains\0GoalDistance\0"
    "Estop\0ResetFaults\0StartDrive\0Reverse\0"
    "TurnAngle\0QrCameraError\0Disable\0Error\0"
    "vSlottoStartWorker\0FindCommands\0x\0y\0"
    "theta\0Finished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DriveManagerWorker[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   89,    2, 0x06 /* Public */,
       3,    7,   96,    2, 0x06 /* Public */,
       4,    3,  111,    2, 0x06 /* Public */,
       5,    1,  118,    2, 0x06 /* Public */,
       6,    0,  121,    2, 0x06 /* Public */,
       7,    0,  122,    2, 0x06 /* Public */,
       8,    0,  123,    2, 0x06 /* Public */,
       9,    1,  124,    2, 0x06 /* Public */,
      10,    1,  127,    2, 0x06 /* Public */,
      11,    1,  130,    2, 0x06 /* Public */,
      12,    0,  133,    2, 0x06 /* Public */,
      13,    1,  134,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,  137,    2, 0x0a /* Public */,
      15,    3,  138,    2, 0x0a /* Public */,
      19,    0,  145,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,    2,    2,    2,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,    2,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,    2,    2,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,   16,   17,   18,
    QMetaType::Void,

       0        // eod
};

void DriveManagerWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DriveManagerWorker *_t = static_cast<DriveManagerWorker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OdometryParameters((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 1: _t->DriveParameters((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7]))); break;
        case 2: _t->PIDGains((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 3: _t->GoalDistance((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->Estop(); break;
        case 5: _t->ResetFaults(); break;
        case 6: _t->StartDrive(); break;
        case 7: _t->Reverse((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->TurnAngle((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 9: _t->QrCameraError((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 10: _t->Disable(); break;
        case 11: _t->Error((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->vSlottoStartWorker(); break;
        case 13: _t->FindCommands((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 14: _t->Finished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DriveManagerWorker::*_t)(float , float , float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DriveManagerWorker::OdometryParameters)) {
                *result = 0;
            }
        }
        {
            typedef void (DriveManagerWorker::*_t)(float , float , float , float , float , float , float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DriveManagerWorker::DriveParameters)) {
                *result = 1;
            }
        }
        {
            typedef void (DriveManagerWorker::*_t)(float , float , float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DriveManagerWorker::PIDGains)) {
                *result = 2;
            }
        }
        {
            typedef void (DriveManagerWorker::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DriveManagerWorker::GoalDistance)) {
                *result = 3;
            }
        }
        {
            typedef void (DriveManagerWorker::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DriveManagerWorker::Estop)) {
                *result = 4;
            }
        }
        {
            typedef void (DriveManagerWorker::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DriveManagerWorker::ResetFaults)) {
                *result = 5;
            }
        }
        {
            typedef void (DriveManagerWorker::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DriveManagerWorker::StartDrive)) {
                *result = 6;
            }
        }
        {
            typedef void (DriveManagerWorker::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DriveManagerWorker::Reverse)) {
                *result = 7;
            }
        }
        {
            typedef void (DriveManagerWorker::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DriveManagerWorker::TurnAngle)) {
                *result = 8;
            }
        }
        {
            typedef void (DriveManagerWorker::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DriveManagerWorker::QrCameraError)) {
                *result = 9;
            }
        }
        {
            typedef void (DriveManagerWorker::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DriveManagerWorker::Disable)) {
                *result = 10;
            }
        }
        {
            typedef void (DriveManagerWorker::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DriveManagerWorker::Error)) {
                *result = 11;
            }
        }
    }
}

const QMetaObject DriveManagerWorker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DriveManagerWorker.data,
      qt_meta_data_DriveManagerWorker,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DriveManagerWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DriveManagerWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DriveManagerWorker.stringdata0))
        return static_cast<void*>(const_cast< DriveManagerWorker*>(this));
    return QObject::qt_metacast(_clname);
}

int DriveManagerWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void DriveManagerWorker::OdometryParameters(float _t1, float _t2, float _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DriveManagerWorker::DriveParameters(float _t1, float _t2, float _t3, float _t4, float _t5, float _t6, float _t7)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DriveManagerWorker::PIDGains(float _t1, float _t2, float _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DriveManagerWorker::GoalDistance(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DriveManagerWorker::Estop()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void DriveManagerWorker::ResetFaults()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void DriveManagerWorker::StartDrive()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void DriveManagerWorker::Reverse(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void DriveManagerWorker::TurnAngle(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void DriveManagerWorker::QrCameraError(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void DriveManagerWorker::Disable()
{
    QMetaObject::activate(this, &staticMetaObject, 10, Q_NULLPTR);
}

// SIGNAL 11
void DriveManagerWorker::Error(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_END_MOC_NAMESPACE
