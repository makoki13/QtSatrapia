#include "superv_partida.h"
#include "persistencia_partida.h"

SUPERV_Partida::SUPERV_Partida()
{

}

void SUPERV_Partida::add_item( Partida p) {
    partidas.insert({p.getID(),p});
}

void SUPERV_Partida::quita_item(int id) {
    SUPERV_Partida::partidas.erase(id);
}

Partida SUPERV_Partida::get_item(int id) {
    return partidas[id];
}

Partida SUPERV_Partida::nueva()
{
    TReturn_Partida resultado = Persistencia_Partida::crea(Item::getSiguienteID(), 1);
    SUPERV_Partida::add_item(resultado.registro);
    return resultado.registro ;
}

//TODO
void SUPERV_Partida::borra(int id)
{

}
