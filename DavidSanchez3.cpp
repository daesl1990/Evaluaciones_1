//ejerccio 3


#include <iostream>
using namespace std;

int main() {
    double velocidad = 11.25;
    double tiempo;

    cout << "Introduce el numero de horas: ";
    cin >> tiempo;

    double distancia = velocidad * tiempo;

    cout << "El antilope habra recorrido " << distancia << " km en " << tiempo << " horas." << endl;

    return 0;
}

