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

void programaSiete()
{
}

std::string convertirNumeroALetras(int numero) {
    std::map<int, std::string> palabras = {
        {0, "cero"}, {1, "uno"}, {2, "dos"}, {3, "tres"}, {4, "cuatro"},
        {5, "cinco"}, {6, "seis"}, {7, "siete"}, {8, "ocho"}, {9, "nueve"},
        {10, "diez"}, {11, "once"}, {12, "doce"}, {13, "trece"}, {14, "catorce"},
        {15, "quince"}, {16, "dieciséis"}, {17, "diecisiete"}, {18, "dieciocho"}, {19, "diecinueve"},
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

std::string convertirDecimalALetras(std::string decimal) {
    std::string resultado = "punto";
    for (char digito : decimal) {
        resultado += " " + convertirNumeroALetras(digito - '0');
    }
    return resultado;
}

std::string convertirNumeroCompleto(std::string numero) {
    std::stringstream ss(numero);
    std::string enteroStr, decimalStr;
    std::getline(ss, enteroStr, '.');
    std::getline(ss, decimalStr);

    int entero = std::stoi(enteroStr);
    std::string resultado = convertirNumeroALetras(entero);

    if (!decimalStr.empty()) {
        resultado += " " + convertirDecimalALetras(decimalStr);
    }

    return resultado;
}

int main() {
    std::string numero;
    std::cout << "Introduce un numero decimal: ";
    std::cin >> numero;

    std::string resultado = convertirNumeroCompleto(numero);
    std::cout << "El numero en letras es: " << resultado << std::endl;

    return 0;
}

