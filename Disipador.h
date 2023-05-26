#ifndef DISIPADOR_H
#define DISIPADOR_H

class Disipador : public Producto {
public:
    Disipador(string _nombre, int _precio) : Producto(_nombre, _precio) {}

    void mostrarInformacion() {
        cout << "Disipador: " << nombre << endl;
        cout << "Precio: $" << precio << endl;
    }
};


#endif
