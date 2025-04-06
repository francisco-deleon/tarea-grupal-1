/*	
*	Programa que determina si un número es Par o Impar
*	
*	Universidad Mariano Gálvez de Guatemala
*	Facultad de Ingeniería en Sistemas
*	
*	Autor:
*	Josseline Adriana Catalán Juárez
*/

#include <iostream>
using namespace std;

int main() {
    int numero;

    
    cout << "Introduce un numero: ";
    cin >> numero;

    
    if (numero % 2 == 0) {
        cout << "El numero " << numero << " es par." << endl;
    } else {
        cout << "El numero " << numero << " es impar." << endl;
    }

    return 0;
}

