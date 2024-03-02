#include <iostream>
#include <string>

using namespace std;

string convertirARomano(int numero) {
    string romanos[] = {"", "M", "MM", "MMM"};
    string centenas[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    string decenas[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    string unidades[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

    int u = numero % 10;
    int d = (numero / 10) % 10;
    int c = (numero / 100) % 10;
    int m = (numero / 1000) % 10;

    return romanos[m] + centenas[c] + decenas[d] + unidades[u];
}

int main() {
    int anio;

    cout << "Ingrese un año entre 1000 y 2000: ";
    cin >> anio;

    if (anio < 1000 || anio > 2000) {
        cout << "El año está fuera del rango permitido." << endl;
        return 1;
    }

    string romano = convertirARomano(anio);

    cout << "El año " << anio << " en números romanos es: " << romano << endl;

    return 0;
}




