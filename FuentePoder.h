#ifndef FUENTEPODER_H
#define FUENTEPODER_H
#include <iostream>

class FuentePoder : public Producto {
public:
    FuentePoder(string _nombre, int _precio) : Producto(_nombre, _precio) {}

    void mostrarInformacion() {
        cout << "Fuente de poder: " << nombre << endl;
        cout << "Precio: $" << precio << endl;
    }
};

#endif
