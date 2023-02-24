#include "AvionCessna172.h"
AvionCessna172::AvionCessna172(int nAsientos) : Avion() {
	numAsientos = nAsientos;
	motoresEncendidos[0] = false;
	rpmMotor[0] = 0;
}

int AvionCessna172::getNumMotores() { return numMotores; }
