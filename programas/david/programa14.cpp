/*	
*	Programa que mueve un punto en toda la pantalla
*	
*	Universidad Mariano Galvez de Guatemala
*	Facultad de Ingenieria en Sistemas
*	
*	Autor:
*	Jose David Mazariegos Ortega
*/

#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

void programaCatorce(){
	int x = 0, y = 0;
	int dx = 1, dy = 1;
	const int ANCHO = 119;
	const int ALTO = 29;
	
	while (!kbhit()) {
		system("cls");
		
		for (int i = 0; i < y; i++) cout << endl;
		for (int j = 0; j < x; j++) cout << " ";
		cout << "*";
		
		x += dx;
		y += dy;
		
		if (x <= 0 || x >= ANCHO) dx = -dx;
		if (y <= 0 || y >= ALTO) dy = -dy;
		
		Sleep(50);
	}
}
