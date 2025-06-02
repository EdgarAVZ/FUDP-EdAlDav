#include <iostream>
#include "RouteA.h"
#include "RouteC.h"
using namespace std;

void RouteB() {
    int opcion;
    cout << "Estas en la ruta B" << endl;
    cout << "Seleccione ruta A (1) o C (2) o salir (0): ";
    cin >> opcion;

    switch (opcion) {
    case 0:
        cout << "Saliendo..." << endl;
        return;
    case 1:
        RouteA();
        break;
    case 2:
        RouteC();
        break;
    default:
        cout << "Opcion invalida" << endl;
        break;
    }
}
