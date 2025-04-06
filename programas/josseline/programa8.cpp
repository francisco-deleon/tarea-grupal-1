/*	
*	Programa que genera una tabla de multiplicar
*	
*	Universidad Mariano Gálvez de Guatemala
*	Facultad de Ingeniería en Sistemas
*	
*	Autor:
*	Josseline Adriana Catalán Juárez
*/

#include <iostream>
using namespace std;

void programaOcho()
{
}

int main(){
	int numero;
	
	cout<<"Introducir un numero para crear tabla de multiplicar: ";
	cin>>numero;
	
	cout<<"Tabla de multiplicar del "<<numero<<":"<<endl;
	for (int i=1;i<11;i++){
		cout<<numero<<"x"<<i<<"="<<numero*i<<endl;
	}
	return 0;
	
}
