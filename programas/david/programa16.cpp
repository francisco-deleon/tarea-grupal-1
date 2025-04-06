/*	
*	Programa que calcula la Hipotenusa
*	
*	Universidad Mariano Galvez de Guatemala
*	Facultad de Ingenieria en Sistemas
*	
*	Autor:
*	Jose David Mazariegos Ortega
*/

#include <iostream>
#include <cmath>
using namespace std;

void programaDieciseis(){
	double cateto_opuesto, cateto_adyacente, hipotenusa;

    cout << "Calculadora de Hipotenusa (Teorema de Pitagoras)" << endl;
    cout << "Ingresa la longitud del Cateto Opuesto: ";
    cin >> cateto_opuesto;
    cout << "Ingresa la longitud del Cateto Adyacente: ";
    cin >> cateto_adyacente;
    
    hipotenusa = sqrt(cateto_opuesto * cateto_opuesto + cateto_adyacente * cateto_adyacente);
    cout << "La hipotenusa mide: " << hipotenusa << endl;
}
int main() {
    programaDieciseis();
    return 0;
}
