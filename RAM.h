#ifndef RAM_H
#define RAM_H
#include <iostream>

class RAM : public Producto {
public:
    RAM(string _nombre, int _precio) : Producto(_nombre, _precio) {}

    void mostrarInformacion() {
        cout << "RAM: " << nombre << endl;
        cout << "Precio: $" << precio << endl;
    }
};

#endif
