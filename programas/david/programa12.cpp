/*	
*	Programa que convierte de numeros decimales a hexadecimales
*	
*	Universidad Mariano Galvez de Guatemala
*	Facultad de Ingenieria en Sistemas
*	
*	Autor:
*	Jose David Mazariegos Ortega
*/

#include <iostream>

using namespace std;

void programaDoce()
{
	int decimal;
	string hexadecimal = "";
	char hexChars[] = {'0','1','2','3','4','5','6','7',
					   '8','9','A','B','C','D','E','F',};
					   
	cout<<"Ingrese un numero decimal: ";
	cin>>decimal;
	
	if(decimal == 0){
		hexadecimal = "0";
	}else {
		int num = decimal;
		while(num>0){
			int remainder = num % 16;
			hexadecimal = hexChars[remainder] + hexadecimal;
			num /= 16;
		}
	}
	
	cout<<"El numero hexadecimal es: "<<hexadecimal<<endl;
}

int main()
{
	programaDoce();
	return 0;
}
