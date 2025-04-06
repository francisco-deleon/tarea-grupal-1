/*	
*	Programa que realiza la Suma, Resta, Multiplicación y División de dos números
*	
*	Universidad Mariano Gálvez de Guatemala
*	Facultad de Ingeniería en Sistemas
*	
*	Autor:
*	Erick Manuel Fuentes Miranda
*/

#include <iostream>

using namespace std;

int main() {
    float a, b;
    cout << "Ingrese dos numeros: ";
    cin >> a >> b;

    cout << "Suma: " << a + b << endl;
    cout << "Resta: " << a - b << endl;
    cout << "Multiplicacion: " << a * b << endl;

    if (b != 0)
        cout << "Division: " << a / b << endl;
    else
        cout << "No se puede dividir por cero." << endl;

    return 0;
}
