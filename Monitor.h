#ifndef MONITOR_H
#define MONITOR_H
#include <iostream>

class Monitor : public Periferico {
public:
    Monitor(string _nombre, int _precio) : Periferico(_nombre, _precio) {}

    void mostrarInformacion() {
        cout << "Monitor: " << nombre << endl;
        cout << "Precio: $" << precio << endl;
    }
};
#endif
