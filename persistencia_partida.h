#ifndef PERSISTENCIA_PARTIDA_H
#define PERSISTENCIA_PARTIDA_H

#include "partida.h"

class TReturn_Partida
{
public:
    int resultado;
    QString mensaje;
    Partida registro;
};

class Persistencia_Partida
{
public:
    Persistencia_Partida();

    static TReturn_Partida crea(int id, int inicio);
    static void setFin(int partida);
    //void addJugador(int partida, int jugador); TODO Jugador
    //void removeJugador(int partida, int jugador);  TODO Jugador
    static void setActiva(int partida);
    static void setDesactiva(int partida);
    static void borra(int partida);

    static TReturn_Partida carga(int id);
};

#endif // PERSISTENCIA_PARTIDA_H
