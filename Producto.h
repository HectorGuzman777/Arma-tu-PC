/*
 *
 * Proyecto Arma tu PC
 * Héctor Gúmaro Guzmán Reyes
 * A01710706
 * 13/06/2023
 * version: final
 * Clase padre para las clases Periferico, CPU, Disipador, FuentePoder, GPU, Gabinete, Motherboard y RAM
 *Clase abstracta
 */

#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <iostream>

using namespace std;
//Declaración de la clase
class Producto {
protected:
    string nombre;
    int precio;

public:
    Producto(string _nombre, int _precio) : nombre(_nombre), precio(_precio) {} //constructor
//abstracción
    virtual void mostrarInformacion() = 0;  // Método virtual puro

    int getPrecio() { //Obtiene el precio de los productos
        return precio;
    }
};


#endif
