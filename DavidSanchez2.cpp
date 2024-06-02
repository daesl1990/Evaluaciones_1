//Evaluacion 


#include <iostream>
using namespace std;

int main() {
    double velocidad = 40; 
    double tiempo; 

    cout << "Introduce el numero de horas: ";
    cin >> tiempo;

    double distancia = velocidad * tiempo; 

    cout << "El pinguino nadara " << distancia << " km en " << tiempo << " horas." << endl;

    return 0;
}

