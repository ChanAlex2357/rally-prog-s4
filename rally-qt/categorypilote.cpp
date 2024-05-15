#include "categorypilote.h"

// Constructeur
CategoryPilote(){

}
CategoryPilote::CategoryPilote(int id_categorie, const std::string& nom_category)
    : id_categorie(id_categorie), nom_category(nom_category) {}

// Accesseurs (getters)
int CategoryPilote::getIdCategorie() const { return id_categorie; }
const std::string& CategoryPilote::getNomCategory() const { return nom_category; }

// Mutateurs (setters)
void CategoryPilote::setIdCategorie(int newIdCategorie) { id_categorie = newIdCategorie; }
void CategoryPilote::setNomCategory(const std::string& newNomCategory) { nom_category = newNomCategory; }

// CRUD
void CategoryPilote::save() {
    // Implémentation de la sauvegarde dans la base de données
}

std::vector<CategoryPilote> CategoryPilote::getAll() {
    std::vector<CategoryPilote> categories;
    // Implémentation pour récupérer toutes les catégories de la base de données
    return categories;
}

CategoryPilote CategoryPilote::getById(int id) {
    CategoryPilote category;
    // Implémentation pour récupérer une catégorie par son ID de la base de données
    return category;
}

void CategoryPilote::remove() {
    // Implémentation de la suppression dans la base de données
}

void CategoryPilote::update() {
    // Implémentation de la mise à jour dans la base de données
}
