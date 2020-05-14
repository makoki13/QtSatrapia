#include <QSqlQuery>

#include "persistencia_partida.h"
#include "sgbd.h"

Persistencia_Partida::Persistencia_Partida()
{

}

TReturn_Partida Persistencia_Partida::crea(int id, int inicio)
{
    TReturn_Partida t;

    QString sql =
            "INSERT INTO partida (id, activa, inicio, fin, jugadores) "
            "VALUES (:id, false, :inicio, 0, 0)";
    QSqlQuery query;

    query.prepare(sql);

    query.bindValue(":id", id);
    query.bindValue(":inicio", inicio );

    TRetorno_Ejecuta resultado = SGBD::ejecuta(query);

    QString s = query.executedQuery();

    t.resultado = resultado.resultado;
    t.mensaje = resultado.mensaje;

    Partida p (id, true, 1, 0, 0);

    t.registro = p;

    return t;
}

void Persistencia_Partida::setFin(int partida)
{
    QString sql = "UPDATE partida SET Fin=1 WHERE id=:id";
    QSqlQuery query;

    query.prepare(sql);

    query.bindValue(":id", partida);

    TRetorno_Ejecuta resultado = SGBD::ejecuta(query);
}

/*
void Persistencia_Partida::addJugador(int partida, int jugador)
{

}

void Persistencia_Partida::removeJugador(int partida, int jugador)
{

}
*/

void Persistencia_Partida::setActiva(int partida)
{
    QString sql = "UPDATE partida SET Activa=true WHERE id=:id";
    QSqlQuery query;

    query.prepare(sql);

    query.bindValue(":id", partida);

    TRetorno_Ejecuta resultado = SGBD::ejecuta(query);
}

void Persistencia_Partida::setDesactiva(int partida)
{
    QString sql = "UPDATE partida SET activa=false WHERE id=:id";
    QSqlQuery query;

    query.prepare(sql);

    query.bindValue(":id", partida);

    TRetorno_Ejecuta resultado = SGBD::ejecuta(query);
}

void Persistencia_Partida::borra(int partida)
{
    QString sql = "DELETE FROM partida WHERE id=:id";
    QSqlQuery query;

    query.prepare(sql);

    query.bindValue(":id", partida);

    TRetorno_Ejecuta resultado = SGBD::ejecuta(query);
}

