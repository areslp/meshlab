/****************************************************************************
** Meta object code from reading C++ file 'synthData.h'
**
** Created: Thu Jan 24 17:02:59 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "synthData.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'synthData.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SynthData[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   11,   10,   10, 0x08,
      63,   50,   10,   10, 0x08,
      95,   50,   10,   10, 0x08,
     123,   50,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SynthData[] = {
    "SynthData\0\0response\0readWSresponse(QtSoapMessage)\0"
    "httpResponse\0parseJsonString(QNetworkReply*)\0"
    "loadBinFile(QNetworkReply*)\0"
    "saveImages(QNetworkReply*)\0"
};

void SynthData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SynthData *_t = static_cast<SynthData *>(_o);
        switch (_id) {
        case 0: _t->readWSresponse((*reinterpret_cast< const QtSoapMessage(*)>(_a[1]))); break;
        case 1: _t->parseJsonString((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 2: _t->loadBinFile((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 3: _t->saveImages((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SynthData::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SynthData::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SynthData,
      qt_meta_data_SynthData, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SynthData::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SynthData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SynthData::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SynthData))
        return static_cast<void*>(const_cast< SynthData*>(this));
    return QObject::qt_metacast(_clname);
}

int SynthData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
