#include "rally.h"

// Constructeur
Rally::Rally();
Rally::Rally(int id_rally, const std::string& nom_rally, const std::string& date_rally)
    : id_rally(id_rally), nom_rally(nom_rally), date_rally(date_rally) {}

// Accesseurs (getters)
int Rally::getIdRally() const { return id_rally; }
const std::string& Rally::getNomRally() const { return nom_rally; }
const std::string& Rally::getDateRally() const { return date_rally; }

// Mutateurs (setters)
void Rally::setIdRally(int newIdRally) { id_rally = newIdRally; }
void Rally::setNomRally(const std::string& newNomRally) { nom_rally = newNomRally; }
void Rally::setDateRally(const std::string& newDateRally) { date_rally = newDateRally; }

// CRUD
void Rally::save() {
    // Implémentation de la sauvegarde dans la base de données
}

std::vector<Rally> Rally::getAll() {
    std::vector<Rally> Rallys;
    // Implémentation pour récupérer toutes les catégories de la base de données
    return Rallys;
}

Rally Rally::getById(int id) {
    Rally Rally;
    // Implémentation pour récupérer une catégorie par son ID de la base de données
    return Rally;
}

void Rally::remove() {
    // Implémentation de la suppression dans la base de données
}

void Rally::update() {
    // Implémentation de la mise à jour dans la base de données
}
