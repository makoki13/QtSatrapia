TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle

QT += sql

SOURCES += \
        item.cpp \
        main.cpp \
        persistencia_item.cpp \
        persistencia_usuario.cpp \
        sgbd.cpp \
        superv_usuario.cpp \
        usuario.cpp

HEADERS += \
    item.h \
    persistencia_item.h \
    persistencia_usuario.h \
    sgbd.h \
    superv_usuario.h \
    usuario.h

DISTFILES += \
    web/index.html
