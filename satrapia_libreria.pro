TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle

QT += sql

SOURCES += \
        item.cpp \
        main.cpp \
        partida.cpp \
        persistencia_item.cpp \
        persistencia_partida.cpp \
        persistencia_usuario.cpp \
        sgbd.cpp \
        superv_partida.cpp \
        superv_usuario.cpp \
        usuario.cpp

HEADERS += \
    item.h \
    partida.h \
    persistencia_item.h \
    persistencia_partida.h \
    persistencia_usuario.h \
    sgbd.h \
    superv_partida.h \
    superv_usuario.h \
    usuario.h

DISTFILES += \
    web/index.html
