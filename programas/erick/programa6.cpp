/*	
*	Programa que convierte de números enteros a letras
*	
*	Universidad Mariano Gálvez de Guatemala
*	Facultad de Ingeniería en Sistemas
*	
*	Autor:
*	Erick Manuel Fuentes Miranda
*/

#include <iostream>

using namespace std;

string unidades[] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
string decenas[] = {"", "diez", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
string especiales[] = {"diez", "once", "doce", "trece", "catorce", "quince", "dieciséis", "diecisiete", "dieciocho", "diecinueve"};

string numeroALetras(int num) {
    string texto;

    if (num == 0) return "cero";
    if (num >= 1000) {
        texto += (num / 1000 == 1 ? "mil" : unidades[num / 1000] + " mil");
        num %= 1000;
        if (num) texto += " ";
    }
    if (num >= 100) {
        if (num / 100 == 1 && num % 100 == 0)
            texto += "cien";
        else
            texto += (num / 100 == 1 ? "ciento" : unidades[num / 100] + "cientos");
        num %= 100;
        if (num) texto += " ";
    }
    if (num >= 10 && num < 20)
        texto += especiales[num - 10];
    else {
        if (num >= 20 && num % 10 != 0)
            texto += decenas[num / 10] + " y " + unidades[num % 10];
        else
            texto += decenas[num / 10] + unidades[num % 10];
    }

    return texto;
}

int main() {
    int numero;
    cout << "Ingrese un numero (0 - 9999): ";
    cin >> numero;

    if (numero >= 0 && numero <= 9999)
        cout << "En letras: " << numeroALetras(numero) << endl;
    else
        cout << "Numero fuera de rango." << endl;

    return 0;
}
