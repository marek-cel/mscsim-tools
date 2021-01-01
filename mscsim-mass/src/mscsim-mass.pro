QT += core gui opengl svg xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

unix: greaterThan(QT_MAJOR_VERSION, 4): QT += x11extras

TEMPLATE = app

################################################################################

DESTDIR = $$PWD/../bin
TARGET = mscsim-mass

################################################################################

CONFIG += c++11

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

win32: CONFIG(release, debug|release): LIBS += \

win32: CONFIG(debug, debug|release): LIBS += \

unix: LIBS += \
    -L/lib \
    -L/usr/lib

################################################################################

HEADERS += \
    $$PWD/defs.h \
    $$PWD/Document.h \
    $$PWD/Inertia.h \
    $$PWD/MassComponents.h \
    $$PWD/Matrix3x3.h \
    $$PWD/Vector3.h

SOURCES += \
    $$PWD/main.cpp \
    $$PWD/Document.cpp \
    $$PWD/Inertia.cpp \
    $$PWD/MassComponents.cpp \
    $$PWD/Matrix3x3.cpp \
    $$PWD/Vector3.cpp

RESOURCES += \

################################################################################

include($$PWD/gui/gui.pri)
