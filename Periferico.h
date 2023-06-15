/*
 *
 * Proyecto Arma tu PC
 * Héctor Gúmaro Guzmán Reyes
 * A01710706
 * 13/06/2023
 * version: final
 * Clase padre para las clases Monitor, Mouse y Teclado
 */

#ifndef PERIFERICO_H
#define PERIFERICO_H
#include <iostream>

class Periferico : public Producto {
public:
    Periferico(string _nombre, int _precio) : Producto(_nombre, _precio) {}

    void mostrarInformacion() {
        cout << "Periférico: " << nombre << endl;
        cout << "Precio: $" << precio << endl;
    }
};

#endif
