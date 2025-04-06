/*	
*	Programa que convierte de kilómetros a millas, metros a pulgadas
*	de libras a kilos y viceversa.
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
    float km, m, lb, kg;

    // Km a millas
    cout << "Kilometros: ";
    cin >> km;
    cout << km << " km = " << km * 0.621371 << " millas" << endl;

    // Metros a pulgadas
    cout << "Metros: ";
    cin >> m;
    cout << m << " m = " << m * 39.3701 << " pulgadas" << endl;

    // Libras a kilos
    cout << "Libras: ";
    cin >> lb;
    cout << lb << " lb = " << lb * 0.453592 << " kg" << endl;

    // Kilos a libras
    cout << "Kilos: ";
    cin >> kg;
    cout << kg << " kg = " << kg * 2.20462 << " lb" << endl;

    return 0;
}
