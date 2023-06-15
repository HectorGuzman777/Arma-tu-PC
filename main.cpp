/*
 * Proyecto Arma tu PC 
 * Héctor Gúmaro Guzmán Reyes
 * A01710706
 * 15/06/2023
 *
 * Proyecto para la clase de programación orientada a objetos
 * Es un programa que permite al usuario armar su propia PC y asi 
 * poder saber el aproximado de cuanto le saldria en total la 
 * PC de sus sueños
 */

#include <iostream> //imprimir
#include <vector> //elimina el ultimo elemento de un vector
#include <typeinfo> //establece orden entre los tipos
#include "Producto.h" //bibliotecas con los objetos del proyecto
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



using namespace std;

int main() {
    vector<Producto*> productos;
    vector<Producto*> carrito;

    // lista de productos
    productos.push_back(new GPU("RTX 3060", 10000));
    productos.push_back(new GPU("RTX 3080", 12000));
    productos.push_back(new GPU("RTX 3090", 18000));
    productos.push_back(new CPU("INTEL I7", 5500));
    productos.push_back(new CPU("RYZEN 7", 5200));
    productos.push_back(new CPU("INTEL I9", 6200));
    productos.push_back(new Gabinete("RGB", 890));
    productos.push_back(new Gabinete("Básico", 420));
    productos.push_back(new Gabinete("Moderno", 500));
    productos.push_back(new Motherboard("ROG Strix", 4000));
    productos.push_back(new Motherboard("Aorus", 2500));
    productos.push_back(new Motherboard("Gigabyte", 2000));
    productos.push_back(new Disipador("RGB", 600));
    productos.push_back(new Disipador("Cool Master", 560));
    productos.push_back(new Disipador("Aerocool", 480));
    productos.push_back(new FuentePoder("750W", 260));
    productos.push_back(new FuentePoder("800W", 280));
    productos.push_back(new FuentePoder("850W", 300));
    productos.push_back(new RAM("16GB", 200));
    productos.push_back(new RAM("32GB", 350));
    productos.push_back(new RAM("64GB", 500));
    productos.push_back(new Monitor("120Hz", 1400));
    productos.push_back(new Monitor("144Hz", 2500));
    productos.push_back(new Monitor("360Hz", 3000));
    productos.push_back(new Teclado("Mecánico", 600));
    productos.push_back(new Teclado("Membrana", 450));
    productos.push_back(new Teclado("Estándar", 200));
    productos.push_back(new Mouse("Logitech G502", 1200));
    productos.push_back(new Mouse("Deathhadder Elite", 1000));
    productos.push_back(new Mouse("Cougar", 850));

    int opcion; //declaración de variables
    int costoTotal = 0;

    // Mostrar menú
    while (true) {
        cout << "===== MENU =====" << endl;
        cout << "1. Armar PC" << endl;
        cout << "2. Ver carrito" << endl;
        cout << "3. Pagar" << endl;
        cout << "4. Salir" << endl;
        cout << "Ingrese una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1: { //Armar PC
                int tipoComponente;
                cout << "Seleccione el tipo de componente:" << endl; //menu de selección de tipo de componente
                cout << "1. GPU" << endl;
                cout << "2. CPU" << endl;
                cout << "3. Gabinete" << endl;
                cout << "4. Motherboard" << endl;
                cout << "5. Disipador" << endl;
                cout << "6. Fuente de poder" << endl;
                cout << "7. RAM" << endl;
                cout << "8. Monitor" << endl;
                cout << "9. Teclado" << endl;
                cout << "10. Mouse" << endl;
                cout << "Ingrese una opción: ";
                cin >> tipoComponente;

                if (tipoComponente < 1 || tipoComponente > 10) {
                    cout << "Opción inválida. Por favor, seleccione una opción válida." << endl; //mensaje de error en caso de escribir un numero que no esté en la opciones
                    break;
                }
//Despliga otro menu en el que el usuario podra elegir elm tipo de producto deseado de acuerdo al comoponente elegido anteriormente
                int opcionComponente;
                cout << "Seleccione el componente:" << endl;
                for (int i = 0; i < productos.size(); i++) {
                    if (typeid(*productos[i]) == typeid(GPU) && tipoComponente == 1) {
                        cout << i + 1 << ". ";
                        productos[i]->mostrarInformacion();
                    } else if (typeid(*productos[i]) == typeid(CPU) && tipoComponente == 2) {
                        cout << i + 1 << ". ";
                        productos[i]->mostrarInformacion();
                    } else if (typeid(*productos[i]) == typeid(Gabinete) && tipoComponente == 3) {
                        cout << i + 1 << ". ";
                        productos[i]->mostrarInformacion();
                    } else if (typeid(*productos[i]) == typeid(Motherboard) && tipoComponente == 4) {
                        cout << i + 1 << ". ";
                        productos[i]->mostrarInformacion();
                    } else if (typeid(*productos[i]) == typeid(Disipador) && tipoComponente == 5) {
                        cout << i + 1 << ". ";
                        productos[i]->mostrarInformacion();
                    } else if (typeid(*productos[i]) == typeid(FuentePoder) && tipoComponente == 6) {
                        cout << i + 1 << ". ";
                        productos[i]->mostrarInformacion();
                    } else if (typeid(*productos[i]) == typeid(RAM) && tipoComponente == 7) {
                        cout << i + 1 << ". ";
                        productos[i]->mostrarInformacion();
                    } else if (typeid(*productos[i]) == typeid(Monitor) && tipoComponente == 8) {
                        cout << i + 1 << ". ";
                        productos[i]->mostrarInformacion();
                    } else if (typeid(*productos[i]) == typeid(Teclado) && tipoComponente == 9) {
                        cout << i + 1 << ". ";
                        productos[i]->mostrarInformacion();
                    } else if (typeid(*productos[i]) == typeid(Mouse) && tipoComponente == 10) {
                        cout << i + 1 << ". ";
                        productos[i]->mostrarInformacion();
                    }
                }

                cout << "Ingrese una opción: ";
                cin >> opcionComponente;

                if (opcionComponente < 1 || opcionComponente > productos.size()) {
                    cout << "Opción inválida. Por favor, seleccione una opción válida." << endl; //mensaje de error en caso de ingresar un numero que no esté en las opciones
                    break;
                }
//agrega el producto al carrito y va sumando el costo de los productos seleccionados
                Producto* componenteElegido = productos[opcionComponente - 1];
                carrito.push_back(componenteElegido);
                costoTotal += componenteElegido->getPrecio();

                cout << "El componente ha sido agregado al carrito." << endl;
                break;
            }
            case 2: { //Consulta el carrito
                cout << "===== CARRITO =====" << endl;
                if (carrito.empty()) {
                    cout << "El carrito está vacío." << endl;
                } else {
                    for (int i = 0; i < carrito.size(); i++) {
                        cout << i + 1 << ". ";
                        carrito[i]->mostrarInformacion(); //muestra la información de los productos almacenados en el carrito
                    }
                    cout << "Costo total: $" << costoTotal << endl; //muestra el costo total que se lleva hasta ese momento
                }
                break;
            }
            case 3: { //Simulación de haber pagado (Factura)
                cout << "===== FACTURA =====" << endl;
                if (carrito.empty()) {
                    cout << "El carrito está vacío." << endl; //si el carrito esta vacio se despliega el mensaje
                } else {
                    for (int i = 0; i < carrito.size(); i++) {
                        cout << i + 1 << ". ";
                        carrito[i]->mostrarInformacion(); //se obtiene la información de los productos guardados en el carrito y los imprime
                    }
                    cout << "Costo total: $" << costoTotal << endl; //imprime el costo total de la compra
                    cout << "Gracias por su compra." << endl;
                    carrito.clear();
                    costoTotal = 0;
                }
                break;
            }
            case 4: { //salir
                cout << "¡Hasta luego!" << endl;
                return 0;
            }
            default:
                cout << "Opción inválida. Por favor, seleccione una opción válida." << endl; //mensaje de error en caso de escribir un numero que no esté en las opciones
                break;
        }
    }

    return 0;
}
