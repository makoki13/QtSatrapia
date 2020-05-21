TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle

QT += sql

SOURCES += \
        item.cpp \
        jugador.cpp \
        main.cpp \
        partida.cpp \
        persistencia_item.cpp \
        persistencia_partida.cpp \
        persistencia_usuario.cpp \
        posicion.cpp \
        recurso.cpp \
        recursos/almacen.cpp \
        recursos/edificio.cpp \
        recursos/extractor.cpp \
        recursos/fuente.cpp \
        recursos/recurso.cpp \
        recursos/recursonatural.cpp \
        recursos/silo.cpp \
        sgbd.cpp \
        superv_partida.cpp \
        superv_usuario.cpp \
        usuario.cpp

HEADERS += \
    item.h \
    jugador.h \
    partida.h \
    persistencia_item.h \
    persistencia_partida.h \
    persistencia_usuario.h \
    posicion.h \
    recursos/almacen.h \
    recursos/edificio.h \
    recursos/extractor.h \
    recursos/fuente.h \
    recursos/recurso.h \
    recursos/recursonatural.h \
    recursos/silo.h \
    sgbd.h \
    superv_partida.h \
    superv_usuario.h \
    usuario.h

DISTFILES += \
    web/index.html
