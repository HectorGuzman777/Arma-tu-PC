/*
 *
 * Proyecto Arma tu PC
 * Héctor Gúmaro Guzmán Reyes
 * A01710706
 * 13/06/2023
 * version: final
 * Clase hija de la clase Producto
 */

#ifndef FUENTEPODER_H
#define FUENTEPODER_H
#include <iostream>
//declaración de la clase hija de la clase Producto
class FuentePoder : public Producto {
    //Metodos de la clase
public:
    FuentePoder(string _nombre, int _precio) : Producto(_nombre, _precio) {} //COnstructor

    void mostrarInformacion() { //metodo que desplegará la capacidad de la fuente de poder y su precio
        cout << "Fuente de poder: " << nombre << endl;
        cout << "Precio: $" << precio << endl;
    }
};

#endif
/*
**
 * mostrarInformacion() despliega la capacidad de la fuente de poder y su respectivo precio
 *
 *
 * @param
 * @return string con la capacidad y un int con su precio
 */
