// Calcula el peso que se puede poner en el brazo más corto de una palanca para que quede en equilibrio
#include <iostream>
using namespace std;

int main() {

    double longitudBrazoLargo, pesoBrazoLargo,longitudBrazoCorto,pesoBrazoCorto;

    cout << "Ingrese la longitud del brazo largo (metros): ";
    cin >> longitudBrazoLargo;

    cout << "Ingrese la longitud del brazo corto (metros): ";
    cin >> longitudBrazoCorto;
    
    cout << "Ingrese el peso en el brazo largo (newtons): ";
    cin >> pesoBrazoLargo;

    // Calculamos el peso en el brazo corto para equilibrio
    pesoBrazoCorto = (longitudBrazoLargo * pesoBrazoLargo) / longitudBrazoCorto;
    cout << "El peso en el brazo corto para equilibrio es: " << pesoBrazoCorto << " newtons" << endl;

    system("pause");
    return 0;
}
