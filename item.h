#ifndef ITEM_H
#define ITEM_H

#include <string>

using namespace std;

enum TipoItem {
    SIN_DEFINIR,
    USUARIO, JUGADOR, PARTIDA, REGION, TERRITORIO, CIVILIZACION, EDIFICIO, CONSEJERO,
    RECURSO, ALMACEN, EXTRACTOR, FUENTE, EJERCITO, INVESTIGACION, VIAJE, OPERACION
};

enum SubtipoItem_CIVILIZACION {
    TRIBU, SATRAPIA, IMPERIO
};

enum SubtipoItem_EDIFICIO {
    PALACIO, MERCADO, SILOS, ACADEMIA, CUARTEL, EMBAJADA, TABERNA, IGLESIA
};

enum SubtipoItem_CONSEJERO {
    ECONOMICO, MILITAR, DIPLOMATICO
};

enum SubtipoItem_RECURSO {
    COMIDA, MADERA, PIEDRA, METAL, ORO, JOYAS
};

enum SubtipoItem_EJERCITO {
    INFANTERIA, CABALLERIA, CARRO, ASEDIO, OFICIAL, ESPIA
};

enum SubtipoItem_EJERCITO_INFANTERIA {
    HONDERO, LANCERO, ESPADA, ARQUERO
};

enum SubtipoItem_EJERCITO_CABALLERIA {
    CABALLERO
};

enum SubtipoItem_EJERCITO_CARRO {
    LIGERO, PESADO
};

enum SubtipoItem_EJERCITO_ASALTO {
    ARIETE, ONAGRO
};

enum SubtipoItem_EJERCITO_OFICIAL {
    CAPITAN, CORONEL, GENERAL
};

enum SubtipoItem_OPERACION {
    TRANSACCION, ATAQUE, FORTIFICACION, ASENTAMIENTO, MISION
};

enum SubtipoItem_ESPIA {
    LEAL, TRAIDOR
};


class Item
{
    int _id;
    TipoItem _tipo;
    string _nombre;
    bool _persistente;

public:
    Item();

    void setID( int id );
    int getID();

    void setNombre( string n );
    string getNombre();

    void setPersistente( bool valor );
    bool esPersistente();

};

#endif // ITEM_H

