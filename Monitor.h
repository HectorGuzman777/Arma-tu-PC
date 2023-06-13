/*
 *
 * Proyecto Arma tu PC
 * Héctor Gúmaro Guzmán Reyes
 * A01710706
 * 13/06/2023
 * version: final
 * Clase hija de la clase Periferico
 */

#ifndef MONITOR_H
#define MONITOR_H
#include <iostream>
//declaración de la clase hija
class Monitor : public Periferico {
    //metodos de la clase
public:
    Monitor(string _nombre, int _precio) : Periferico(_nombre, _precio) {} //constructor

    void mostrarInformacion() { //Metodo que despliega la frecuencia del monitor y su precio
        cout << "Monitor: " << nombre << endl;
        cout << "Precio: $" << precio << endl;
    }
};

#endif
