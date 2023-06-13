/*
 *
 * Proyecto Arma tu PC
 * Héctor Gúmaro Guzmán Reyes
 * A01710706
 * 13/06/2023
 * version: final
 * Clase hija de la clase Producto
 */

#ifndef GABINETE_H
#define GABINETE_H
#include <iostream>
//declaración de la clase hija
class Gabinete : public Producto {
    //metodos
public:
    Gabinete(string _nombre, int _precio) : Producto(_nombre, _precio) {} //constructor

    void mostrarInformacion() { //metodo que despliega el tipo de gabinete y su precio
        cout << "Gabinete: " << nombre << endl;
        cout << "Precio: $" << precio << endl;
    }
};

#endif
