#include "sgbd.h"

#include <iostream>

#include <QSqlError>

using namespace std;

void SGBD::recrea_tablas() {
    ejecuta("CREATE TABLE person(id int primary key, name varchar(50), lastname varchar(50), age int);");
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

void SGBD::ejecuta(QString sql)
{
    QSqlQuery query;

        if(!query.exec(sql))
        {
            cout << query.lastError().text().toStdString() << endl;
        }
}
