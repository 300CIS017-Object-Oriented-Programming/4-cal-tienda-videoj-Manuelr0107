#ifndef GAMESTORE_H
#define GAMESTORE_H

#include <string>
using namespace std;

// constantes
const int MAX_JUEGOS = 5;
const int MAX_CARRITO = 10;

// Juegos disponibles
const string NOMBRES[MAX_JUEGOS] = {"Minecraft", "FIFA 25", "Call of Duty", "Zelda", "Mario Kart"};
const int PRECIOS[MAX_JUEGOS] = {50000, 120000, 150000, 200000, 80000};
const string PLATAFORMAS[MAX_JUEGOS] = {"PC", "PS5", "Xbox", "Switch", "Switch"};
const string CATEGORIAS[MAX_JUEGOS] = {"Aventura", "Deportes", "Shooter", "RPG", "Carreras"};

// Descuentos clientes
const double DESCUENTO_ORO
