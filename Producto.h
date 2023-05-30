#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <iostream>

using namespace std;

class Producto {
protected:
    string nombre;
    int precio;

public:
    Producto(string _nombre, int _precio) : nombre(_nombre), precio(_precio) {}

    virtual void mostrarInformacion() {
        cout << "Nombre: " << nombre << endl;
        cout << "Precio: $" << precio << endl;
    }

    int getPrecio() {
        return precio;
    }
};


#endif
