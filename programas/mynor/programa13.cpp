/*	
*	Programa que crea figuras geométricas básicas
*	
*	Universidad Mariano Gálvez de Guatemala
*	Facultad de Ingeniería en Sistemas
*	
*	Autor:
*	Mynor Alexander Gómez Pedro
*/
/*	
*	Programa que crea figuras geométricas básicas
*	
*	Universidad Mariano Gálvez de Guatemala
*	Facultad de Ingeniería en Sistemas
*	
*	Autor:
*	Mynor Alexander Gómez Pedro
*/
#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

void dibujarCuadrado(int dimension) {
    for(int i = 0; i < dimension; i++) {
        for(int j = 0; j < dimension; j++) {
            cout << "■ ";
        }
        cout << endl;
    }
}

void dibujarTriangulo(int altura) {
    for(int i = 0; i < altura; i++) {
        for(int j = 0; j < altura - i - 1; j++) {
            cout << "  ";
        }
        for(int j = 0; j < 2*i + 1; j++) {
            cout << "■ ";
        }
        cout << endl;
    }
}

void dibujarRectangulo(int base, int altura) {
    for(int i = 0; i < altura; i++) {
        for(int j = 0; j < base; j++) {
            cout << "■ ";
        }
        cout << endl;
    }
}

void dibujarCirculo(int radio) {
    int diametro = 2 * radio;
    for(int i = 0; i <= diametro; i++) {
        for(int j = 0; j <= diametro; j++) {
            float distancia = sqrt(pow(i - radio, 2) + pow(j - radio, 2));
            if(distancia > radio - 0.8 && distancia < radio + 0.8) {
                cout << "■ ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void programaTrece() {
		system("color 74");
    char repetir;
    do {
        int opcion;
        int dimension;
        
        system("cls");
        cout << "FIGURAS GEOMETRICAS EN CONSOLA" << endl;
        cout << "Ingrese el tamaño base (3-10): ";
        cin >> dimension;
        
        // Validar tamaño
        if(dimension < 3) dimension = 3;
        if(dimension > 10) dimension = 10;
        
        cout << "\n1. Cuadrado" << endl;
        cout << "2. Triangulo" << endl;
        cout << "3. Rectangulo" << endl;
        cout << "4. Circulo" << endl;
        cout << "5. Volver al menu principal" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        
        system("cls");
        cout << "Figura seleccionada:\n" << endl;
        
        switch(opcion) {
            case 1:
                dibujarCuadrado(dimension);
                break;
            case 2:
                dibujarTriangulo(dimension);
                break;
            case 3:
                dibujarRectangulo(dimension * 2, dimension);
                break;
            case 4:
                dibujarCirculo(dimension);
                break;
            case 5:
                return;
            default:
                cout << "Opcion no valida!" << endl;
        }
        
        cout << "\nDesea dibujar otra figura? (s/n): ";
        cin >> repetir;
        
    } while(repetir == 's' || repetir == 'S');
    system("cls");
    system("color 07");
}