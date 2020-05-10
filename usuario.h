#include "item.h"

#ifndef USUARIO_H
#define USUARIO_H

enum TipoEstados {
  DESACTIVADO = 0, PENDIENTE = 1, ACTIVO = 2, SIN_TUTORIAL = 3, BANEADO = 4
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

    Usuario (
            int id,
            string nombre,
            TipoItem tipo,
            string correo_electronico,
            string clave_acceso,
            int ultimo_acceso,
            bool en_linea,
            TipoEstados tipo_estado
            );

    int crear_usuario (
            string correo_electronico,
            string clave_acceso
            );

    int borrar_usuario();

    void set_estado ( TipoEstados estado);

    void set_online();
    void set_offline();

    string get_clave();
    void set_clave(string clave);

};

#endif // USUARIO_H
