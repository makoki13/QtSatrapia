#include <QSqlQuery>
#include <QVariant>
#include <QString>

#include "persistencia_usuario.h"
#include "sgbd.h"

Persistencia_Usuario::Persistencia_Usuario()
{

}

TReturn_Usuario Persistencia_Usuario::existe_usuario(QString nombre, QString clave)
{
    TReturn_Usuario t;

    QString sql = "SELECT ID,Ultimo_Acceso,En_Linea,Estado FROM usuario WHERE Nombre=:nombre AND Clave=:clave";
    QSqlQuery query;

    query.prepare(sql);
    query.bindValue(":nombre", nombre );
    query.bindValue(":clave", clave );

    TRetorno_Consulta datos = SGBD::consulta(query);
    if (datos.filas == 1) {
        t.registro.setID(datos.data.first().value(0).UInt);
        t.registro.setNombre(nombre);
        t.registro.set_clave(clave);
        t.registro.set_online();
        t.registro.set_estado(SIN_TUTORIAL);
        t.mensaje = "ok";
    }
    else {
        t.resultado = -1;
        t.mensaje = "error";
    }

    return t;
}

TReturn_Usuario Persistencia_Usuario::crea_usuario(int id, QString nombre, QString clave)
{
    TReturn_Usuario t;

    QString sql =
            "INSERT INTO usuario (id, nombre, clave, ultimo_acceso, en_linea) "
            "VALUES (:id, :nombre, :clave, 0, true)";
    QSqlQuery query;

    query.prepare(sql);

    query.bindValue(":id", id);
    query.bindValue(":nombre", nombre );
    query.bindValue(":clave", clave );

    TRetorno_Ejecuta resultado = SGBD::ejecuta(query);

    t.resultado = resultado.resultado;
    t.mensaje = resultado.mensaje;

    Usuario u (id, nombre, USUARIO, nombre, clave, 0, true, SIN_TUTORIAL);

    t.registro = u;

    return t;
}

