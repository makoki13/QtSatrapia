#include "superv_usuario.h"

unordered_map<int, Usuario> SUPERV_Usuario::usuarios;

SUPERV_Usuario::SUPERV_Usuario()
{

}

bool SUPERV_Usuario::existe_usuario(QString correo, QString clave)
{
    Usuario u;

    u.setNombre(correo);
    u.set_clave(clave);

    return true;
}

Usuario SUPERV_Usuario::crea_usuario(QString correo, QString clave)
{
    Usuario u;

    u.setNombre(correo);
    u.set_clave(clave);

    return u;
}

void SUPERV_Usuario::add_item( Usuario u) {
    usuarios.insert({u.getID(),u});
}

Usuario SUPERV_Usuario::carga_usuario(
        QString correo
        ) {
    Usuario u;

    u.setNombre(correo);

    return u;
}


bool SUPERV_Usuario::quita_usuario(int id) {
    SUPERV_Usuario::usuarios.erase(id);

    return true;
}


bool SUPERV_Usuario::borra_usuario(int id) {
    usuarios.erase(id);

    return true;
}

Usuario SUPERV_Usuario::get_usuario(int id) {
    return usuarios[id];
}

