/*	
*	Programa que realiza el Producto de 2 Matrices y
*	devuelve en pantalla los valores de cada Matriz.
*	
*	Universidad Mariano Gálvez de Guatemala
*	Facultad de Ingeniería en Sistemas
*	
*	Autor:
*	Francisco Antonio De León Natareno
*/

#include <iostream>

using namespace std;

const int MAXFIL = 10;
const int MAXCOL = 10;

// Función que permite imprimir los valores asignados en una Matriz
void imprimirMatriz(string nombre, int matriz[][MAXCOL], int numeroFilas, int numeroCols) {
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

void programaDiecisiete()
{
	int matriz1[MAXFIL][MAXCOL]; // Matriz 1 con tamaño máximo de 10 filas y 10 columnas
	int matriz2[MAXFIL][MAXCOL]; // Matriz 2 con tamaño máximo de 10 filas y 10 columnas
	int matrizR[MAXFIL][MAXCOL]; // Matriz R con tamaño máximo de 10 filas y 10 columnas
	int filM1, colM1, colM2; // Variables para control de Filas y Columnas
	
	cout << "\t ** Programa que realiza el Producto de 2 Matrices  ** \n" << endl;
	cout << "Definición de Matriz 1" << endl;
	cout << "Filas: ";
	// El usuario ingresa la cantidad de FILAS para la Matriz 1
	cin >> filM1;
	cout << "Columnas: ";
	// El usuario ingresa la cantidad de COLUMNAS para la Matriz 1
	cin >> colM1;
	cout << "\n" <<  endl;
	
	// Bucle for para que el usuario inserte los valores de cada elemento en M1
	for(int i=0; i<filM1; ++i) {
		for(int j=0; j<colM1; ++j) {
		  cout << "Ingrese valor para M1 (" << i+1 << "," << j+1 << "): ";
		  cin >> matriz1[i][j];
		}
	}
	
	cout << "Definición de Matriz 2" << endl;
	// Para operar el producto matricial, las FILAS de M2 deben ser igual a las COLUMNAS de M1
	cout << "Filas: " << colM1 << " (según columnas de M1)." << endl;
	cout << "Columnas: ";
	// El usuario ingresa la cantidad de COLUMNAS para la Matriz 2
	cin >> colM2;
	cout << "\n" <<  endl;
	
	// Bucle for para que el usuario inserte los valores de cada elemento en M2
	for(int i=0; i<colM1; ++i) {
		for(int j=0; j<colM2; ++j) {
		  cout << "Ingrese valor para M2 (" << i+1 << "," << j+1 << "): ";
		  cin >> matriz2[i][j];
		}
	}
	
	cout << "\n" <<  endl;
	
	// Inicializamos la Matriz Resultante con espacios "vacíos"
	for(int i=0; i<filM1; ++i) {
		for(int j=0; j<colM1; ++j) {
		  matrizR[i][j] = 0;
		}
	}
	
	// Realizamos el Producto Matricial y asignamos los valores en la Matriz Resultante.
	for(int i=0; i<filM1; ++i) {
		for(int j=0; j<colM2; ++j) {
			  for(int k=0; k<colM1; ++k) {
			    matrizR[i][j] += matriz1[i][k] * matriz2[k][j];
			  }
		}
	}
	
	// Invocamos la función imprimirMatriz() para devolver los valores en memoria correspondientes a cada matriz
	imprimirMatriz("A", matriz1, filM1, colM1);
	imprimirMatriz("B", matriz2, colM1, colM2);
	imprimirMatriz("R", matrizR, filM1, colM2);
}