/*	
*	Programa que convierte de números arábigos a romanos (mínimo 1000)
*	
*	Universidad Mariano Gálvez de Guatemala
*	Facultad de Ingeniería en Sistemas
*	
*	Autor:
*	Erick Manuel Fuentes Miranda
*/

#include <iostream>

using namespace std;

string arabigoARomano(int num) {
    string rom[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int val[]    = {1000, 900, 500, 400, 100, 90,  50, 40,  10, 9,   5,   4,   1};
    string res;

    for (int i = 0; i < 13; i++) {
        while (num >= val[i]) {
            num -= val[i];
            res += rom[i];
        }
    }
    return res;
}

int main() {
    int numero;
    cout << "Ingrese un numero (1 - 3999): ";
    cin >> numero;

    if (numero >= 1 && numero <= 3999)
        cout << "Numero romano: " << arabigoARomano(numero) << endl;
    else
        cout << "Fuera de rango." << endl;

    return 0;
}
