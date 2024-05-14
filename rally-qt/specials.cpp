#include "specials.h"

// Constructeur
Specials::Specials(int id_special, int id_rally, float distance)
    : id_special(id_special), id_rally(id_rally), distance(distance) {}

// Accesseurs (getters)
int Specials::getIdSpecial() const { return id_special; }
int Specials::getIdRally() const { return id_rally; }
float Specials::getDistance() const { return distance; }

// Mutateurs (setters)
void Specials::setIdSpecial(int newIdSpecial) { Specials::id_special = newIdSpecial; }
void Specials::setIdRally(int newIdRally) { Specials::id_rally = newIdRally; }
void Specials::setDistance(double newDistance) { Specials::distance = newDistance; }
