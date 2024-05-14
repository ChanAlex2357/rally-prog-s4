#include "chrono.h"

// Constructeur
Chrono::Chrono(int id_special, int id_pilote, double temps)
    : id_special(id_special), id_pilote(id_pilote), temps(temps) {}

// Accesseurs (getters)
int Chrono::getIdSpecial() const { return id_special; }
int Chrono::getIdPilote() const { return id_pilote; }
double Chrono::getTemps() const { return temps; }

// Mutateurs (setters)
void Chrono::setIdSpecial(int newIdSpecial) { id_special = newIdSpecial; }
void Chrono::setIdPilote(int newIdPilote) { id_pilote = newIdPilote; }
void Chrono::setTemps(double newTemps) { temps = newTemps; }
