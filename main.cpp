#include <iostream>
#include "item.h"

using namespace std;

int main()
{
    Item i;

    i.setID(10000);
    i.setNombre("MAKOKIS");
    i.setPersistente(true);

    cout << i.getID() << " " << i.getNombre() << endl;
    if (i.esPersistente()) cout << "SI QUE ES PERSISTENTE" << endl; else cout << "NO ES PERSISTENTE" << endl;

    return 0;
}
