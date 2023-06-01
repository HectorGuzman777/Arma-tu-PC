#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <iostream>

using namespace std;

class Producto { //Esta clase se encarga de mostrar el nombre de los diversos productos y su precio
protected:
    string nombre;
    int precio;

public:
    Producto(string _nombre, int _precio) : nombre(_nombre), precio(_precio) {}

    virtual void mostrarInformacion() { //Se utiliza virtual para que las otras clases puedan tener acceso a nombre y precio para que estos sean adecuados al tipo de prodcuto
        cout << "Nombre: " << nombre << endl;
        cout << "Precio: $" << precio << endl;
    }

    int getPrecio() { 
        return precio;
    }
};


#endif
