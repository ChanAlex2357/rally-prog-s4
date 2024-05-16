#include "pilote.h"

// Constructeur
Pilote::Pilote(){}
Pilote::Pilote(int id_pilote, const std::string& nom_pilote, int id_categorie)
    : id_pilote(id_pilote), nom_pilote(nom_pilote), id_categorie(id_categorie) {}

// Accesseurs (getters)
int Pilote::getIdPilote() const { return id_pilote; }
const std::string& Pilote::getNomPilote() const { return nom_pilote; }
int Pilote::getIdCategorie() const { return id_categorie; }

// Mutateurs (setters)
void Pilote::setIdPilote(int newIdPilote) { id_pilote = newIdPilote; }
void Pilote::setNomPilote(const std::string& newNomPilote) { nom_pilote = newNomPilote; }
void Pilote::setIdCategorie(int newIdCategorie) { id_categorie = newIdCategorie; }

// CRUD
void Pilote::save() {
    // Implémentation de la sauvegarde dans la base de données
}

std::vector<Pilote> Pilote::getAll() {
    std::vector<Pilote> Pilotes;
    // Implémentation pour récupérer toutes les catégories de la base de données
    return Pilotes;
}

Pilote Pilote::getById(int id) {
    Pilote Pilote;
    // Implémentation pour récupérer une catégorie par son ID de la base de données
    return Pilote;
}

void Pilote::remove() {
    // Implémentation de la suppression dans la base de données
}

void Pilote::update() {
    // Implémentation de la mise à jour dans la base de données
}
