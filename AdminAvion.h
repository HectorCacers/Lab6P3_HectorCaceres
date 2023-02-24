#pragma once
#ifndef ADMINAVION_H
#define ADMINAVION_H
#include "Avion.h"
#include <vector>
using namespace std;
class AdminAvion {
public:
	void agregarAvion(Avion* avion);
	void encenderMotoresAvionInicio();
	void acelerarMotoresAvionInicio();
	void desacelerarMotoresAvionInicio();
	void apagarMotoresAvionInicio();
	void despegarAvionInicio();
	void imprimirEstadoMotoresPrimerAvion();

private:
	vector<Avion*> aviones;
};

#endif

