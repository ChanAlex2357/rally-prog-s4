#include "categorypilote.h"

// Constructeur
CategoryPilote::CategoryPilote(int id_categorie, const std::string& nom_category)
    : id_categorie(id_categorie), nom_category(nom_category) {}

// Accesseurs (getters)
int CategoryPilote::getIdCategorie() const { return id_categorie; }
const std::string& CategoryPilote::getNomCategory() const { return nom_category; }

// Mutateurs (setters)
void CategoryPilote::setIdCategorie(int newIdCategorie) { id_categorie = newIdCategorie; }
void CategoryPilote::setNomCategory(const std::string& newNomCategory) { nom_category = newNomCategory; }
