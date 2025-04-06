/*	
*	Programa que convierte de numeros decimales a binario
*	
*	Universidad Mariano Galvez de Guatemala
*	Facultad de Ingenieria en Sistemas
*	
*	Autor:
*	Jose David Mazariegos Ortega
*/

#include <iostream>

using namespace std;

void programaOnce()
{
	int decimal;
	string binario = "";
	
	cout<< "Ingrese un numero decimal: ";
	cin >> decimal;
	
	if(decimal == 0) {
		binario = "0";
	} else {
		int num = decimal;
		while (num>0){
			binario = to_string(num % 2) + binario;
			num /= 2;
			
		}
	}
	cout<<"El numero binario es: "<<binario<<endl;
}
int main()
{
	programaOnce();
	return 0;
}
