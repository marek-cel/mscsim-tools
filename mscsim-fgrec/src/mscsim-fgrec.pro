QT += core gui network xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TEMPLATE = app

################################################################################

DESTDIR = ../bin
TARGET = mscsim-fgrec

################################################################################

CONFIG += c++11

################################################################################

DEFINES += QT_DEPRECATED_WARNINGS

################################################################################

SOURCES += \
    main.cpp \
    MainWindow.cpp \
    Noise.cpp \
    Random.cpp

HEADERS += \
    DataInp.h \
    MainWindow.h \
    net_ctrls.hxx \
    net_fdm.hxx \
    Noise.h \
    Random.h \
    stdint.hxx \
    Units.h

FORMS += \
    MainWindow.ui
