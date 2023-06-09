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

    virtual void mostrarInformacion() = 0;  // Método virtual puro

    int getPrecio() {
        return precio;
    }
};


#endif
