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

    Partida crea();
    void setFin(int partida);
    //void addJugador(int partida, int jugador); TODO Jugador
    //void removeJugador(int partida, int jugador);  TODO Jugador
    void setActiva(int partida);
    void setDesactiva(int partida);
};

#endif // PERSISTENCIA_PARTIDA_H
