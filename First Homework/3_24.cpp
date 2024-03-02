#include <iostream>

using namespace std;

int main() {

    int A, B, C, D;

    cout << "Ingrese los 4 dígitos del número (A B C D): ";
    cin >> A >> B >> C >> D;

    int N = A * 1000 + B * 100 + C * 10 + D;

    int resto = N % 100;
    int redondeado;
    if (resto < 50) {
        redondeado = N - resto;
    } else {
        redondeado = N + (100 - resto);
    }

    cout << "El número redondeado es: " << redondeado << endl;

    return 0;
}

