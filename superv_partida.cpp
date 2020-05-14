#include "superv_partida.h"
#include "persistencia_partida.h"

unordered_map<int, Partida> SUPERV_Partida::partidas;

SUPERV_Partida::SUPERV_Partida()
{

}

void SUPERV_Partida::add_item( Partida p) {
    int id = p.getID();
    auto search = partidas.find(id);
    if (search != partidas.end()) {
        partidas.erase(id);
    }
    partidas.insert({id,p});
}

void SUPERV_Partida::quita_item(int id) {
    partidas.erase(id);
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

void SUPERV_Partida::abre(int id)
{
    Persistencia_Partida::setActiva(id);
    Partida item = SUPERV_Partida::get_item(id);
    item.activa();
    SUPERV_Partida::add_item(item);
}

void SUPERV_Partida::cierra(int id)
{
    Persistencia_Partida::setDesactiva(id);
    SUPERV_Partida::quita_item(id);
}

void SUPERV_Partida::borra(int id)
{
    Partida p = SUPERV_Partida::get_item(id);
    if (p.esActiva()) SUPERV_Partida::cierra(id);
    Persistencia_Partida::borra(id);
    SUPERV_Partida::quita_item(id);
}

unordered_map<int, Partida> SUPERV_Partida::lista()
{
    return partidas;
}
