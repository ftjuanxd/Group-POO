#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int convertirNumero(string numero) {
    stringstream ss(numero);
    string palabra;
    int resultado = 0;
    int temporal = 0;

    while (ss >> palabra) {
        
        if (palabra == "cero") temporal += 0;
        else if (palabra == "uno") temporal += 1;
        else if (palabra == "dos") temporal += 2;
        else if (palabra == "tres") temporal += 3;
        else if (palabra == "cuatro") temporal += 4;
        else if (palabra == "cinco") temporal += 5;
        else if (palabra == "seis") temporal += 6;
        else if (palabra == "siete") temporal += 7;
        else if (palabra == "ocho") temporal += 8;
        else if (palabra == "nueve") temporal += 9;
        else if (palabra == "diez") temporal += 10;
        else if (palabra == "once") temporal += 11;
        else if (palabra == "doce") temporal += 12;
        else if (palabra == "trece") temporal += 13;
        else if (palabra == "catorce") temporal += 14;
        else if (palabra == "quince") temporal += 15;
        else if (palabra == "dieciseis") temporal += 16;
        else if (palabra == "diecisiete") temporal += 17;
        else if (palabra == "dieciocho") temporal += 18;
        else if (palabra == "diecinueve") temporal += 19;
        else if (palabra == "veinte") temporal += 20;
        else if (palabra == "veintiuno") temporal += 21;
        else if (palabra == "veintidos") temporal += 22;
        else if (palabra == "veintitres") temporal += 23;
        else if (palabra == "veinticuatro") temporal += 24;
        else if (palabra == "veinticinco") temporal += 25;
        else if (palabra == "veintiseis") temporal += 26;
        else if (palabra == "veintisiete") temporal += 27;
        else if (palabra == "veintiocho") temporal += 28;
        else if (palabra == "veintinueve") temporal += 29;
        else if (palabra == "treinta") temporal += 30;
        else if (palabra == "cuarenta") temporal += 40;
        else if (palabra == "cincuenta") temporal += 50;
        else if (palabra == "sesenta") temporal += 60;
        else if (palabra == "setenta") temporal += 70;
        else if (palabra == "ochenta") temporal += 80;
        else if (palabra == "noventa") temporal += 90;
        else if (palabra == "cien" || palabra == "ciento") temporal += 100;
        else if (palabra == "doscientos") temporal += 200;
        else if (palabra == "trescientos") temporal += 300;
        else if (palabra == "cuatrocientos") temporal += 400;
        else if (palabra == "quinientos") temporal += 500;
        else if (palabra == "seiscientos") temporal += 600;
        else if (palabra == "setecientos") temporal += 700;
        else if (palabra == "ochocientos") temporal += 800;
        else if (palabra == "novecientos") temporal += 900;
    }
    resultado = temporal;
    return resultado;
}

int main() {
    string entrada;
    cout << "Ingrese el número en palabras: ";
    getline(cin, entrada);

    int numero = convertirNumero(entrada);

    cout << "El número en formato entero es: " << numero << endl;

    return 0;
}

