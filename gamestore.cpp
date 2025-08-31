//
// Created by ACER on 30/08/2025.
//
#include "gamestore.h"
#include <iostream>
using namespace std;

// Mostrar catálogo
void mostrarCatalogo() {
    cout << "\n===== CATÁLOGO DE JUEGOS =====\n";
    for (int i = 0; i < MAX_JUEGOS; i++) {
        cout << i + 1 << ". " << NOMBRES[i] << " - $" << PRECIOS[i]
             << " - Plataforma: " << PLATAFORMAS[i]
             << " - Categoría: " << CATEGORIAS[i] << endl;
    }
}

// Leer código de juego
int leerCodigoJuego() {
    int codigo;
    do {
        cout << "Ingrese el código del juego (1-" << MAX_JUEGOS << "): ";
        cin >> codigo;
    } while (codigo < 1 || codigo > MAX_JUEGOS);
    return codigo - 1;
}

// Leer cantidad
int leerCantidad() {
    int cant;
    do {
        cout << "Ingrese la cantidad (1-5): ";
        cin >> cant;
    } while (cant < 1 || cant > 5);
    return cant;
}

// Obtener datos de juegos
string obtenerNombreJuego(int codigo) { return NOMBRES[codigo]; }
int obtenerPrecioJuego(int codigo) { return PRECIOS[codigo]; }

// Agregar al carrito
void agregarAlCarrito(int codigos[], int cantidades[], int &n) {
    if (n >= MAX_CARRITO) {
        cout << "Carrito lleno. No se pueden agregar más juegos.\n";
        return;
    }
    int codigo = leerCodigoJuego();
    int cant = leerCantidad();
    codigos[n] = codigo;
    cantidades[n] = cant;
    n++;
    cout << "Juego agregado correctamente.\n";
}

// Calcular subtotal
double calcularSubtotal(const int codigos[], const int cantidades[], int n) {
    double subtotal = 0;
    for (int i = 0; i < n; i++) {
        subtotal += obtenerPrecioJuego(codigos[i]) * cantidades[i];
    }
    return subtotal;
}

// Leer tipo de cliente
int leerTipoCliente() {
    int tipo;
    cout << "Tipo de cliente: 1. Oro  2. Plata  3. Regular: ";
    cin >> tipo;
    return tipo;
}

// Obtener descuento
double obtenerPorcentajeDescuento(int tipo) {
    if (tipo == 1) return DESCUENTO_ORO;
    if (tipo == 2) return DESCUENTO_PLATA;
    return DESCUENTO_REGULAR;
}

// Calcular total
double calcularTotal(double subtotal, double porcentaje) {
    return subtotal - (subtotal * porcentaje);
}

// Mostrar resumen
void mostrarResumen(const int codigos[], const int cantidades[], int n, double porcentaje) {
    cout << "\n===== RESUMEN DE COMPRA =====\n";
    for (int i = 0; i < n; i++) {
        cout << obtenerNombreJuego(codigos[i]) << " x" << cantidades[i]
             << " = $" << obtenerPrecioJuego(codigos[i]) * cantidades[i] << endl;
    }
    double subtotal = calcularSubtotal(codigos, cantidades, n);
    cout << "Subtotal: $" << subtotal << endl;
    cout << "Descuento aplicado: " << porcentaje * 100 << "%\n";
    cout << "Total a pagar: $" << calcularTotal(subtotal, porcentaje) << endl;
}

// Limpiar carrito
void limpiarCarrito(int codigos[], int cantidades[], int &n) {
    n = 0;
    cout << "Carrito limpiado.\n";
}
