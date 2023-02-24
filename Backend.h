#pragma once
#include "Developer.h"
class Backend : public Developer
{
private:
    bool manejaSql; // indica si el desarrollador maneja SQL
    bool manejaNoSql; // indica si el desarrollador maneja NoSQL

public:
    Backend(string nombre, int id, int rango, bool manejaSql, bool manejaNoSql);
    void imprimir(); 
};

