/****************************************************************************
** Resource object code
**
** Created: Sun Sep 1 18:44:00 2013
**      by: The Resource Compiler for Qt version 4.8.1
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtCore/qglobal.h>

static const unsigned char qt_resource_data[] = {
  // /home/l/work/meshlab/meshlab/src/meshlabplugins/render_rfx/images/scacchiera.png
  0x0,0x0,0x0,0xc1,
  0x89,
  0x50,0x4e,0x47,0xd,0xa,0x1a,0xa,0x0,0x0,0x0,0xd,0x49,0x48,0x44,0x52,0x0,
  0x0,0x0,0x10,0x0,0x0,0x0,0x10,0x8,0x4,0x0,0x0,0x0,0xb5,0xfa,0x37,0xea,
  0x0,0x0,0x0,0x1,0x73,0x52,0x47,0x42,0x0,0xae,0xce,0x1c,0xe9,0x0,0x0,0x0,
  0x2,0x62,0x4b,0x47,0x44,0x0,0xbf,0xf1,0x53,0x8d,0x2f,0x0,0x0,0x0,0x9,0x70,
  0x48,0x59,0x73,0x0,0x0,0xb,0x13,0x0,0x0,0xb,0x13,0x1,0x0,0x9a,0x9c,0x18,
  0x0,0x0,0x0,0x7,0x74,0x49,0x4d,0x45,0x7,0xd9,0x4,0x13,0x15,0x1,0x30,0x6b,
  0xe6,0xd9,0x80,0x0,0x0,0x0,0x19,0x74,0x45,0x58,0x74,0x43,0x6f,0x6d,0x6d,0x65,
  0x6e,0x74,0x0,0x43,0x72,0x65,0x61,0x74,0x65,0x64,0x20,0x77,0x69,0x74,0x68,0x20,
  0x47,0x49,0x4d,0x50,0x57,0x81,0xe,0x17,0x0,0x0,0x0,0x20,0x49,0x44,0x41,0x54,
  0x28,0xcf,0x63,0xb4,0xff,0xcf,0x80,0x2,0x1a,0x50,0xb9,0xc,0x4c,0xc,0x4,0xc0,
  0xf0,0x50,0xc0,0xb8,0x7f,0x34,0x1c,0x18,0x18,0x18,0x18,0x0,0xf4,0x29,0x4,0x1b,
  0x73,0xb,0xbb,0xee,0x0,0x0,0x0,0x0,0x49,0x45,0x4e,0x44,0xae,0x42,0x60,0x82,
  
  
};

static const unsigned char qt_resource_name[] = {
  // images
  0x0,0x6,
  0x7,0x3,0x7d,0xc3,
  0x0,0x69,
  0x0,0x6d,0x0,0x61,0x0,0x67,0x0,0x65,0x0,0x73,
    // scacchiera.png
  0x0,0xe,
  0xe,0x73,0x74,0xc7,
  0x0,0x73,
  0x0,0x63,0x0,0x61,0x0,0x63,0x0,0x63,0x0,0x68,0x0,0x69,0x0,0x65,0x0,0x72,0x0,0x61,0x0,0x2e,0x0,0x70,0x0,0x6e,0x0,0x67,
  
};

static const unsigned char qt_resource_struct[] = {
  // :
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,
  // :/images
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x2,
  // :/images/scacchiera.png
  0x0,0x0,0x0,0x12,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,

};

QT_BEGIN_NAMESPACE

extern Q_CORE_EXPORT bool qRegisterResourceData
    (int, const unsigned char *, const unsigned char *, const unsigned char *);

extern Q_CORE_EXPORT bool qUnregisterResourceData
    (int, const unsigned char *, const unsigned char *, const unsigned char *);

QT_END_NAMESPACE


int QT_MANGLE_NAMESPACE(qInitResources_render_rfx)()
{
    QT_PREPEND_NAMESPACE(qRegisterResourceData)
        (0x01, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

Q_CONSTRUCTOR_FUNCTION(QT_MANGLE_NAMESPACE(qInitResources_render_rfx))

int QT_MANGLE_NAMESPACE(qCleanupResources_render_rfx)()
{
    QT_PREPEND_NAMESPACE(qUnregisterResourceData)
       (0x01, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

Q_DESTRUCTOR_FUNCTION(QT_MANGLE_NAMESPACE(qCleanupResources_render_rfx))

