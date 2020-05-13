#include <QString>
#include <QSqlQuery>

#include "persistencia_item.h"
#include "sgbd.h"

Persistencia_Item::Persistencia_Item()
{

}

int Persistencia_Item::getUltimoItemActual()
{
    QString sql = "SELECT MAX(ID) FROM usuario";
    QSqlQuery query;

    int ultimo_id;

    query.prepare(sql);

    TRetorno_Consulta datos = SGBD::consulta(query);
    if (datos.filas == 1) {
        ultimo_id = datos.data.first().value(0).toInt();
    }
    else {
        ultimo_id = 0;
    }

    return ultimo_id;
}
