// Lab6P3_HectorCaceres.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include "Backend.h"
#include "Developer.h"
#include "Frontend.h"
using namespace std;
int main()
{
	int op = 0;
	while (op != 3) {
		cout << "\n\n" << endl;

		cout << "    MENU" << endl;
		cout << "------------------\n\n" << endl;

		cout << "1). Programadores" << endl;
		cout << "2). Aeropuerto" << endl;
		cout << "3). SALIR" << endl;
		cout << "\n" << endl;

		cout << "OPCION --> ";
		cin >> op;

		cout << "\n\n" << endl;
		vector<Developer*> trabajadores; // vector de punteros a Developer
		switch (op) {

		case 1: {
			int opcion = 0;

			while (opcion != 3) {
				// mostrar menú principal
				cout << "MENU Programadores" << endl;
				cout << "1. Agregar Programador" << endl;
				cout << "2. Imprimir Programadores" << endl;
				cout << "3. Salir" << endl;
				cout << "Seleccione una opcion: ";
				cin >> opcion;

				if (opcion == 1) {
					int opcion2 = 0;
					while (opcion2 != 3) {
						// mostrar menú para agregar desarrolladores
						cout << "Agregar Programador" << endl;
						cout << "1. Programador Frontend" << endl;
						cout << "2. Programador Backend" << endl;
						cout << "3. Salir" << endl;
						cout << "Seleccione una opcion: ";
						cin >> opcion2;

						if (opcion2 == 1) {
							// agregar un desarrollador Frontend
							string nombre;
							int id, rango;
							string framework;
							bool manejaBootstrap;

							cout << "Nombre: ";
							cin.ignore();
							getline(cin, nombre);
							cout << "ID: ";
							cin >> id;
							cout << "Rango (1: Junior, 2: Medium, 3: Senior): ";
							cin >> rango;
							cout << "Framework de preferencia: ";
							cin.ignore();
							getline(cin, framework);
							cout << "Maneja Bootstrap (0: No, 1: Si): ";
							cin >> manejaBootstrap;

							trabajadores.push_back(new Frontend(nombre, id, rango, framework, manejaBootstrap));

							cout << "Programador Frontend agregado correctamente" << endl;
						}
						else if (opcion2 == 2) {
							// agregar un desarrollador Backend
							string nombre;
							int id, rango;
							bool manejaSql, manejaNoSql;

							cout << "Nombre: ";
							cin.ignore();
							getline(cin, nombre);
							cout << "ID: ";
							cin >> id;
							cout << "Rango (1: Junior, 2: Medium, 3: Senior): ";
							cin >> rango;
							cout << "Maneja SQL (0: No, 1: Si): ";
							cin >> manejaSql;
							cout << "Maneja NoSQL (0: No, 1: Si): ";
							cin >> manejaNoSql;

							trabajadores.push_back(new Backend(nombre, id, rango, manejaSql, manejaNoSql));

							cout << "Programador Backend agregado correctamente" << endl;
						}
						else {
							cout << "Opcion no disponible" << endl;
						}
					}
				}
				else if (opcion == 2) {
					// imprimir la información de cada desarrollador en el vector
					for (Developer* d : trabajadores) {
						d->imprimir();
					}
				}
				else {
					cout << "Opcion no disponible" << endl;
				}
			}

			// liberar la memoria asignada a los objetos de Developer
			for (Developer* d : trabajadores) {
				delete d;
			}
			break;
		}
			
		case 2:
			break;
		case 3:
			cout << "SALIENDO...." << endl;
			break;
		default:
			cout << "! OPCION INCORRECTO !" << endl;
			break;
		}

		cout << "\n\n" << endl;
	}

	cout << "\n\n" << endl;

	system("PAUSE");
	return 0;
}



