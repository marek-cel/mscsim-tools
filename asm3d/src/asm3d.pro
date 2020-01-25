QT += core gui opengl xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TEMPLATE = app

################################################################################

DESTDIR = ../bin
TARGET = mscsim-asm3d

################################################################################

DEFINES += \
    QT_DEPRECATED_WARNINGS

win32: QMAKE_LFLAGS += \
    /INCREMENTAL:NO


win32: DEFINES += \
    WIN32 \
    _WINDOWS \
    _SCL_SECURE_NO_WARNINGS \
    _CRT_SECURE_NO_DEPRECATE \
    _USE_MATH_DEFINES \
    USE_QT5

unix: DEFINES += _LINUX_

win32:CONFIG(release, debug|release): DEFINES += NDEBUG
win32:CONFIG(debug, debug|release):   DEFINES += _DEBUG

################################################################################

INCLUDEPATH += ./

win32: INCLUDEPATH += \
    $(OSG_ROOT)/include/

################################################################################

win32: LIBS += \
    -L$(OSG_ROOT)/lib \
    -lopengl32

win32:CONFIG(release, debug|release): LIBS += \
    -lOpenThreads \
    -losg \
    -losgDB \
    -losgGA \
    -losgQt \
    -losgParticle \
    -losgSim \
    -losgText \
    -losgUtil \
    -losgViewer \
    -losgWidget

win32:CONFIG(debug, debug|release):  LIBS += \
    -lOpenThreadsd \
    -losgd \
    -losgDBd \
    -losgGAd \
    -losgQtd \
    -losgParticled \
    -losgSimd \
    -losgTextd \
    -losgUtild \
    -losgViewerd \
    -losgWidgetd

unix: LIBS += \
    -L/lib \
    -L/usr/lib \
    -L/usr/local/lib \
    -lOpenThreads \
    -losg \
    -losgDB \
    -losgGA \
    -losgQt \
    -losgParticle \
    -losgSim \
    -losgText \
    -losgUtil \
    -losgViewer \
    -losgWidget


################################################################################

HEADERS += \
    Data.h \
    defs.h

SOURCES += \
    main.cpp

RESOURCES += \
    asm3d.qrc

include(asm/asm.pri)
include(gui/gui.pri)
