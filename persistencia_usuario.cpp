#include <QSqlQuery>
#include <QVariant>
#include <QString>

#include "persistencia_usuario.h"
#include "sgbd.h"

Persistencia_Usuario::Persistencia_Usuario()
{

}

TReturn_Usuario Persistencia_Usuario::existe_usuario(int id)
{
    TReturn_Usuario t;

    QString sql = "SELECT Nombre,Clave,Ultimo_Acceso,En_Linea FROM usuario WHERE id=?";
    QSqlQuery query;

    query.prepare(sql);
    QVariant qvariant( id );
    query.addBindValue(qvariant);

    TRetorno_Consulta datos = SGBD::consulta(query);
    if (datos.filas == 1) {
        if (t.resultado > 0) {
            //datos.data.first().value(0).String
            t.registro.setNombre(datos.data.first().value(0).toString());
        }
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

