#include "Frontend.h"
    Frontend::Frontend(string nombre, int id, int rango, string frameworkPreferido, bool manejaBootstrap)
        : Developer(nombre, id, rango) {
        this->frameworkPreferido = frameworkPreferido;
        this->manejaBootstrap = manejaBootstrap;
    }

    void Frontend::imprimir() {
        cout << nombre << " " << id << ", ";
        switch (rango) { // convertir el rango a una cadena de texto
        case 1:
            cout << "Junior";
            break;
        case 2:
            cout << "Medium";
            break;
        case 3:
            cout << "Senior";
            break;
        default:
            cout << "Desconocido";
            break;
        }
        cout << ". Prefiere trabajar con " << frameworkPreferido << ". ";
        if (manejaBootstrap) {
            cout << "Maneja Bootstrap.";
        }
        else {
            cout << "No maneja Bootstrap.";
        }
        cout << endl;
    }
