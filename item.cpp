#include "item.h"

Item::Item()
{
    _id = 0;
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
    if (_id == 0) return -1;
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

void Item::setNombre(string n)
{
    _nombre = n;
}

string Item::getNombre()
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
