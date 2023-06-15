/*
 *
 * Proyecto Arma tu PC
 * Héctor Gúmaro Guzmán Reyes
 * A01710706
 * 13/06/2023
 * version: final
 * Clase hija de la clase Periferico
 */

#ifndef TECLADO_H
#define TECLADO_H
#include <iostream>
//declaración de la clasae hija
class Teclado : public Periferico {
public:
    Teclado(string _nombre, int _precio) : Periferico(_nombre, _precio) {} //constructor

    void mostrarInformacion() { //metodo para mostrar el tipo y precio
        cout << "Teclado: " << nombre << endl;
        cout << "Precio: $" << precio << endl;
    }
};

#endif

/**
 * mostrarInformacion() despliega el tipo de teclado y su respectivo precio
 *
 *
 * @param
 * @return string con el tipo de teclado y un int con su precio
 */
