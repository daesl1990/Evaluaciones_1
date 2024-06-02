//Ejercicio 4


#include <iostream>
using namespace std;

int main() {
    int pasteles;

    cout << "Introduce el numero de pasteles a realizar: ";
    cin >> pasteles;

    double harina_por_pastel = 3.0 / 100;
    double harina_total = harina_por_pastel * pasteles; 

    cout << "Para " << pasteles << " pasteles, se necesitarán " << harina_total << " kg de harina." << endl;

    return 0;
}
