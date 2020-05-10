#include "superv_usuario.h"

SUPERV_Usuario::SUPERV_Usuario()
{

}

bool SUPERV_Usuario::existe_usuario(string correo, string clave)
{
    Usuario u;

    u.setNombre(correo);
    u.set_clave(clave);

    return true;
}

Usuario SUPERV_Usuario::crea_usuario(string correo, string clave)
{
    Usuario u;

    u.setNombre(correo);
    u.set_clave(clave);

    return u;
}

void SUPERV_Usuario::add_item( Usuario u) {
    usuarios.insert({u.getID(),u});
}
