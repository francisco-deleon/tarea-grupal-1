/*	
*	Programa que convierte de números enteros con decimal a letras
*	
*	Universidad Mariano Gálvez de Guatemala
*	Facultad de Ingeniería en Sistemas
*	
*	Autor:
*	Josseline Adriana Catalán Juárez
*/

#include <iostream>
#include <string>
#include <sstream>
#include <map>

using namespace std;

string convertirNumeroALetras(int numero) {
    map<int, string> palabras = {
        {0, "cero"}, {1, "uno"}, {2, "dos"}, {3, "tres"}, {4, "cuatro"},
        {5, "cinco"}, {6, "seis"}, {7, "siete"}, {8, "ocho"}, {9, "nueve"},
        {10, "diez"}, {11, "once"}, {12, "doce"}, {13, "trece"}, {14, "catorce"},
        {15, "quince"}, {16, "diecis�is"}, {17, "diecisiete"}, {18, "dieciocho"}, {19, "diecinueve"},
        {20, "veinte"}, {30, "treinta"}, {40, "cuarenta"}, {50, "cincuenta"},
        {60, "sesenta"}, {70, "setenta"}, {80, "ochenta"}, {90, "noventa"}
    };

    if (palabras.find(numero) != palabras.end()) {
        return palabras[numero];
    }

    int decenas = numero / 10 * 10;
    int unidades = numero % 10;

    return palabras[decenas] + (unidades ? " y " + palabras[unidades] : "");
}

string convertirDecimalALetras(string decimal) {
    string resultado = "punto";

    for (char digito : decimal) {
        resultado += " " + convertirNumeroALetras(digito - '0');
    }
    return resultado;
}

string convertirNumeroCompleto(string numero) {
    stringstream ss(numero);
    string enteroStr, decimalStr;
    getline(ss, enteroStr, '.');
    getline(ss, decimalStr);

    int entero = std::stoi(enteroStr);
    string resultado = convertirNumeroALetras(entero);

    if (!decimalStr.empty()) {
        resultado += " " + convertirDecimalALetras(decimalStr);
    }

    return resultado;
}

void programaSiete()
{
    string numero;
    cout << "Introduce un numero decimal: ";
    cin >> numero;

    string resultado = convertirNumeroCompleto(numero);
    cout << "El numero en letras es: " << resultado << endl;
}
