#include <iostream>
using namespace std;

int main(){

    int v;

    cout << "Unos policias paran a un conductor, ingrese su velocidad\n";
    cin >> v;

    if (v >= 80 ){
        cout << "Super por mucho el limite de velocidad, se le impondra una multa grande\n";
    } else if (v >= 60){
        cout << "Supero el limite de velocidad, se le impondra una multa\n";
    } else if (v < 60) {
        cout << "No super el limite de velocidad, es libre";
    }
}