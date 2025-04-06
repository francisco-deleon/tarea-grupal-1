/*	
*	Programa que realiza la simulación de un Cajero (Autómata)
*	
*	Universidad Mariano Gálvez de Guatemala
*	Facultad de Ingeniería en Sistemas
*	
*	Autor:
*	Mynor Alexander Gómez Pedro
*/

#include <iostream>
#include <conio.h> // Para poder imprimir tildes o caracteres especiales
#include <windows.h> // Para poder imprimir tildes o caracteres especiales
#include <ctime> // Para obtener fecha y hora

using namespace std;

void pantalla_inicio();

char fecha[9], hora[9], option;
int total = 0, opcion, IngresarDinero = 0, RetirarDinero = 0, TransferirDinero = 0;
string NoCuenta, NomUsuario;

void programaQuince() {
    system("color 74");
    system("cls");

    int salir = 1; // Variable para controlar el bucle

    do {
        system("cls");
        pantalla_inicio();
        cout << "\nIngrese la Opción Deseada: \n\n";
        cout << "\t1.- Ingrese Dinero.\n";
        cout << "\t2.- Retirar Dinero.\n";
        cout << "\t3.- Transferir Dinero.\n";
        cout << "\t4.- Ver saldo de la Cuenta.\n";
        cout << "\t5.- Salir.\n";
        cout << "\nIngrese una de las siguientes opciones: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                system("cls");
                pantalla_inicio();
                cout << "\t\t\t\tINGRESO DE DINERO\n\n";
                cout << "\t\t\t\tIngrese la cantidad a ingresar: ";
                cin >> IngresarDinero;
                total += IngresarDinero;
                cout << "\nDepósito exitoso. Su nuevo saldo es: Q" << total << endl;
                break;

            case 2:
                system("cls");
                pantalla_inicio();
                cout << "\t\t\t\tRETIRO DE DINERO\n\n";
                cout << "\t\t\t\tIngrese la cantidad a retirar de la Cuenta (Q): ";
                cin >> RetirarDinero;
                if (RetirarDinero > total) {
                    cout << "\nFondos insuficientes. Su saldo actual es: Q" << total << endl;
                } else {
                    total -= RetirarDinero;
                    cout << "\nRetiro exitoso. Su nuevo saldo es: Q" << total << endl;
                }
                break;

            case 3:
                system("cls");
                pantalla_inicio();
                cout << "\t\t\t\tTRANSFERENCIA a cuenta Bancaria\n\n";
                cin.ignore(); // Limpiar el buffer antes de usar getline
                cout << "Ingrese el nombre del propietario de la cuenta: ";
                getline(cin, NomUsuario);
                cout << "Ingrese el No. de cuenta a transferir: ";
                getline(cin, NoCuenta);
                cout << "Ingrese la cantidad a transferir: ";
                cin >> TransferirDinero;
                if (TransferirDinero > total) {
                    cout << "\nFondos insuficientes. Su saldo actual es: Q" << total << endl;
                } else {
                    total -= TransferirDinero;
                    cout << "\nTransferencia exitosa. Su nuevo saldo es: Q" << total << endl;
                }
                break;

            case 4:
                system("cls");
                pantalla_inicio();
                cout << "\t\t\t\tSALDO DE LA CUENTA\n\n";
                cout << "\t\t\t\tEl saldo de la cuenta es: Q" << total << endl;
                break;

            case 5:
                system("cls");
                pantalla_inicio();
                cout << "\nSaliendo de su Cuenta. Por favor espere..." << endl;
                salir = 0; // Actualizar la variable para salir del bucle
                break;

            default:
                cout << "\nOpción no válida. Intente de nuevo." << endl;
        }

        if (opcion != 5) {
            cout << "\nPresione cualquier tecla para volver al menú..." << endl;
            getch();
        }

    } while (salir != 0);

    system("color 07");
    system("cls");
}

void pantalla_inicio() {
    time_t now = time(0);
    tm *ltm = localtime(&now);

    cout << "Fecha: " << 1900 + ltm->tm_year << "-" 
         << 1 + ltm->tm_mon << "-" 
         << ltm->tm_mday << " Hora: " 
         << ltm->tm_hour << ":" 
         << ltm->tm_min << ":" 
         << ltm->tm_sec << endl;

    cout << "\t\t\tCajero Automático" << endl;
    cout << "\t\tSaldo (Q): " << total << "\n";
    cout << "__________________________________________" << endl;
}