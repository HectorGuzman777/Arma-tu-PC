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
//Clase hija
class GPU : public Producto {
public:
    //Metodos de la clase
    GPU(string _nombre, int _precio) : Producto(_nombre, _precio) {} //constructor

    void mostrarInformacion() { //metodo que despliega el tipo de GPU y su precio
        cout << "GPU: " << nombre << endl;
        cout << "Precio: $" << precio << endl;
    }
};


#endif

/**
 * mostrarInformacion() despliega el tipo de GPU y su respectivo precio
 *
 *
 * @param
 * @return string con el tipo de GPU y un int con su precio
 */
