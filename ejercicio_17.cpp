#include <iostream>
using namespace std;

int main (void){
    int edad;

    cout << "dame tu edad :\n";
    cin >> edad;

    if (edad < 5 )
    {
        cout << "eres menor entras gratis :\n";
    } 
    if (edad > 4 )
    {
            cout << "eres  mayor de 5 tienes que pagar $5";
    }
    else
    { if  (edad > 12)
         cout << "eres mayor de 12 pagas $10";
    } 

    return 0;
    }


