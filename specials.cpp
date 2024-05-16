#include "specials.h"

// Constructeur
Specials::Specials(){}
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

// CRUD
void Specials::save() {
    // Implémentation de la sauvegarde dans la base de données
}

std::vector<Specials> Specials::getAll() {
    std::vector<Specials> Specialss;
    // Implémentation pour récupérer toutes les catégories de la base de données
    return Specialss;
}

Specials Specials::getById(int id) {
    Specials Specials;
    // Implémentation pour récupérer une catégorie par son ID de la base de données
    return Specials;
}

void Specials::remove() {
    // Implémentation de la suppression dans la base de données
}

void Specials::update() {
    // Implémentation de la mise à jour dans la base de données
}
