TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        baseclass.cpp \
        derivedclass1.cpp \
        derivedclass2.cpp \
        main.cpp

HEADERS += \
    baseclass.h \
    derivedclass1.h \
    derivedclass2.h

DISTFILES += \
    testfile.txt
