/****************************************************************************
** Meta object code from reading C++ file 'edit_align.h'
**
** Created: Sat Oct 6 20:31:22 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "edit_align.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'edit_align.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EditAlignPlugin[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      37,   16,   16,   16, 0x0a,
      47,   16,   16,   16, 0x0a,
      66,   16,   16,   16, 0x0a,
      77,   16,   16,   16, 0x0a,
      91,   16,   16,   16, 0x0a,
     104,   16,   16,   16, 0x0a,
     120,   16,   16,   16, 0x0a,
     133,   16,   16,   16, 0x0a,
     153,   16,   16,   16, 0x0a,
     167,   16,   16,   16, 0x0a,
     200,  189,   16,   16, 0x0a,
     221,  219,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_EditAlignPlugin[] = {
    "EditAlignPlugin\0\0suspendEditToggle()\0"
    "process()\0recalcCurrentArc()\0glueHere()\0"
    "glueHereAll()\0glueManual()\0glueByPicking()\0"
    "alignParam()\0alignParamCurrent()\0"
    "setBaseMesh()\0hideRevealGluedMesh()\0"
    "colorstate\0toggledColors(int)\0A\0"
    "DrawArc(vcg::AlignPair::Result*)\0"
};

void EditAlignPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EditAlignPlugin *_t = static_cast<EditAlignPlugin *>(_o);
        switch (_id) {
        case 0: _t->suspendEditToggle(); break;
        case 1: _t->process(); break;
        case 2: _t->recalcCurrentArc(); break;
        case 3: _t->glueHere(); break;
        case 4: _t->glueHereAll(); break;
        case 5: _t->glueManual(); break;
        case 6: _t->glueByPicking(); break;
        case 7: _t->alignParam(); break;
        case 8: _t->alignParamCurrent(); break;
        case 9: _t->setBaseMesh(); break;
        case 10: _t->hideRevealGluedMesh(); break;
        case 11: _t->toggledColors((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->DrawArc((*reinterpret_cast< vcg::AlignPair::Result*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData EditAlignPlugin::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EditAlignPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_EditAlignPlugin,
      qt_meta_data_EditAlignPlugin, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EditAlignPlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EditAlignPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EditAlignPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EditAlignPlugin))
        return static_cast<void*>(const_cast< EditAlignPlugin*>(this));
    if (!strcmp(_clname, "MeshEditInterface"))
        return static_cast< MeshEditInterface*>(const_cast< EditAlignPlugin*>(this));
    if (!strcmp(_clname, "vcg.meshlab.MeshEditInterface/1.0"))
        return static_cast< MeshEditInterface*>(const_cast< EditAlignPlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int EditAlignPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void EditAlignPlugin::suspendEditToggle()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
