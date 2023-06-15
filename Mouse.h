/*
 *
 * Proyecto Arma tu PC
 * Héctor Gúmaro Guzmán Reyes
 * A01710706
 * 13/06/2023
 * version: final
 * Clase hija de la clase Periferico
 */

#ifndef MOUSE_H
#define MOUSE_H
#include <iostream>
//declaración de la clase hija
class Mouse : public Periferico {
public:
    Mouse(string _nombre, int _precio) : Periferico(_nombre, _precio) {} //constructor

    void mostrarInformacion() { //metodo que despliega el tipo de mouse y su precio
        cout << "Mouse: " << nombre << endl;
        cout << "Precio: $" << precio << endl;
    }
};

#endif

/**
 * mostrarInformacion() despliega el tipo de mouse y su respectivo precio
 *
 *
 * @param
 * @return string con el tipo de mouse y un int con su precio
 */
