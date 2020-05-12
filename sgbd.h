#ifndef SGBD_H
#define SGBD_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QList>
#include <QVariant>

using namespace std;

class TRetorno_Ejecuta {
public:
    int resultado;
    QString mensaje;
    int filas;
};

class TRetorno_Consulta {
public:
    int resultado;
    QString mensaje;
    int filas;
    QList<QList<QVariant>> data;
};

class SGBD
{
    void recrea_tablas();
public:
    SGBD();

    static TRetorno_Ejecuta ejecuta(QSqlQuery query);
    static TRetorno_Consulta consulta(QSqlQuery query);
};

#endif // SGBD_H
