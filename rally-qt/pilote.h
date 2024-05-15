#ifndef PILOTE_H
#define PILOTE_H
#include <string>
#include <vector>
class Pilote {
private:
    int id_pilote;
    std::string nom_pilote;
    int id_categorie;

public:
    // Constructeur
    Pilote();
    Pilote(int id_pilote, const std::string& nom_pilote, int id_categorie);

    // Accesseurs (getters)
    int getIdPilote() const;
    const std::string& getNomPilote() const;
    int getIdCategorie() const;

    // Mutateurs (setters)
    void setIdPilote(int newIdPilote);
    void setNomPilote(const std::string& newNomPilote);
    void setIdCategorie(int newIdCategorie);

    //CRUD
    void save();
    static std::vector<Pilote> getAll();
    static Pilote getById(int id);
    void remove();
    void update();
};

#endif // PILOTE_H
