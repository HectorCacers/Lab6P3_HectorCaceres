// Lab6P3_HectorCaceres.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include "Backend.h"
#include "Developer.h"
#include "Frontend.h"
#include "AdminAvion.h"
#include "AvionCessna172.h"
#include "AvionBoeing737.h"
#include "AvionA340.h"

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

		case 2: {
			AdminAvion admin;
			int opcion;
			do {
				cout << "1. Agregar Avion al final de la lista." << endl;
				cout << "2. Enceder motores del avion al inicio." << endl;
				cout << "3. Acelerar motores del avion al inicio." << endl;
				cout << "4. Desacelerar motores del avion al inicio." << endl;
				cout << "5. Apagar motores del avion inicio." << endl;
				cout << "6. Despegar avion al inicio." << endl;
				cout << "7. Imprimir estado de los motores del primer avion." << endl;
				cout << "8. Salir." << endl;
				cout << "Ingrese una opcion: ";
				cin >> opcion;
				switch (opcion) {
				case 1: {
					int opcion;
					cout << "Cual avion desea agregar?" << endl;
					cout << "1. Avion A340" << endl;
					cout << "2. Avion Boeing 737" << endl;
					cout << "3. Avion Cessna 172" << endl;
					cout << "4. Salir" << endl;
					cout << "Ingrese una opcion: ";
					cin >> opcion;
					switch (opcion) {
					case 1: {
						int numAsientos;
						cout << "Ingrese el numero de asientos: ";
						cin >> numAsientos;
						Avion* avionA340 = new AvionA340(numAsientos);
						admin.agregarAvion(avionA340);
						break;
					}
					case 2: {
						int numAsientos;
						cout << "Ingrese el numero de asientos: ";
						cin >> numAsientos;
						Avion* avionBoeing737 = new AvionBoeing737(numAsientos);
						admin.agregarAvion(avionBoeing737);
						break;
					}
					case 3: {
						int numAsientos;
						cout << "Ingrese el numero de asientos: ";
						cin >> numAsientos;
						Avion* avionCessna172 = new AvionCessna172(numAsientos);
						admin.agregarAvion(avionCessna172);
						break;
					}
					case 4:
						break;
					}
					break;
				}
				case 2:
					admin.encenderMotoresAvionInicio();
					break;
				case 3:
					admin.acelerarMotoresAvionInicio();
					break;
				case 4:
					admin.desacelerarMotoresAvionInicio();
					break;
				case 5:
					admin.apagarMotoresAvionInicio();
					break;
				case 6:
					admin.despegarAvionInicio();
					break;
				case 7:
					admin.imprimirEstadoMotoresPrimerAvion();
					break;
				case 8:
					break;
				}
			} while (opcion != 8);
			
		}

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



