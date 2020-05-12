#include "superv_usuario.h"
#include "persistencia_usuario.h"

unordered_map<int, Usuario> SUPERV_Usuario::usuarios;

SUPERV_Usuario::SUPERV_Usuario()
{

}

bool SUPERV_Usuario::existe_usuario(QString correo, QString clave)
{        
    TReturn_Usuario resultado;

    resultado = Persistencia_Usuario::existe_usuario(correo, clave);
    if (resultado.mensaje == "ok" ) return true; else return false;
}

Usuario SUPERV_Usuario::crea_usuario(QString correo, QString clave)
{
    TReturn_Usuario resultado;

    Usuario u;

    resultado = Persistencia_Usuario::crea_usuario(u.getID(), correo, clave );
    SUPERV_Usuario::add_item(resultado.registro);

    return resultado.registro;
}

void SUPERV_Usuario::add_item( Usuario u) {
    usuarios.insert({u.getID(),u});
}

//** TODO
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

//** TODO
bool SUPERV_Usuario::borra_usuario(int id) {
    usuarios.erase(id);

    return true;
}

//** TODO
Usuario SUPERV_Usuario::get_usuario(int id) {
    return usuarios[id];
}

