#ifndef GPU_H
#define GPU_H
#include <iostream>

class GPU : public Producto {
public:
    GPU(string _nombre, int _precio) : Producto(_nombre, _precio) {}

    void mostrarInformacion() {
        cout << "GPU: " << nombre << endl;
        cout << "Precio: $" << precio << endl;
    }
};


#endif
