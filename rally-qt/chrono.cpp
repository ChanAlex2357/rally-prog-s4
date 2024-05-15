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

// CRUD
void Chrono::save() {
    // Implémentation de la sauvegarde dans la base de données
}

std::vector<Chrono> Chrono::getAll() {
    std::vector<Chrono> chronos;
    // Implémentation pour récupérer toutes les catégories de la base de données
    return chronos;
}

Chrono Chrono::getById(int id) {
    Chrono chrono;
    // Implémentation pour récupérer une catégorie par son ID de la base de données
    return chrono;
}

void Chrono::remove() {
    // Implémentation de la suppression dans la base de données
}

void Chrono::update() {
    // Implémentation de la mise à jour dans la base de données
}
