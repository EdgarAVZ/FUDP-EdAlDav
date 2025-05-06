#include <iostream>
#include <string>
using namespace std;

int main(){
    
    int n;
    int descuento;
    int resta;

    cout << "ingrese el monto de su compra:\n";
    cin >> n;

    descuento = n*0.1;
    resta = n - descuento;
    if (n >= 100){
        cout << "Su monto de compra es mayor a $100, reciba un descuento del 10%\n" << resta;
    } else if (n < 100) {
        cout << "gracias por su compra\n" << n;
    } else {
        cout << "dato invalido\n";
    }

    return 0;
}