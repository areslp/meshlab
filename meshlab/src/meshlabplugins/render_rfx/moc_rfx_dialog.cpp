/****************************************************************************
** Meta object code from reading C++ file 'rfx_dialog.h'
**
** Created: Thu Jan 24 17:06:09 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "rfx_dialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rfx_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RfxDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x0a,
      29,   10,   10,   10, 0x0a,
      50,   10,   10,   10, 0x0a,
      69,   10,   10,   10, 0x0a,
      90,   10,   10,   10, 0x0a,
     110,   10,   10,   10, 0x0a,
     127,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_RfxDialog[] = {
    "RfxDialog\0\0PassSelected(int)\0"
    "TextureSelected(int)\0ChangeTexture(int)\0"
    "ChangeValue(QString)\0extendRange(double)\0"
    "extendRange(int)\0mapSliderLineEdit(QWidget*)\0"
};

void RfxDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RfxDialog *_t = static_cast<RfxDialog *>(_o);
        switch (_id) {
        case 0: _t->PassSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->TextureSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->ChangeTexture((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->ChangeValue((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->extendRange((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->extendRange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->mapSliderLineEdit((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RfxDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RfxDialog::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_RfxDialog,
      qt_meta_data_RfxDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RfxDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RfxDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RfxDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RfxDialog))
        return static_cast<void*>(const_cast< RfxDialog*>(this));
    return QDockWidget::qt_metacast(_clname);
}

int RfxDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
