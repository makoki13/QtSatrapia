TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle

QT += sql

SOURCES += \
        item.cpp \
        main.cpp \
        sgbd.cpp \
        superv_usuario.cpp \
        usuario.cpp

HEADERS += \
    item.h \
    sgbd.h \
    superv_usuario.h \
    usuario.h

DISTFILES += \
    web/index.html
