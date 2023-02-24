#include "Backend.h"

    Backend::Backend(string nombre, int id, int rango, bool manejaSql, bool manejaNoSql)
        : Developer(nombre, id, rango) {
        this->manejaSql = manejaSql;
        this->manejaNoSql = manejaNoSql;
    }

    void Backend::imprimir() {
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
        cout << ". ";
        if (manejaSql) {
            cout << "Maneja SQL. ";
        }
        else {
            cout << "No maneja SQL. ";
        }
        if (manejaNoSql) {
            cout << "Maneja NoSQL.";
        }
        else {
            cout << "No maneja NoSQL.";
        }
        cout << endl;
    }

