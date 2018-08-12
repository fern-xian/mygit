TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

INCLUDEPATH += .\
               /usr/local/opt/boost@1.57/include

SOURCES += \
        main.cpp \
    basic/test.cpp \
    basic/boost/testOptional.cpp \
    basic/boost/testmulti.cpp \
    basic/boost/testobjectid.cpp

DISTFILES += \
    diagram/gitDiagram.asta

HEADERS += \
    basic/boost/object_id.hpp
