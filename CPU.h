#ifndef CPU_H
#define CPU_H
#include <iostream>


class CPU : public Producto {
public:
    CPU(string _nombre, int _precio) : Producto(_nombre, _precio) {}

    void mostrarInformacion() {
        cout << "CPU: " << nombre << endl;
        cout << "Precio: $" << precio << endl;
    }
};

#endif
