#ifndef TIENDA_H
#define TIENDA_H


class Tienda {
public:
    void mostrarMenu() {
        cout << "==== Menú ====" << endl;
        cout << "1. Comprar GPU" << endl;
        cout << "2. Comprar CPU" << endl;
        cout << "3. Comprar Gabinete" << endl;
        cout << "4. Comprar Motherboard" << endl;
        cout << "5. Comprar Disipador" << endl;
        cout << "6. Comprar Fuente de poder" << endl;
        cout << "7. Comprar RAM" << endl;
        cout << "8. Comprar Monitor" << endl;
        cout << "9. Comprar Teclado" << endl;
        cout << "10. Comprar Mouse" << endl;
        cout << "0. Terminar compra" << endl;
    }
};

#endif
