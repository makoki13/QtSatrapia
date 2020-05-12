#include "sgbd.h"

#include <iostream>

#include <QSqlError>

using namespace std;

void SGBD::recrea_tablas() {
    QSqlQuery query;

    query.prepare("DROP TABLE usuario");
    ejecuta(query);
    query.prepare("CREATE TABLE usuario(id int primary key, nombre varchar, clave varchar, ultimo_acceso int, en_linea bool, estado int default 3)");
    ejecuta(query);
}

SGBD::SGBD()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("satrapia");

    if(db.open()) {
        cout << "Conexion a [SQLITE] preparada." << endl << endl;
    }

    recrea_tablas();
}

TRetorno_Ejecuta SGBD::ejecuta(QSqlQuery query)
{    
    TRetorno_Ejecuta resultado;

    resultado.resultado = 0;
    resultado.mensaje = "";
    resultado.filas = 0;

    if(!query.exec())
    {
        resultado.resultado = -1;
        resultado.mensaje = query.lastError().text();
    }
    else
    {
        resultado.filas = query.numRowsAffected();
    }

    return resultado;
}

TRetorno_Consulta SGBD::consulta(QSqlQuery query)
{
    TRetorno_Consulta resConsulta;

    if(!query.exec()) {
        resConsulta.resultado = -1;
        resConsulta.mensaje = query.lastError().text();
        resConsulta.filas = 0;
    }
    else {
        resConsulta.resultado = 0;
        resConsulta.mensaje = "";
        resConsulta.filas = query.size();

        QSqlRecord rec = query.record();
        int numColumnas = rec.count();

        while(query.next()) {
            QList<QVariant> registro;
            for (int i=0; i < numColumnas; i++) {
                registro.append(query.value(i));
            }
            resConsulta.data.append(registro);
         }
    }

    return resConsulta;
}
