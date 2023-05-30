#ifndef TECLADO_H
#define TECLADO_H
#include <iostream>

class Teclado : public Periferico {
public:
    Teclado(string _nombre, int _precio) : Periferico(_nombre, _precio) {}

    void mostrarInformacion() {
        cout << "Teclado: " << nombre << endl;
        cout << "Precio: $" << precio << endl;
    }
};

#endif
