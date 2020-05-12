#ifndef PERSISTENCIA_USUARIO_H
#define PERSISTENCIA_USUARIO_H

#include <QString>
#include "usuario.h"

using namespace std;

class TReturn_Usuario
{
public:
    int resultado;
    QString mensaje;
    Usuario registro;
};

class Persistencia_Usuario
{
public:
    Persistencia_Usuario();

    static TReturn_Usuario existe_usuario(int id);
    static TReturn_Usuario crea_usuario(int id, QString nombre, QString clave);
};

#endif // PERSISTENCIA_USUARIO_H
