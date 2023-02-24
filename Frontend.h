#pragma once
#include "Developer.h"
class Frontend : public Developer
{
private:
    string frameworkPreferido; // indica el framework de preferencia del desarrollador
    bool manejaBootstrap; // indica si el desarrollador maneja Bootstrap

public:
    Frontend(string nombre, int id, int rango, string frameworkPreferido, bool manejaBootstrap);

    void imprimir();
};

