#ifndef GAMESTORE_H
#define GAMESTORE_H

#include <string>
using namespace std;

constantes
const int MAX_JUEGOS = 5;                //ATENCION (agregar mas constantes para cada producto por ejemplo juego: Codigo: 00, Nombre: Call Of Duty,  Precio: 3000 , Plataforma: XBOX)
const int MAX_CARRITO = 10;

// Juegos disponibles
const string NOMBRES[MAX_JUEGOS] = {"Minecraft", "FIFA 25", "Call of Duty", "Zelda", "Mario Kart"};
const int PRECIOS[MAX_JUEGOS] = {50000, 120000, 150000, 200000, 80000};
const string PLATAFORMAS[MAX_JUEGOS] = {"PC", "PS5", "Xbox", "Switch", "Switch"};
const string CATEGORIAS[MAX_JUEGOS] = {"Aventura", "Deportes", "Shooter", "RPG", "Carreras"};

// Descuentos clientes
const double DESCUENTO_ORO = 0.20;
const double DESCUENTO_PLATA = 0.10;
const double DESCUENTO_REGULAR = 0.0;

// Prototipos
void mostrarCatalogo();
int leerCodigoJuego();
int leerCantidad();
string obtenerNombreJuego(int codigo);
int obtenerPrecioJuego(int codigo);
void agregarAlCarrito(int codigos[], int cantidades[], int &n);
double calcularSubtotal(const int codigos[], const int cantidades[], int n);
int leerTipoCliente();
double obtenerPorcentajeDescuento(int tipo);
double calcularTotal(double subtotal, double descuento);
void mostrarResumen(const int codigos[], const int cantidades[], int n, double porcentaje);
void limpiarCarrito(int codigos[], int cantidades[], int &n);

#endif //GAMESTORE_H
