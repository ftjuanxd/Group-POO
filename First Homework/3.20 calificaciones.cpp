#include <iostream>
using namespace std;

string obtener_calificacion(float nota) {
    if (nota < 5.0) {
        return "Suspenso";
    } else if (nota < 6.5) {
        return "Aprobado";
    } else if (nota < 8.5) {
        return "Notable";
    } else if (nota < 10) {
        return "Sobresaliente";
    } else {
        return "Matricula de Honor";
    }
}

int main() {
    float nota;
    cout << "Ingrese la nota: ";
    cin >> nota;

    string calificacion = obtener_calificacion(nota);
    cout << "La calificacion correspondiente a la nota " << nota << " es: " << calificacion << endl;

    return 0;
}
