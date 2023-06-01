#ifndef GPU_H
#define GPU_H
#include <iostream>

class GPU : public Producto {
public:
    GPU(string _nombre, int _precio) : Producto(_nombre, _precio) {} //Se crea la clase GPU y se le agrega la herencia de la clase producto para poder obtener su nombre y precio

    void mostrarInformacion() {
        cout << "GPU: " << nombre << endl;
        cout << "Precio: $" << precio << endl;
    }
};


#endif
