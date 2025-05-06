#include <iostream>
#include <string>
using namespace std;

int main(){
    
    int c;
    cout << "ingrese una tempertura en grados celsius:\n";
    cin >> c;

    if (c <= 15){
        cout << "Esta frio\n";
    } else if (c <= 25) {
        cout << "Templado\n";
    } else if (c > 25) {
        cout << "Caliente\n";
    } else {
        cout << "Dato invalido\n";
    }

    return 0;
}
