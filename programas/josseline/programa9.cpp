/*	
*	Programa que genera todas las tablas de multiplicar del 1 al 10
*	
*	Universidad Mariano Gálvez de Guatemala
*	Facultad de Ingeniería en Sistemas
*	
*	Autor:
*	Josseline Adriana Catalán Juárez
*/

#include <iostream>
using namespace std;

int main(){
	for (int i=1;i<=10;i++){
		cout<<"Tabla de multiplicar del "<<i<<":"<<endl;
	for (int j=1;j<=10;j++)
		cout<<i<<"x"<<j<<"="<<i*j<<endl;
	}
	
	cout<<endl;
	
}
