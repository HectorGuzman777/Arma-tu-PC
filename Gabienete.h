#ifndef GABINETE_H
#define GABINETE_H

class Gabinete : public Producto {
public:
    Gabinete(string _nombre, int _precio) : Producto(_nombre, _precio) {}

    void mostrarInformacion() {
        cout << "Gabinete: " << nombre << endl;
        cout << "Precio: $" << precio << endl;
    }
};

#endif
