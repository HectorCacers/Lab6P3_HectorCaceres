#include "Avion.h"
#include "Avion.h"
#include <iostream>
using namespace std;
void Avion::encenderMotor(int numMotor) {
	motoresEncendidos[numMotor] = true;
	rpmMotor[numMotor] = 0;
	cout << "Motor " << numMotor << " encendido" << endl;
}

void Avion::aumentarVelocidad(int numMotor) {
	if (motoresEncendidos[numMotor]) {
		rpmMotor[numMotor] += 1000;
		cout << "Aumentando la velocidad del motor " << numMotor << endl;
	}
	else {
		cout << "No se puede aumentar la velocidad porque los motores estan apagados"
			<< endl;
	}
}

void Avion::disminuirVelocidad(int numMotor) {
	if (motoresEncendidos[numMotor]) {
		rpmMotor[numMotor] -= 1000;
		if (rpmMotor[numMotor] < 0) {
			rpmMotor[numMotor] = 0;
		}
		cout << "Disminuyendo la velocidad del motor " << numMotor << endl;
	}
	else {
		cout << "No se puede disminuir la velocidad porque los motores estan apagados"
			<< endl;
	}
}

void Avion::apagarMotor(int numMotor) {
	motoresEncendidos[numMotor] = false;
	rpmMotor[numMotor] = 0;
	cout << "Motor " << numMotor << " apagado" << endl;
}

void Avion::imprimirEstado() {
	cout << "Estado de los motores: " << endl;
	for (int i = 0; i < getNumMotores(); i++) {
		cout << "Motor " << i << ": ";
		if (motoresEncendidos[i])
			cout << rpmMotor[i] << " rpm" << endl;
		else
			cout << "Apagado" << endl;
	}
}
