#include "usuario.h"

Usuario::Usuario()
{

}

Usuario::Usuario(int id, string nombre, TipoItem tipo, string correo_electronico, string clave_acceso, int ultimo_acceso, bool en_linea, TipoEstados tipo_estado)
{
    setID( id );
    setNombre( nombre );
    setTipo( tipo );

    _correo_electronico = correo_electronico;
    _clave_acceso = clave_acceso;
    _ultimo_acceso = ultimo_acceso;
    _en_linea = en_linea;
    _tipo = tipo_estado;
}
