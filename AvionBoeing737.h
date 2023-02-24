#pragma once
#ifndef AVIONBOEING737_H
#define AVIONBOEING737_H

#include "Avion.h"

class AvionBoeing737 : public Avion {
public:
	AvionBoeing737(int nAsientos);
	int getNumMotores();

private:
	const int numMotores = 2;
};

#endif
