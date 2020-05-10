#ifndef SUPERV_USUARIO_H
#define SUPERV_USUARIO_H

#include <unordered_map>
#include "usuario.h"

class SUPERV_Usuario
{
    static unordered_map<int, Usuario> usuarios;

    static void add_item( Usuario u);
public:
    SUPERV_Usuario();

    static bool existe_usuario(string correo, string clave);

    static Usuario crea_usuario(
            string correo,
            string clave
            );

    static Usuario carga_usuario(
            string correo
            );

    static bool quita_usuario(int id);

    static bool borra_usuario(int id);

    static Usuario get_usuario(int id);
};

#endif // SUPERV_USUARIO_H
