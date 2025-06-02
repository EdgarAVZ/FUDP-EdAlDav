#include <iostream>
#include "RouteA.h"
#include "RouteB.h"
using namespace std;

void RouteC(){
    int opcion;
    cout << "Estas en la ruta C" << endl;
    cout << "Elije tu ruta A (1) o B (2) o salir (0)" << endl;
    cin >> opcion;

    switch (opcion){
    case 0:
        cout << "Saliendo...";
        return;
    case 1:
        RouteA();
        break;
    case 2:
        RouteB();
        break;
    default:
        cout << "opcion no valida" << endl;
        break;
    }
}