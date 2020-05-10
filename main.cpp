#include <iostream>

#include "usuario.h"
#include "item.h"

using namespace std;

int main()
{
    Item::inicializa();

    Usuario u1 (1000, "EL MIL", USUARIO, "pepe@", "pepe2", 12, true, ACTIVO);
    Usuario u2;

    cout << "u1 " <<  u1.getID() << endl;
    cout << "u2 " <<  u2.getID() << endl;

    return 0;
}
