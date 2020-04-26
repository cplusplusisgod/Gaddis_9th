TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
        parkingticket.cpp \
        theparkedcar.cpp \
        theparkingmeter.cpp \
        thepoliceofficer.cpp

HEADERS += \
    parkingticket.h \
    theparkedcar.h \
    theparkingmeter.h \
    thepoliceofficer.h
