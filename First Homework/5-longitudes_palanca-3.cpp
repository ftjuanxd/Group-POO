#include <iostream>
using namespace std;

int main() {

    double longitudBrazoLargo,pesoBrazoLargo,longitudTotal,pesoBrazoCorto;

    cout << "Ingrese el peso del brazo largo (newtos): ";
    cin >> pesoBrazoLargo;

    cout << "Ingrese el peso del brazo corto (newtons): ";
    cin >> pesoBrazoCorto;
    
    cout << "Ingrese la longitud total (metros): ";
    cin >> longitudTotal;

    // Calculamos la longitud del brazo largo para equilibrio
    longitudBrazoLargo = (pesoBrazoCorto*longitudTotal)/ (pesoBrazoLargo+pesoBrazoCorto); 
    //en el peso de la multiplicacion se coloca el del brazon opuesto al que se desea obtener
    
    cout << "La longitud del brazo largo para equilibrio es: " << longitudBrazoLargo<< " metros" << endl;

    system("pause");
    return 0;
}
