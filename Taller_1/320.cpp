#include <iostream>
#include <string>
using namespace std;
int main() {
    string fecha, mes;
    string dia, ano;
    
    cout << "Ingrese la fecha en el formato '15, Febrero 2023': ";
    getline(cin, fecha);
    
    int pos1 = fecha.find(", ");
    dia = fecha.substr(0, pos1);
    int pos2 = fecha.find(" ", pos1 + 2);
    mes = fecha.substr(pos1 + 2, pos2 - pos1 - 2);
    ano = fecha.substr(pos2 + 1);

    string mesNumero;
    if (mes == "Enero") mesNumero = "1";
    else if (mes == "Febrero") mesNumero = "2";
    else if (mes == "Marzo") mesNumero = "3";
    else if (mes == "Abril") mesNumero ="4";
    else if (mes == "Mayo") mesNumero = "5";
    else if (mes == "Junio") mesNumero = "6";
    else if (mes == "Julio") mesNumero = "7";
    else if (mes == "Agosto") mesNumero = "8";
    else if (mes == "Septiembre") mesNumero = "9";
    else if (mes == "Octubre") mesNumero = "10";
    else if (mes == "Noviembre") mesNumero = "11";
    else if (mes == "Diciembre") mesNumero = "12";
    else mesNumero = -1; // Mes no válido

    // Imprime la fecha en formato numérico
    cout << dia << " " << mesNumero << " " << ano << endl;

    return 0;
}

