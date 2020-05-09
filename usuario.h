#include "item.h"

#ifndef USUARIO_H
#define USUARIO_H

enum TipoEstados {
  DESACTIVADO = 0, ACTIVO = 1, SIN_TUTORIAL = 2, BANEADO = 3
};

class Usuario : public Item
{
    string _correo_electronico;
    string _clave_acceso;
    int _ultimo_acceso;
    bool _en_linea;
    TipoEstados _tipo;

public:
    Usuario();

    Usuario( int id, string nombre, TipoItem tipo, string correo_electronico,
             string clave_acceso, int ultimo_acceso, bool en_linea, TipoEstados tipo_estado
             );

};

#endif // USUARIO_H
