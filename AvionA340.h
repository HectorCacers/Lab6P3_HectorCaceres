#pragma once
#ifndef AVIONA340_H
#define AVIONA340_H

#include "Avion.h"
#include <string>

class AvionA340 : public Avion {
public:
	AvionA340(int nAsientos);
	int getNumMotores();
	std::string getNombre();

private:
	const int numMotores = 4;
};

#endif

