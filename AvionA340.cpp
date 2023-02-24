#include "AvionA340.h"
#include <string>
AvionA340::AvionA340(int nAsientos) : Avion() {
	numAsientos = nAsientos;
	for (int i = 0; i < numMotores; i++) {
		motoresEncendidos[i] = false;
		rpmMotor[i] = 0;
	}
}

int AvionA340::getNumMotores() { return numMotores; }

std::string AvionA340::getNombre() {
	return "Avion A340";
}