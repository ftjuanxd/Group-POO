#include <iostream>
#include <string>
using namespace std;

bool es_valido_identificador(const string& identificador) {
    if (!isalpha(identificador[0]) && identificador[0] != '_') {
        return false;
    }

    for (size_t i = 0; i < identificador.length(); ++i) {
        if (!isalnum(identificador[i]) && identificador[i] != '_') {
            return false;
        }
    }

    return true;
}

int main() {
    string identificadores[] = {"n", "85nombre", "MiProblema", "AAAAAAAAA", "MiJuego",
                                "Nombre_Apellidos", "Mi Juego", "Saldo_Actual", "write",
                                "92", "m&n", "Universidad Pontificia", "registro", "Set 15",
                                "A H", "* 143 Edad"};
    size_t num_identificadores = sizeof(identificadores) / sizeof(identificadores[0]);

    cout << "Los identificadores válidos son:" << endl;
    for (size_t i = 0; i < num_identificadores; ++i) {
        if (es_valido_identificador(identificadores[i])) {
            cout << identificadores[i] << endl;
        }
    }

    return 0;
}


