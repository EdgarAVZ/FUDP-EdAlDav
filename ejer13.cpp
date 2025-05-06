#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Ingrese una calificacion\n";
    cin >> n; //85

    if (n >=90 || n == 100 ){
        cout << "Felicidades, tienes una A\n";
    } else if (n >=80 ) {
        cout << "buen trabajo, tienes una B\n";
    } else if (n >=70 ) {
        cout << "Nada mal, tienes una C\n";
    } else if (n >=60 ) {
        cout << "Puedes hacer mejor, tienes una D\n";
    } else if (n <=59 ) {
        cout << "Esfuerzate mas para la proxima, tienes una F\n";
    } else {
        cout << "Dato invalido\n";
    }

    return 0;
}