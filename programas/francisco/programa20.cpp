/*	
*	Programa que realiza el método de ordenamiento "Burbuja" (Bubble Sort)
*	
*	Universidad Mariano Gálvez de Guatemala
*	Facultad de Ingeniería en Sistemas
*	
*	Autor:
*	Francisco Antonio De León Natareno
*/

#include <iostream>

using namespace std;

void programaVeinte()
{
	// Arreglo inicial que contiene los valores desordenados intencionalmente
	int array[9] = {1,3,5,9,4,2,8,6,7};
	int i, j ,aux;
	
	cout << "\t ** Programa que aplica el método Burbuja para ordenar un conjunto de números  ** \n" << endl;
	
	// Imprimir los valores del arreglo original
	cout << "Arreglo Original: ";
	
	for(i=0; i<9; i++) {
		cout << array[i] << "";
	}
	
	cout << "\n" <<  endl;
	
	// Recorrer el Arreglo original
	for(i=0; i<9; i++) {
		for(j=0; j<8; j++) {
			if(array[j]>array[j+1]) {
				// Formar un arreglo temporal con los valores obtenidos
				aux = array[j];
				// Reasignar los valores ordenados
				array[j] = array[j+1];
				array[j+1] = aux;
			}
		}
	}
	
	// Imprimir los valores ordenados de forma ascendente
	cout << "Numeros de forma Ascendente: ";
	
	for(i=0; i<9; i++) {
		cout << array[i] << "";
	}
	
	cout << "\n" <<  endl;
	
	// Imprimir los valores ordenados de forma descendente
	cout << "Numeros de forma Descendente: ";
	
	for(j=9; j>=1; j--) {
		cout << array[j-1] << "";
	}
	
	cout << endl;
}