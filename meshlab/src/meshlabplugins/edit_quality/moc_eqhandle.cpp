/****************************************************************************
** Meta object code from reading C++ file 'eqhandle.h'
**
** Created: Thu Jan 24 17:09:05 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "eqhandle.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'eqhandle.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EqHandle[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,
      43,    9,    9,    9, 0x05,
      84,   61,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
     116,    9,    9,    9, 0x08,
     145,  132,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_EqHandle[] = {
    "EqHandle\0\0positionChangedToSpinBox(double)\0"
    "positionChanged()\0sender,insideHistogram\0"
    "insideHistogram(EqHandle*,bool)\0"
    "moveMidHandle()\0spinBoxValue\0"
    "setXBySpinBoxValueChanged(double)\0"
};

void EqHandle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EqHandle *_t = static_cast<EqHandle *>(_o);
        switch (_id) {
        case 0: _t->positionChangedToSpinBox((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->positionChanged(); break;
        case 2: _t->insideHistogram((*reinterpret_cast< EqHandle*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->moveMidHandle(); break;
        case 4: _t->setXBySpinBoxValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData EqHandle::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EqHandle::staticMetaObject = {
    { &Handle::staticMetaObject, qt_meta_stringdata_EqHandle,
      qt_meta_data_EqHandle, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EqHandle::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EqHandle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EqHandle::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EqHandle))
        return static_cast<void*>(const_cast< EqHandle*>(this));
    return Handle::qt_metacast(_clname);
}

int EqHandle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Handle::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void EqHandle::positionChangedToSpinBox(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void EqHandle::positionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void EqHandle::insideHistogram(EqHandle * _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
