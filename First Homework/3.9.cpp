#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	
    double numero1, numero2, suma;

    cout << "Ingrese el primer número decimal: ";
    cin >> numero1;

    cout << "Ingrese el segundo número decimal: ";
    cin >> numero2;

    suma = numero1 + numero2;

    cout << std::fixed << std::setprecision(2); 
    cout << std::setw(8) << numero1 << std::endl;
    cout << std::setw(8) << numero2 << std::endl;
    cout << std::setw(8) << suma << std::endl;

	return 0;
}
