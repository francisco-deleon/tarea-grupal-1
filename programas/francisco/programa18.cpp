/*	
*	Programa que permite seleccionar a través de un menú dinámico 4 métodos propuestos para
*	determinar si una variable o expresión numérica es par.
*	
*	Universidad Mariano Gálvez de Guatemala
*	Facultad de Ingeniería en Sistemas
*	
*	Autor:
*	Francisco Antonio De León Natareno
*/

#include <iostream>
#include <cstdlib>

using namespace std;

void programaDieciocho()
{
	int programa, resultado, residuo;
  	int numero1 = 128; // Variable "numero1" de tipo INT, tiene asignado el valor 128 por defecto
	
	cout << "\t ** Programa para Determinar si una variable es Par ** \n" << endl;
	cout << "Metodo 1 = Operador Modulo o Residuo %" << endl;
	cout << "Metodo 2 = Operaciones Aritmeticas" << endl;
	cout << "Metodo 3 = Operacion AND &" << endl;
	cout << "Metodo 4 = Funcion div() \n" << endl;
	
	cout << "Seleccione Metodo (1-4): ";
	// Leemos el número ingresado por el usuario
	cin >> programa;
	cout << endl;
	
	switch(programa) {	
		// Metodo 1
		case 1:
			cout << "-> Utilizando el Operador Modulo o Residuo % (Metodo 1) \n" << endl;
			
			// La variable "resultado" es verdadero SI Y SOLO SI el modulo o residuo de "numero1" es igual a 0
			resultado = numero1 % 2 == 0;
			
			// SI la variable "resultado" es VERDADERO (NO existe un residuo). Por lo tanto es PAR.
			if(resultado){
				cout << "El numero " << numero1 << " es PAR. \n" << endl;
			}
			
			// De lo contrario, "resultado" es FALSO (SI existe un residuo). Por lo tanto es IMPAR.
			else {
				cout << "El numero " << numero1 << " es IMPAR. \n" << endl;
			}
			
			break;
			
		// Metodo 2	
		case 2:
			cout << "-> Utilizando Operaciones Aritmeticas (Metodo 2) \n" << endl;
			
			// La variable "residuo" es igual a: numero1 MENOS (numero1 DIVIDIDO 2, MULTIPLICADO por 2)
			// La operacion entre parentesis devuelve el valor 1 cuando es un numero IMPAR y el valor 0 cuando es PAR
			
			residuo = numero1 - (numero1 / 2 * 2); // Al dividir un ENTERO entre 2, se obtiene un valor SIN DECIMALES
			
			// SI la variable "residuo" es mayor que 0 (SI existe un residuo). Por lo tanto es IMPAR.
			if(residuo > 0){
				cout << "El numero " << numero1 << " es IMPAR. \n" << endl;
			}
			
			// De lo contrario, "residuo" es igual a 0 (NO existe un residuo). Por lo tanto es PAR.
			else {
				cout << "El numero " << numero1 << " es PAR. \n" << endl;
			}
			
			break;
			
		// Metodo 3
		case 3:
			cout << "-> Utilizando la Operacion AND & (Metodo 3) \n" << endl;
			
			// TODO NUMERO IMPAR tiene su LSB en valor 1
			// TODO NUMERO PAR tiene su LSB en valor 0
			// Se comparan a nivel de bits el LSB de la variable "numero1" Y el valor 1
			resultado = numero1 & 1;
			
			// SI la comparacion de la variable "numero1" Y el valor 1 es VERDADERO (cuando el LSB es 1). Por lo tanto es IMPAR.
			if(resultado){
				cout << "El numero " << numero1 << " es IMPAR. \n" << endl;
			}
			
			// De lo contrario, la comparacion de la variable "numero1" Y el valor 1 es FALSO (cuando el LSB es 0). Por lo tanto es PAR.
			else {
				cout << "El numero " << numero1 << " es PAR. \n" << endl;
			}

			break;
			
		// Metodo 4
		case 4:
			cout << "-> Utilizando la Funcion div() (Metodo 4) \n" << endl;
			
			// Variable de tipo div_t (cociente *quot INT, residuo *rem INT)
			div_t resultado_div;
			
			// Asignamos el resultado de la función div() con un divisor 2 a la variable "resultado_div"
			resultado_div = div(numero1, 2);
			
			// SI la variable "resultado_div" tiene un residuo (.rem) mayor que 0 (SI existe un residuo). Por lo tanto es IMPAR.
			if(resultado_div.rem > 0){
				cout << "El numero " << numero1 << " es IMPAR. \n" << endl;
			}
			
			// De lo contrario, la variable "resultado_div" tiene un residuo (.rem) igual a 0 (NO existe un residuo). Por lo tanto es PAR.
			else {
				cout << "El numero " << numero1 << " es PAR. \n" << endl;
			}

			break;
			
		// caso por defecto (cualquier numero distinto de 1,2,3,4)
		default:
			cout << "OPCION NO VALIDA" << endl;
	}
}