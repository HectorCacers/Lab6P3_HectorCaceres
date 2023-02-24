#include "AdminAvion.h"
#include <iostream>
#include <vector>

void AdminAvion::agregarAvion(Avion* avion) { aviones.push_back(avion); }

void AdminAvion::encenderMotoresAvionInicio() {
    int numMotores = aviones[0]->getNumMotores();
    for (int i = 0; i < numMotores; i++) {
        aviones[0]->encenderMotor(i);
    }
}

void AdminAvion::acelerarMotoresAvionInicio() {
    int numMotores = aviones[0]->getNumMotores();
    for (int i = 0; i < numMotores; i++) {
        aviones[0]->aumentarVelocidad(i);
    }
}

void AdminAvion::desacelerarMotoresAvionInicio() {
    int numMotores = aviones[0]->getNumMotores();
    for (int i = 0; i < numMotores; i++) {
        aviones[0]->disminuirVelocidad(i);
    }
}

void AdminAvion::apagarMotoresAvionInicio() {
    int numMotores = aviones[0]->getNumMotores();
    for (int i = 0; i < numMotores; i++) {
        aviones[0]->apagarMotor(i);
    }
}

void AdminAvion::despegarAvionInicio() {
    int numMotores = aviones[0]->getNumMotores();
    bool todosEncendidos = true;
    bool velocidadMinima = true;
    for (int i = 0; i < numMotores; i++) {
        if (!aviones[0]->motoresEncendidos[i])
            todosEncendidos = false;
        if (aviones[0]->rpmMotor[i] < 3000)
            velocidadMinima = false;
    }
    if (todosEncendidos && velocidadMinima) {
        cout << "El avion " << aviones[0]->getNombre() << " ha despegado con exito"
            << endl;
        aviones.erase(aviones.begin());
    }
}