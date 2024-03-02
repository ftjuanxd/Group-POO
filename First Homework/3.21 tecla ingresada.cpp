#include <iostream>
using namespace std;

int main() {
    char caracter;

    cout << "Introduce un caracter: ";
    cin >> caracter;

    if ((caracter >= 'a' && caracter <= 'z') || (caracter >= 'A' && caracter <= 'Z')) {
        cout << "El caracter es alfabetico." << endl;
    } else if (caracter >= '0' && caracter <= '9') {
        cout << "El caracter es un digito." << endl;
    } else if ((caracter >= 32 && caracter <= 47) || (caracter >= 58 && caracter <= 64) ||
               (caracter >= 91 && caracter <= 96) || (caracter >= 123 && caracter <= 126)) {
        cout << "El caracter es un signo de puntuacion." << endl;
    } else if (caracter == ' ' || caracter == '\t' || caracter == '\n') {
        cout << "El caracter es un espacio en blanco." << endl;
    } else {
        cout << "El caracter es especial o no imprimible." << endl;
    }

    return 0;
}

