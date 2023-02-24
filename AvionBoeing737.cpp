#include "AvionBoeing737.h"
AvionBoeing737::AvionBoeing737(int nAsientos) : Avion() {
	numAsientos = nAsientos;
	for (int i = 0; i < numMotores; i++) {
		motoresEncendidos[i] = false;
		rpmMotor[i] = 0;
	}
}

int AvionBoeing737::getNumMotores() { return numMotores; }
