#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double radio;

    cout << "Ingrese el radio del c�rculo: ";
    cin >> radio;

    cout << "La circunferencia del c�rculo es: " << 2 * M_PI * radio << endl;

    cout << "El �rea del c�rculo es: " << M_PI * pow(radio, 2) << endl;

    cout << "El di�metro del c�rculo es: " << 2 * radio << endl;

    return 0;
}
