#ifndef PERIFERICO_H
#define PERIFERICO_H
#include <iostream>

class Periferico : public Producto {
public:
    Periferico(string _nombre, int _precio) : Producto(_nombre, _precio) {}

    void mostrarInformacion() {
        cout << "Periférico: " << nombre << endl;
        cout << "Precio: $" << precio << endl;
    }
};

#endif
