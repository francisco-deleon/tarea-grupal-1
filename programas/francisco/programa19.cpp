/*	
*	Programa que lee una matriz de 3x3 elementos y calcula la suma
*	de cada una de sus filas y columnas.
*	
*	Universidad Mariano Gálvez de Guatemala
*	Facultad de Ingeniería en Sistemas
*	
*	Autor:
*	Francisco Antonio De León Natareno
*/

#include <iostream>

using namespace std;

const int FILAS = 3;
const int COLUMNAS = 3;


// Función que permite imprimir los valores asignados en la Matriz
void mostrarMatriz(string nombre, int matriz[][COLUMNAS], int numeroFilas, int numeroCols) {
  int fila, columna;
  cout << "  Matriz " << nombre << " (" << numeroFilas << "x" << numeroCols << ")" << endl;
  cout << "------------------" << endl;
    
  for (fila=0; fila<numeroFilas; fila++ ) {
    for (columna=0; columna<numeroCols; columna++) {
      cout << "(" << fila+1 << "," << columna+1 << ") " << matriz[fila][columna] << " ";
    }
    cout <<  endl;
  }
  cout << "\n" <<  endl;
}
void programaDiecinueve()
{
	int matriz1[FILAS][COLUMNAS]; // Matriz 1 con tamaño máximo de 3 filas y 3 columnas
	int filM1 = 3; // Variable para control de Filas
	int colM1 = 3; // Variable para control de Columnas
	int sumaFilas; // Variable para almacenar la suma de las Filas
	int sumaColumnas; // Variable para almacenar la suma de las columnas
  
	cout << "\t ** Programa que calcula la suma de cada una de las Filas y Columnas de 1 Matriz  ** \n" << endl;
	cout << "Definición de la Matriz (3x3)" << endl;
	cout << "\n" <<  endl;
  
	// Bucle for para que el usuario inserte los valores de cada elemento en M1
	for(int i=0; i<filM1; ++i) {
		for(int j=0; j<colM1; ++j) {
		  cout << "Ingrese valor para M1 (" << i+1 << "," << j+1 << "): ";
		  cin >> matriz1[i][j];
		}
	}
  
	cout << "\n" <<  endl;
  
	// Invocamos la función mostrarMatriz() para devolver los valores en memoria correspondientes a la matriz
	mostrarMatriz("Matriz 1", matriz1, filM1, colM1);
  
	// Bucle for para realizar la suma de filas y la suma de columnas
	int fila, columna; // Variables de control para la fila y columna
  
	for (fila=0; fila<filM1; fila++ ) {
		sumaFilas = 0;
		sumaColumnas = 0;
	
		for (columna=0; columna<colM1; columna++) {
			sumaFilas += matriz1[fila][columna];
			sumaColumnas += matriz1[columna][fila];
		}
		
		cout << "La suma de la Fila " << fila+1 << " es igual a: " << sumaFilas;
		cout <<  endl;
		cout << "La suma de la Columna " << fila+1 << " es igual a: " << sumaColumnas;
		cout << "\n" <<  endl;
	}
  
	//cout << "La suma de las filas es: " << sumaFilas;
}