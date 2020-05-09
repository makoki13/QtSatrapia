#include <iostream>

#include "usuario.h"
#include "item.h"

using namespace std;

int main()
{
    Usuario u( 10, "PEPE", USUARIO, "pablo.makoki", "pepe", 0, true, SIN_TUTORIAL);

    cout << u.getID() << " " << u.getNombre() << endl;
    if (u.esPersistente()) cout << "SI QUE ES PERSISTENTE" << endl; else cout << "NO ES PERSISTENTE" << endl;

    return 0;
}
