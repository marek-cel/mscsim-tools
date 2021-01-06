QT += core gui network xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TEMPLATE = app

################################################################################

DESTDIR = ../bin
TARGET = mscsim-fgrec

################################################################################

CONFIG += c++11

################################################################################

win32: RC_FILE = mscsim-fgrec.rc

################################################################################

DEFINES += QT_DEPRECATED_WARNINGS

################################################################################

SOURCES += \
    main.cpp \
    Noise.cpp \
    Random.cpp

HEADERS += \
    DataInp.h \
    net_ctrls.hxx \
    net_fdm.hxx \
    Noise.h \
    Random.h \
    stdint.hxx \
    Units.h

RESOURCES += \
    $$PWD/mscsim-fgrec.qrc

################################################################################

include($$PWD/gui/gui.pri)
