#include <iostream>

using namespace std;

struct Fecha {
    int dia;
    int mes;
    int anio;
};

void calcularEdad(Fecha nacimiento, Fecha actual) {
    int edad_anios = actual.anio - nacimiento.anio;
    int edad_meses = actual.mes - nacimiento.mes;
    int edad_dias = actual.dia - nacimiento.dia;

    if (edad_meses < 0 || (edad_meses == 0 && edad_dias < 0)) {
        edad_anios--;
        edad_meses += 12;
        if (edad_dias < 0) {
            edad_meses--;
            edad_dias += 30;
        }
    }

    if (edad_anios == 0) {
        cout << "La edad es: " << edad_meses << " meses y " << edad_dias << " días." << endl;
    } else {
        cout << "La edad es: " << edad_anios << " años." << endl;
    }
}

int main() {
    Fecha nacimiento, actual;

    cout << "Ingrese la fecha de nacimiento (dia mes año): ";
    cin >> nacimiento.dia >> nacimiento.mes >> nacimiento.anio;

    cout << "Ingrese la fecha actual (dia mes año): ";
    cin >> actual.dia >> actual.mes >> actual.anio;

    calcularEdad(nacimiento, actual);

    return 0;
}

