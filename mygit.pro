TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    basic/test.cpp \
    basic/boost/testOptional.cpp

DISTFILES += \
    diagram/gitDiagram.asta
