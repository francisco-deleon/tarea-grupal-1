/*	
*	Programa que crea de forma gráfica una multiplicación manual
*	
*	Universidad Mariano Gálvez de Guatemala
*	Facultad de Ingeniería en Sistemas
*	
*	Autor:
*	Mynor Alexander Gómez Pedro
*/

#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;

// Función para mostrar una línea centrada
void mostrarLineaCentrada(int longitud, int espacioExtra = 0) {
    int espacios = (espacioExtra + 2) / 2;
    cout << setw(espacios + 2) << " ";  // Espacios para centrar
    for (int i = 0; i < longitud; ++i) {
        cout << "-";
    }
    cout << endl;
}

// Función para mostrar texto centrado
void mostrarTextoCentrado(const string& texto, int espacioExtra = 0) {
    int espacios = (espacioExtra + 2) / 2;
    cout << setw(espacios + 2) << " " << texto << endl;
}

void programaDiez() {
system("color 74");
    char repetir;
    
    do {
        int multiplicando, multiplicador;
        
        cout << "\n\n  MULTIPLICACION MANUAL PASO A PASO\n";
        cout << "  ===============================\n\n";
        cout << "  Ingrese Primer Numero: ";
        cin >> multiplicando;
        cout << "  Ingrese Segundo Numero: ";
        cin >> multiplicador;
        
        int resultado = multiplicando * multiplicador;
        string strMultiplicador = to_string(multiplicador);
        vector<int> productosParciales;
        vector<int> desplazamientos;
        
        // Calcular productos parciales con sus desplazamientos
        for (int i = strMultiplicador.length() - 1, desplazamiento = 0; i >= 0; --i, ++desplazamiento) {
            int digito = strMultiplicador[i] - '0';
            productosParciales.push_back(multiplicando * digito);
            desplazamientos.push_back(desplazamiento);
        }
        
        // Determinar la longitud máxima para el formato
        int longitudMax = to_string(resultado).length() + 4;
        int espacioExtra = longitudMax - to_string(multiplicando).length();
        
        // Mostrar la operación completa centrada
        cout << "\n";
        cout << setw(longitudMax / 2 + 2) << " " << setw(longitudMax) << multiplicando << endl;
        cout << setw(longitudMax / 2 + 2) << " " << "x " << setw(longitudMax - 2) << multiplicador << endl;
        mostrarLineaCentrada(longitudMax, espacioExtra);
        
        // Mostrar cada paso de la multiplicación centrado
        for (size_t i = 0; i < productosParciales.size(); ++i) {
            cout << setw(longitudMax / 2 + 2) << " " << setw(longitudMax - desplazamientos[i]) 
                 << productosParciales[i];
            
            if (desplazamientos[i] > 0) {
                
            }
            cout << endl;
        }
        
        // Mostrar resultado final si hay múltiples dígitos
        if (productosParciales.size() > 1) {
            mostrarLineaCentrada(longitudMax, espacioExtra);
           
                
        }
        
        cout << "\n  ¿Desea realizar otra multiplicación? (s/n): ";
        cin >> repetir;
        
    } while (repetir == 's' || repetir == 'S');
    
    cout << "\n  ¡Gracias por usar el programa!\n\n";
    system("pause");
    system("color 07");
}