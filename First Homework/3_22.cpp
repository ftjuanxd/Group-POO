#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double radio;

    cout << "Ingrese el radio del círculo: ";
    cin >> radio;

    cout << "La circunferencia del círculo es: " << 2 * M_PI * radio << endl;

    cout << "El área del círculo es: " << M_PI * pow(radio, 2) << endl;

    cout << "El diámetro del círculo es: " << 2 * radio << endl;

    return 0;
}
