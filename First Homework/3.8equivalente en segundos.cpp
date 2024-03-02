#include<iostream>

using namespace std;

int main(){
	
	int segundos, minutos, segundos_restantes;

    cout << "Ingrese la cantidad de segundos: ";
    cin >> segundos;

    minutos = segundos / 60;
    segundos_restantes = segundos % 60;

    cout << "Equivalente: " << minutos << " minutos y " << segundos_restantes << " segundos" << std::endl;
	
	return 0;
}
