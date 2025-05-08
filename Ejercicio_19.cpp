#include <iostream>
using namespace std;

int main(){
    double consumo;
    cout << "Ingrese el consumo en Kwh: ";
    cin >> consumo;

    if (consumo < 100 && consumo > 0){
        cout << "Usted tiene la tarifa menor" << endl;

    }else if(consumo >= 100 && consumo <= 200){
        cout << "Usted tiene la tarifa media" << endl;

    }else if(consumo > 200){
        cout <<"Usted tiene la tarifa alta" << endl;
    
    }else {
        cout << "Ingrese un consumo valido" << endl;
    }

    return 0;
}