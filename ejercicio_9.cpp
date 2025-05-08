#include <iostream>
using namespace std;

int main (void){

    int nota;
    int faltas;

    cout << "dame tu promedio :\n";
    cin >> nota;

    cout << "Dame tus dias faltados :\n";
    cin >> faltas;

    if ( nota >= 85 && faltas >=3 )
    {
        cout << "Usted a aprobado :\n";
    }
    if ( nota >= 85 && faltas <=2 )
    {
        cout << "Usted a reprobado :\n";
    }
    if ( nota < 85 && faltas >=2)
    {
        cout << "Usted a reprobado :\n";
    }
    else 
    { if (nota < 85 && faltas <=1)
        cout << "uted a reprobado :\n";

    }

    return 0;

}