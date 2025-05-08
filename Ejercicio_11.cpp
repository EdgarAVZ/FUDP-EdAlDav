#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float n1, n2;
    
    cout << "ingrese el primer valor:";
    cin >> n1;
    cout << "ingrese el segundo valor: ";
    cin >> n2;

    float d1 = abs(n1 - 100);
    float d2 = abs(n2 - 100);

    if(d1 > d2){
        cout << n1 << " esta mas cerca de 100" << endl;

    }else if(d1 < d2){
        cout << n2 << " esta mas cerca de 100" << endl;

    }else {
        cout << "Ambos valores estan a la misma distancia de 100" << endl;
    }

    return 0;

}