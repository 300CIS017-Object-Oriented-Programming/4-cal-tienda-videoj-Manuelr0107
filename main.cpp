#include <iostream>
#include "gamestore.h"
using namespace std;

int main() {
    int codigos[MAX_CARRITO];
    int cantidades[MAX_CARRITO];
    int n = 0; // cantidad de juegos en carrito

    int opcion;
    do {
        cout << "\n===== GAME STORE =====\n";
        cout << "1. Mostrar catalogo\n";
        cout << "2. Agregar al carrito\n";
        cout << "3. Ver resumen de compra\n";
        cout << "4. Limpiar carrito\n";
        cout << "5. Salir\n";
        cout << "Opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                mostrarCatalogo();
                break;
            case 2:
                agregarAlCarrito(codigos, cantidades, n);
                break;
            case 3: {
                if (n == 0) {
                    cout << "carrito vacío.\n";
                } else {
                    int tipo = leerTipoCliente();
                    double porc = obtenerPorcentajeDescuento(tipo);
                    mostrarResumen(codigos, cantidades, n, porc);
                }
                break;
            }
            case 4:
                limpiarCarrito(codigos, cantidades, n);
                break;
            case 5:
                cout << "saliendo...\n";
                break;
            default:
                cout << "opcion invalida.\n";
        }
    } while (opcion != 5);

    return 0;
}
