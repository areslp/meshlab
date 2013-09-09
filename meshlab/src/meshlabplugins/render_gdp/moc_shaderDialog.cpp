/****************************************************************************
** Meta object code from reading C++ file 'shaderDialog.h'
**
** Created: Sun Sep 1 18:43:11 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "shaderDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'shaderDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ShaderDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x08,
      37,   13,   13,   13, 0x08,
      60,   13,   13,   13, 0x08,
      78,   13,   13,   13, 0x08,
     101,   13,   13,   13, 0x08,
     126,  124,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ShaderDialog[] = {
    "ShaderDialog\0\0valuesChanged(QString)\0"
    "setColorValue(QString)\0setColorMode(int)\0"
    "changeTexturePath(int)\0browseTexturePath(int)\0"
    "i\0reloadTexture(int)\0"
};

void ShaderDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ShaderDialog *_t = static_cast<ShaderDialog *>(_o);
        switch (_id) {
        case 0: _t->valuesChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setColorValue((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setColorMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->changeTexturePath((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->browseTexturePath((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->reloadTexture((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ShaderDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ShaderDialog::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_ShaderDialog,
      qt_meta_data_ShaderDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ShaderDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ShaderDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ShaderDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ShaderDialog))
        return static_cast<void*>(const_cast< ShaderDialog*>(this));
    return QDockWidget::qt_metacast(_clname);
}

int ShaderDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
