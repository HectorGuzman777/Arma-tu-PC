/*
 *
 * Proyecto Arma tu PC
 * Héctor Gúmaro Guzmán Reyes
 * A01710706
 * 13/06/2023
 * version: final
 * Clase hija de la clase Producto
 */
#ifndef CPU_H
#define CPU_H
#include <iostream>

//declaración de la clase hija
class CPU : public Producto {
    //Metodos que tendra el objeto
public:
    CPU(string _nombre, int _precio) : Producto(_nombre, _precio) {} //Constructor

    void mostrarInformacion() { //metodo que desplegará la información del producto
        cout << "CPU: " << nombre << endl;
        cout << "Precio: $" << precio << endl;
    }
};

#endif

/**
 * void mostrarInformación () muestra el tipo de CPU y su respectivo precio dependiendo del tipo
 *
 *
 * @param
 * @return string con su nombre y un int con su precio
 */
