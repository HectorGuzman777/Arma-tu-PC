#ifndef CPU_H
#define CPU_H
#include <iostream>

class CPU : public Producto {
public:
    CPU(string _nombre, int _precio) : Producto(_nombre, _precio) {} //Constructor de CPU y herencia de la clase Producto para su nombre y precio

    void mostrarInformacion() { //Muestra la información del producto 
        cout << "CPU: " << nombre << endl;
        cout << "Precio: $" << precio << endl;
    }
};

#endif
