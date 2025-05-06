#include <iostream>
using namespace std;

int main() {
    float n1, n2;

    cout << "Introduce el primer numero: ";
    cin >> n1;

    cout << "Introduce el segundo numero: ";
    cin >> n2;

    if (n1 > n2) {
        cout << "El numero " << n1 << " es mayor que "  << n2 << endl;
    
    } else if (n1 < n2) {
        cout << "El numero " << n2 << " es mayor que "  << n1 << endl;

    } else {
        cout << "Ambos numeros son iguales." << endl;

    }

    return 0;
}
