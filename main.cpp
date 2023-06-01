#include <iostream>
#include <vector>
#include "Producto.h"
#include "GPU.h"
#include "CPU.h"
#include "Gabinete.h"
#include "Motherboard.h"
#include "Disipador.h"
#include "FuentePoder.h"
#include "RAM.h"
#include "Periferico.h"
#include "Monitor.h"
#include "Teclado.h"
#include "Mouse.h"
#include "Carrito.h"
#include "Tienda.h"

using namespace std;

int main() {
    Tienda tienda;
    Carrito carrito;  //Menú de selección para que el usuario seleccione los productos que desee.
    
    int opcion;
    do {
        tienda.mostrarMenu();
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                cout << "==== GPUs ====" << endl;
                cout << "1. RTX 3060 ($10,000)" << endl;
                cout << "2. RTX 3080 ($12,000)" << endl;
                cout << "3. RTX 3090 ($18,000)" << endl;
                int gpuOpcion;
                cout << "Ingrese una opción: ";
                cin >> gpuOpcion;
                switch (gpuOpcion) {
                    case 1:
                        carrito.agregarProducto(new GPU("RTX 3060", 10000));
                        break;
                    case 2:
                        carrito.agregarProducto(new GPU("RTX 3080", 12000));
                        break;
                    case 3:
                        carrito.agregarProducto(new GPU("RTX 3090", 18000));
                        break;
                    default:
                        cout << "Opcion invalida." << endl; //mensaje de error cuando se escribe otro numero que no esté en el menu
                        break;
                }
                break;
            }
            case 2: {
                cout << "==== CPUs ====" << endl;
                cout << "1. INTEL I7 ($5,500)" << endl;
                cout << "2. RYZEN 7 ($5,200)" << endl;
                cout << "3. INTEL I9 ($6,200)" << endl;
                int cpuOpcion;
                cout << "Ingrese una opción: ";
                cin >> cpuOpcion;
                switch (cpuOpcion) {
                    case 1:
                        carrito.agregarProducto(new CPU("INTEL I7", 5500));
                        break;
                    case 2:
                        carrito.agregarProducto(new CPU("RYZEN 7", 5200));
                        break;
                    case 3:
                        carrito.agregarProducto(new CPU("INTEL I9", 6200));
                        break;
                    default:
                        cout << "Opción inválida." << endl;
                        break;
                }
                break;
            }
            case 3: {
    cout << "==== Gabinetes ====" << endl;
    cout << "1. RGB ($890)" << endl;
    cout << "2. Básico ($420)" << endl;
    cout << "3. Moderno ($500)" << endl;
    int gabineteOpcion;
    cout << "Ingrese una opción: ";
    cin >> gabineteOpcion;
    switch (gabineteOpcion) {
        case 1:
            carrito.agregarProducto(new Gabinete("RGB", 890));
            break;
        case 2:
            carrito.agregarProducto(new Gabinete("Básico", 420));
            break;
        case 3:
            carrito.agregarProducto(new Gabinete("Moderno", 500));
            break;
        default:
            cout << "Opción inválida." << endl;
            break;
    }
    break;
}

case 4: {
    cout << "==== Motherboards ====" << endl;
    cout << "1. ROG Strix ($4,000)" << endl;
    cout << "2. Aorus ($2,500)" << endl;
    cout << "3. Gigabyte ($2,000)" << endl;
    int motherboardOpcion;
    cout << "Ingrese una opción: ";
    cin >> motherboardOpcion;
    switch (motherboardOpcion) {
        case 1:
            carrito.agregarProducto(new Motherboard("ROG Strix", 4000));
            break;
        case 2:
            carrito.agregarProducto(new Motherboard("Aorus", 2500));
            break;
        case 3:
            carrito.agregarProducto(new Motherboard("Gigabyte", 2000));
            break;
        default:
            cout << "Opción inválida." << endl;
            break;
    }
    break;
}

case 5: {
    cout << "==== Disipadores ====" << endl;
    cout << "1. RGB ($600)" << endl;
    cout << "2. Cool Master ($560)" << endl;
    cout << "3. Aerocool ($480)" << endl;
    int disipadorOpcion;
    cout << "Ingrese una opción: ";
    cin >> disipadorOpcion;
    switch (disipadorOpcion) {
        case 1:
            carrito.agregarProducto(new Disipador("RGB", 600));
            break;
        case 2:
            carrito.agregarProducto(new Disipador("Cool Master", 560));
            break;
        case 3:
            carrito.agregarProducto(new Disipador("Aerocool", 480));
            break;
        default:
            cout << "Opción inválida." << endl;
            break;
    }
    break;
}

case 6: {
    cout << "==== Fuentes de poder ====" << endl;
    cout << "1. 750W ($260)" << endl;
    cout << "2. 800W ($280)" << endl;
    cout << "3. 850W ($300)" << endl;
    int fuentePoderOpcion;
    cout << "Ingrese una opción: ";
    cin >> fuentePoderOpcion;
    switch (fuentePoderOpcion) {
        case 1:
            carrito.agregarProducto(new FuentePoder("750W", 260));
            break;
        case 2:
            carrito.agregarProducto(new FuentePoder("800W", 280));
            break;
        case 3:
            carrito.agregarProducto(new FuentePoder("850W", 300));
            break;
        default:
            cout << "Opción inválida." << endl;
            break;
    }
    break;
}

case 7: {
    cout << "==== RAMs ====" << endl;
    cout << "1. 16GB ($200)" << endl;
    cout << "2. 32GB ($350)" << endl;
    cout << "3. 64GB ($500)" << endl;
    int ramOpcion;
    cout << "Ingrese una opción: ";
    cin >> ramOpcion;
    switch (ramOpcion) {
        case 1:
            carrito.agregarProducto(new RAM("16GB", 200));
            break;
        case 2:
            carrito.agregarProducto(new RAM("32GB", 350));
            break;
        case 3:
            carrito.agregarProducto(new RAM("64GB", 500));
            break;
        default:
            cout << "Opción inválida." << endl;
            break;
    }
    break;
}

case 8: {
    cout << "==== Monitores ====" << endl;
    cout << "1. 120Hz ($1,400)" << endl;
    cout << "2. 144Hz ($2,500)" << endl;
    cout << "3. 360Hz ($3,000)" << endl;
    int monitorOpcion;
    cout << "Ingrese una opción: ";
    cin >> monitorOpcion;
    switch (monitorOpcion) {
        case 1:
            carrito.agregarProducto(new Monitor("120Hz", 1400));
            break;
        case 2:
            carrito.agregarProducto(new Monitor("144Hz", 2500));
            break;
        case 3:
            carrito.agregarProducto(new Monitor("360Hz", 3000));
            break;
        default:
            cout << "Opción inválida." << endl;
            break;
    }
    break;
}

case 9: {
    cout << "==== Teclados ====" << endl;
    cout << "1. Mecánico ($600)" << endl;
    cout << "2. Membrana ($450)" << endl;
    cout << "3. Estándar ($200)" << endl;
    int tecladoOpcion;
    cout << "Ingrese una opción: ";
    cin >> tecladoOpcion;
    switch (tecladoOpcion) {
        case 1:
            carrito.agregarProducto(new Teclado("Mecánico", 600));
            break;
        case 2:
            carrito.agregarProducto(new Teclado("Membrana", 450));
            break;
        case 3:
            carrito.agregarProducto(new Teclado("Estándar", 200));
            break;
        default:
            cout << "Opción inválida." << endl;
            break;
    }
    break;
}

case 10: {
    cout << "==== Mouses ====" << endl;
    cout << "1. Logitech G502 ($1,200)" << endl;
    cout << "2. Deathadder Elite ($1,000)" << endl;
    cout << "3. Cougar ($850)" << endl;
    int mouseOpcion;
    cout << "Ingrese una opción: ";
    cin >> mouseOpcion;
    switch (mouseOpcion) {
        case 1:
            carrito.agregarProducto(new Mouse("Logitech G502", 1200));
            break;
        case 2:
            carrito.agregarProducto(new Mouse("Deathadder Elite", 1000));
            break;
        case 3:
            carrito.agregarProducto(new Mouse("Cougar", 850));
            break;
        default:
            cout << "Opción inválida." << endl;
            break;
    }
    break;
}

            // FInalización de compra
            case 0:
                cout << "Compra finalizada." << endl;
                break;
            default:
                cout << "Opción inválida." << endl;
                break;
        }
    } while (opcion != 0); //Mientras los numeros seleccionados sean diferentes a 0 en el menu principal, el codigo seguirá corriendo

    carrito.mostrarCarrito(); //Muestra el resultado final del carrito con el costo total

    return 0;
}


