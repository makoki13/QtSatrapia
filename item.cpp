#include <iostream>

#include "item.h"

#ifndef GLOBAL_SIGUIENTE
#define GLOBAL_SIGUIENTE
int Item::siguiente_id = -1;
#endif

void Item::inicializa()
{
    //Pendiente de persistencia
    siguiente_id = 1;
}

Item::Item()
{
    _id = siguiente_id;
    siguiente_id++;

    _nombre = "nombre""";
    _tipo = SIN_DEFINIR;
    _persistente = false;
}

Item::Item(int id)
{
    _id = id;

    _nombre = "nombre""";
    _tipo = SIN_DEFINIR;
    _persistente = false;
}

void Item::setID(int id)
{
    _id = id;
}

int Item::getID()
{
    if (_id == -1) return -1;
    return _id;
}

void Item::setTipo(TipoItem tipo)
{
    _tipo = tipo;
}

TipoItem Item::getTipo()
{
    return _tipo;
}

void Item::setNombre(QString n)
{
    _nombre = n;
}

QString Item::getNombre()
{
    if (_nombre == "") return "";
    return _nombre;
}

void Item::setPersistente(bool valor)
{
    _persistente = valor;
}

bool Item::esPersistente()
{
    return _persistente;
}
