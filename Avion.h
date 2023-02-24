#pragma once
#ifndef AVION_H
#define AVION_H

class Avion {
public:
	virtual int getNumMotores() = 0;
	void encenderMotor(int numMotor);
	void aumentarVelocidad(int numMotor);
	void disminuirVelocidad(int numMotor);
	void apagarMotor(int numMotor);
	void imprimirEstado();

public:
	int numAsientos;
	bool motoresEncendidos[4];
	int rpmMotor[4];
};

#endif

