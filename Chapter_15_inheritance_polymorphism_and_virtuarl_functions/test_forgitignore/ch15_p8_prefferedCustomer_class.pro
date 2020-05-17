TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        CustomerData.cpp \
        PersonData.cpp \
        main.cpp \
        prefferedcustomer.cpp

DISTFILES += \
    .gitignore

HEADERS += \
    CustomerData.h \
    PersonData.h \
    prefferedcustomer.h
