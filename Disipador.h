/*
 *
 * Proyecto Arma tu PC
 * Héctor Gúmaro Guzmán Reyes
 * A01710706
 * 13/06/2023
 * version: final
 * Clase hija de la clase Producto
 */

#ifndef DISIPADOR_H
#define DISIPADOR_H
#include <iostream>

class Disipador : public Producto {
public:
    Disipador(string _nombre, int _precio) : Producto(_nombre, _precio) {}

    void mostrarInformacion() {
        cout << "Disipador: " << nombre << endl;
        cout << "Precio: $" << precio << endl;
    }
};


#endif
