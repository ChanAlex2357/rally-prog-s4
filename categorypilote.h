#ifndef CATEGORYPILOTE_H
#define CATEGORYPILOTE_H

#include <string>
#include <vector>

class CategoryPilote {
private:
    int id_categorie;
    std::string nom_category;

public:
    // Constructeur
    CategoryPilote();
    CategoryPilote(int id_categorie, const std::string& nom_category);

    // Accesseurs (getters)
    int getIdCategorie() const;
    const std::string& getNomCategory() const;

    // Mutateurs (setters)
    void setIdCategorie(int newIdCategorie);
    void setNomCategory(const std::string& newNomCategory);

    //CRUD
    void save();
    static std::vector<CategoryPilote> getAll();
    static CategoryPilote getById(int id);
    void remove();
    void update();
};

#endif // CATEGORYPILOTE_H
