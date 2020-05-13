#include <QSqlQuery>

#include "persistencia_partida.h"
#include "sgbd.h"

Persistencia_Partida::Persistencia_Partida()
{

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
    QString sql = "UPDATE partida SET Activa=false WHERE id=:id";
    QSqlQuery query;

    query.prepare(sql);

    query.bindValue(":id", partida);

    TRetorno_Ejecuta resultado = SGBD::ejecuta(query);
}
