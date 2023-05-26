#ifndef CARRITO_H
#define CARRITO_H

class Carrito {
private:
    vector<Producto*> productos;
    int total;

public:
    Carrito() : total(0) {}

    void agregarProducto(Producto* producto) {
        productos.push_back(producto);
        total += producto->getPrecio();
    }

    void mostrarCarrito() {
        cout << "Carrito de compras:" << endl;
        for (int i = 0; i < productos.size(); i++) {
            productos[i]->mostrarInformacion();
            cout << endl;
        }
        cout << "Total: $" << total << endl;
    }
};

#endif
