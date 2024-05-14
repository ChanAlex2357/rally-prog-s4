#ifndef CATEGORYPILOTE_H
#define CATEGORYPILOTE_H

#include <string>

class CategoryPilote {
private:
    int id_categorie;
    std::string nom_category;

public:
    // Constructeur
    CategoryPilote(int id_categorie, const std::string& nom_category);

    // Accesseurs (getters)
    int getIdCategorie() const;
    const std::string& getNomCategory() const;

    // Mutateurs (setters)
    void setIdCategorie(int newIdCategorie);
    void setNomCategory(const std::string& newNomCategory);
};

#endif // CATEGORYPILOTE_H
