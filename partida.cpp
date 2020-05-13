#include "partida.h"

Partida::Partida(
    int id,
    bool esActiva,
    int fechaInicio,
    int fechaFin,
    int numJugadores) : Item(id)
{
    setID( id );
    if (esActiva == true) activa(); else desactiva();
    inicio = fechaInicio;
    fin = fechaFin;
    jugadores = numJugadores;
}

int Partida::crear()
{
    return 0;
}

void Partida::setFin()
{

}

void Partida::recalculaDias()
{

}

void Partida::incrementaJugadores()
{

}

void Partida::decrementaJugadores()
{

}

void Partida::activa()
{

}

void Partida::desactiva()
{

}
