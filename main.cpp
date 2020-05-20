#include <iostream>

#include "usuario.h"
#include "item.h"

#include "sgbd.h"
#include "superv_usuario.h"

#include "partida.h"
#include "persistencia_partida.h"
#include "persistencia_usuario.h"
#include "jugador.h"

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

    cout << "siguiente_id " <<  Item::getSiguienteID() << endl;

    //SUPERV_Partida::nueva();

    Partida p = Persistencia_Partida::carga(35).registro;
    Usuario u = Persistencia_Usuario::carga_usuario("pablo.makoki@gmail.com").registro;

    Jugador j(p,u);
    p.addJugador(j.getID());

    cout << "j " <<  j.getNombre().toStdString() << endl;
    cout << "p " <<  p.getJugadores() << endl;

    Usuario u2 = Persistencia_Usuario::carga_usuario("pablo.gps@gmail.com").registro;

    Jugador j2(p,u2);
    p.addJugador(j2.getID());

    cout << "j " <<  j.getNombre().toStdString() << endl;
    cout << "p " <<  p.getJugadores() << endl;


    /*
    Partida p1, p2;
    p1.setID(p1.getSiguienteID());

    p1.incrementaJugadores();
    p1.incrementaJugadores();
    p1.incrementaJugadores();
    p1.incrementaJugadores();

    SUPERV_Partida::add_item(p1);
    */

    /*
    partidas = SUPERV_Partida::lista();

    for (unordered_map<int, Partida>::iterator it = partidas.begin(); it != partidas.end(); ++it) {
        std::cout << "Key:[" << it->first << "] Value:[" << it->second.esActiva() << "]\n";
    }
    */

    /*
    for( auto& n : partidas ) {
       std::cout << "Key:[" << n.first << "] Value:[" << n.second.esActiva() << "]\n";
    }
    */

    /*
    SUPERV_Partida::cierra(14);

    partidas = SUPERV_Partida::lista();

    for (unordered_map<int, Partida>::iterator it = partidas.begin(); it != partidas.end(); ++it) {
        std::cout << "Key:[" << it->first << "] Value:[" << it->second.esActiva() << "]\n";
    }
    */

    /*
    p2 = SUPERV_Partida::get_item(p1.getID());
    p2.decrementaJugadores();
    SUPERV_Partida::add_item(p2);

    partidas = SUPERV_Partida::lista();

    for( auto& n : partidas ) {
       std::cout << "Key:[" << n.first << "] Value:[" << n.second.getJugadores() << "]\n";
    }
    */

    /*
    QString correo = "pablo.tercero@gmail.com";
    QString clave = "THIRD";
    */

    /* A.- Crear usuario */
    /*
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
    */

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
