TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        employee.cpp \
        main.cpp \
        productionworker.cpp \
        shiftsupervisor.cpp

HEADERS += \
    employee.h \
    productionworker.h \
    shiftsupervisor.h
