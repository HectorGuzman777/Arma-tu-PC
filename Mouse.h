#ifndef MOUSE_H
#define MOUSE_H

class Mouse : public Periferico {
public:
    Mouse(string _nombre, int _precio) : Periferico(_nombre, _precio) {}

    void mostrarInformacion() {
        cout << "Mouse: " << nombre << endl;
        cout << "Precio: $" << precio << endl;
    }
};

#endif
