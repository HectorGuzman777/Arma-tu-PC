/*
 *
 * Proyecto Arma tu PC
 * Héctor Gúmaro Guzmán Reyes
 * A01710706
 * 13/06/2023
 * version: final
 * Clase padre para las clases Monitor, Mouse y Teclado
 *Clase hija de la clase Producto
 */

#ifndef PERIFERICO_H
#define PERIFERICO_H
#include <iostream>
//declaración de la clase
class Periferico : public Producto {
public:
    Periferico(string _nombre, int _precio) : Producto(_nombre, _precio) {} //constructor

    void mostrarInformacion() { //metodo para mostrar el nombre del periferico y su precio
        cout << "Periférico: " << nombre << endl;
        cout << "Precio: $" << precio << endl;
    }
};

#endif

/**
 * mostrarInformacion() despliega el nombre del periferico y su respectivo precio
 *
 *
 * @param
 * @return string con el tipo de periferico y un int con su precio
 */
