/*
 *
 * Proyecto Arma tu PC
 * Héctor Gúmaro Guzmán Reyes
 * A01710706
 * 13/06/2023
 * version: final
 * Clase hija de la clase Producto
 */

#ifndef MOTHERBOARD_H
#define MOTHERBOARD_H
#include <iostream>

//declaración de la clase hija
class Motherboard : public Producto {
    //metodos
public:
    Motherboard(string _nombre, int _precio) : Producto(_nombre, _precio) {} //constructor

    void mostrarInformacion() { //metodo que despliega el tipo de motherboard y su precio
        cout << "Motherboard: " << nombre << endl;
        cout << "Precio: $" << precio << endl;
    }
};

#endif

