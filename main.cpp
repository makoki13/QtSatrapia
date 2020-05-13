#include <iostream>

//#include "usuario.h"
#include "item.h"

#include "sgbd.h"
#include "superv_usuario.h"

using namespace std;

int main()
{
//    Item::inicializa();

//    Usuario u1 (1000, "EL MIL", USUARIO, "pepe@", "pepe2", 12, true, ACTIVO);
//    Usuario u2;

//    cout << "u1 " << endl;
//    cout << "u2 " <<  u2.getID() << endl;

    //Pa na
    SGBD s;

    Item::inicializa();

    QString correo = "pablo.gps@gmail.com";
    QString clave = "SECOND";

    /* A.- Crear usuario */

    if (SUPERV_Usuario::existe_usuario(correo,clave) == true) {
        cout << "correo " <<  correo.toStdString() << " ya existe o clave incorrecta " << endl;
    }
    else {
        SUPERV_Usuario::crea_usuario(correo,clave);
        cout << "usuario " <<  correo.toStdString() << " creandose... " << endl;
        Usuario u = SUPERV_Usuario::carga_usuario(correo);
        cout << "usuario " <<  u.getID() << " " << u.getNombre().toStdString() << " creado" << endl;
    }

    return 0;


    /* B.- Cargar usuario ya existente */
    /*
    if (SUPERV_Usuario::existe_usuario(correo,clave) == false) {
        cout << "correo " <<  correo.toStdString() << " no existe o clave incorrecta " << endl;
    }
    else {
        Usuario u = SUPERV_Usuario::carga_usuario(correo);
        cout << "usuario " <<  u.getID() << " " << u.getNombre().toStdString() << " recuperado" << endl;
    }

    return 0;
    */

    /*
    correo = "pablo.gps@gmail.com";
    SUPERV_Usuario::borra_usuario(correo);
    */
}
