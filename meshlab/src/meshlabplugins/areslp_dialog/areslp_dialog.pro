include (../../shared.pri)

HEADERS      += areslpfactory.h \
				areslp.h \
				areslpDialog.h

SOURCES      += areslpfactory.cpp \
				areslp.cpp \
				areslpDialog.cpp

RESOURCES    += areslp.qrc

FORMS        += areslpDialog.ui

TARGET        = areslp_dialog

QT           += opengl 
QT           += xml
