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
		vector<Developer*> trabajadores;
		switch (op) {

		case 1:
			

			// crear algunos desarrolladores de ejemplo
			Developer* d1 = new Backend("Luis Flores", 12099001, 3, true, false);
			Developer* d2 = new Frontend("Daniel Sagastume", 12145661, 1, "Angular", false);
			Developer* d3 = new Backend("Juan Pérez", 13001234, 2, true, true);
			Developer* d4 = new Frontend("María González", 13148765, 3, "React", true);

			// agregar los desarrolladores al vector
			trabajadores.push_back(d1);
			trabajadores.push_back(d2);
			trabajadores.push_back(d3);
			trabajadores.push_back(d4);

			// imprimir la información de cada desarrollador en el vector
			for (Developer* d : trabajadores) {
				d->imprimir();
			}

			// liberar la memoria asignada a los objetos de Developer
			for (Developer* d : trabajadores) {
				delete d;
			}
			return 0;
			break;
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

		
	
