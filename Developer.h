#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Developer
{
protected:
    string nombre; // nombre del desarrollador
    int id; // identificador del desarrollador
    int rango; // rango del desarrollador (1: Junior, 2: Medium, 3: Senior)

public:
    Developer(string nombre, int id, int rango);

    virtual void imprimir() = 0; // método virtual puro que imprime la información del desarrollador
};



