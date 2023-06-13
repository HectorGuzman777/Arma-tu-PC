/*
 *
 * Proyecto Arma tu PC
 * Héctor Gúmaro Guzmán Reyes
 * A01710706
 * 13/06/2023
 * version: final
 * Clase hija de la clase Producto
 */

#ifndef GPU_H
#define GPU_H
#include <iostream>
//
class GPU : public Producto {
public:
    GPU(string _nombre, int _precio) : Producto(_nombre, _precio) {}

    void mostrarInformacion() {
        cout << "GPU: " << nombre << endl;
        cout << "Precio: $" << precio << endl;
    }
};


#endif
