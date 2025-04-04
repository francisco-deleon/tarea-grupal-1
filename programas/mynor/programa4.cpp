/*	
*	Programa que determina si una palabra o número es palíndromo
*	
*	Universidad Mariano Gálvez de Guatemala
*	Facultad de Ingeniería en Sistemas
*	
*	Autor:
*	Mynor Alexander Gómez Pedro
*/
#include "programa4.h"
#include <iostream>
#include <algorithm>
#include <cctype> // Para tolower()

// Implementación de esPalindromo
bool esPalindromo(const std::string &palabra) {
    return palabra == std::string(palabra.rbegin(), palabra.rend());
}

// Implementación de programaCuatro
void programaCuatro() {
    char continuar;
    
    do {
        std::string palabra;
        std::cout << "Ingrese palabra/número: ";
        std::cin >> palabra;

        std::cout << (esPalindromo(palabra) ? "✅ Es palíndromo" : "❌ No es palíndromo") << std::endl;
        
        std::cout << "\n¿Desea probar otra palabra? (S/N): ";
        std::cin >> continuar;
        continuar = tolower(continuar); // Convertir a minúscula
        
        system("cls"); // Limpia la consola (solo en Windows)
        
    } while (continuar == 's');
    
    std::cout << "Programa terminado." << std::endl;
    system("cls"); // Limpia la consola (solo en Windows)
}