/*
 *
 * Proyecto Arma tu PC
 * Héctor Gúmaro Guzmán Reyes
 * A01710706
 * 13/06/2023
 * version: final
 * Clase hija de la clase Producto
 */

#ifndef RAM_H
#define RAM_H
#include <iostream>
//declaración de la clase hija
class RAM : public Producto {
public:
    RAM(string _nombre, int _precio) : Producto(_nombre, _precio) {} //constructor

    void mostrarInformacion() { //metodo que despliega la capacidad y su precio
        cout << "RAM: " << nombre << endl;
        cout << "Precio: $" << precio << endl;
    }
};


#endif

/**
 * mostrarInformacion() despliega la capacidad de la RAM y su respectivo precio
 *
 *
 * @param
 * @return string con la capacidad de la RAM y un int con su precio
 */
