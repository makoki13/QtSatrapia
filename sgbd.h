#ifndef SGBD_H
#define SGBD_H

#include <QSqlDatabase>
#include <QSqlQuery>

using namespace std;

class SGBD
{
    void recrea_tablas();
public:
    SGBD();

    void ejecuta(QString sql);
};

#endif // SGBD_H
