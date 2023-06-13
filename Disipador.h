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
//declaración de la clase hija que hereda de la clase producto
class Disipador : public Producto {
    //Metodos que tendra el codigo
public:
    Disipador(string _nombre, int _precio) : Producto(_nombre, _precio) {} //constructor

    void mostrarInformacion() { //metodo que despliega el nombre y precio
        cout << "Disipador: " << nombre << endl;
        cout << "Precio: $" << precio << endl;
    }
};


#endif

/**
 * mostrarInformacion() despliega el nombre del disipador y su respectivo precio
 *
 *
 * @param
 * @return string con el tipo de disipador y un int con su precio
 */
