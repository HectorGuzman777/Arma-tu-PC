#ifndef MOTHERBOARD_H
#define MOTHERBOARD_H
#include <iostream>

class Motherboard : public Producto {
public:
    Motherboard(string _nombre, int _precio) : Producto(_nombre, _precio) {}

    void mostrarInformacion() {
        cout << "Motherboard: " << nombre << endl;
        cout << "Precio: $" << precio << endl;
    }
};

#endif
