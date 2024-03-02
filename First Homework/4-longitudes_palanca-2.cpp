#include <iostream>
using namespace std;

int main() {

    double longitudBrazoLargo,pesoBrazoLargo,longitudBrazoCorto,pesoBrazoCorto;

    cout << "Ingrese la longitud del brazo largo (metros): ";
    cin >> longitudBrazoLargo;

    cout << "Ingrese la longitud del brazo corto (metros): ";
    cin >> longitudBrazoCorto;
    
    cout << "Ingrese el peso en el brazo corto (newtons): ";
    cin >> pesoBrazoCorto;

    // Calculamos el peso en el brazo largo para equilibrio
    pesoBrazoLargo = (longitudBrazoCorto * pesoBrazoCorto) / longitudBrazoLargo;
    cout << "El peso en el brazo largo para equilibrio es: " << pesoBrazoLargo<< " newtons" << endl;

    system("pause");
    return 0;
}
