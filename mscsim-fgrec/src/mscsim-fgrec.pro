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

win32: CONFIG(release, debug|release): QMAKE_CXXFLAGS += -O2
unix:  CONFIG(release, debug|release): QMAKE_CXXFLAGS += -O2

#win32: QMAKE_CXXFLAGS += /Zc:wchar_t

win32: QMAKE_LFLAGS += /INCREMENTAL:NO

################################################################################

DEFINES += QT_DEPRECATED_WARNINGS

DEFINES +=

greaterThan(QT_MAJOR_VERSION, 4):win32: DEFINES += USE_QT5

win32: DEFINES += \
    NOMINMAX \
    WIN32 \
    _WINDOWS \
    _CRT_SECURE_NO_DEPRECATE \
    _SCL_SECURE_NO_WARNINGS \
    _USE_MATH_DEFINES

win32: CONFIG(release, debug|release): DEFINES += NDEBUG
win32: CONFIG(debug, debug|release):   DEFINES += _DEBUG

#CONFIG(release, debug|release): DEFINES += QT_NO_DEBUG_OUTPUT
#DEFINES += QT_NO_DEBUG_OUTPUT

unix: DEFINES += _LINUX_

################################################################################

INCLUDEPATH += ./

################################################################################

win32: LIBS += \
    -lwsock32

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
