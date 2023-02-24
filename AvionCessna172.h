#pragma once
#ifndef AVIONCESSNA172_H
#define AVIONCESSNA172_H

#include "Avion.h"

class AvionCessna172 : public Avion {
public:
	AvionCessna172(int nAsientos);
	int getNumMotores();

private:
	const int numMotores = 1;
};

#endif
