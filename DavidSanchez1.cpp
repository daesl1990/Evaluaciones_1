//Evalucion 1

#include <iostream>
using namespace std;

int main() {
    double velocidad = 24;
    double tiempo;

    cout << "Introduce el numero de horas: ";
    cin >> tiempo;

    double distancia = velocidad * tiempo;

    cout << "El atun nadara " << distancia << " km en " << tiempo << " horas." << endl;

    return 0;
}

