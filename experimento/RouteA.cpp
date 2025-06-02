#include <iostream>
#include "RouteB.h"
#include "RouteC.h"
using namespace std;

void RouteA(){
    int opcion;
    cout << "estas en la ruta A" << endl;
    cout << "Seleccione su camino hacia  B (1) o C (2) o salir (0): ";
    cin >> opcion;

    switch (opcion) {
    case 0:
        cout << "Saliendo..." << endl;
        return;
    case 1:
        RouteB();
        break;
    case 2:
        RouteC();
    default:
        cout << "Opcion invalida" << endl;
        break;
    }
}
