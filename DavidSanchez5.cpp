//ejercicio 5


#include <iostream>
using namespace std;

int main() {
    int cantidad_panes; 

    cout << "Introduce el numero de panes que solicita el cliente: ";
    cin >> cantidad_panes;

    int costo_total = cantidad_panes * 8; 

    cout << "El costo total de la venta es: " << costo_total << " bs." << endl;

    return 0;
}

