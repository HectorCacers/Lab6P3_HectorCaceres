// Lab6P3_HectorCaceres.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
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

		switch (op) {

		case 1:
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

		
	
