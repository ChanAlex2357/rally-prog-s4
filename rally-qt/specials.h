#ifndef SPECIALS_H
#define SPECIALS_H

#include <vector>
class Specials {
private:
    int id_special;
    int id_rally;
    float distance;

public:
    // Constructeur
    Specials();
    Specials(int id_special, int id_rally, float distance);

    // Accesseurs (getters)
    int getIdSpecial() const;
    int getIdRally() const;
    float getDistance() const;

    // Mutateurs (setters)
    void setIdSpecial(int newIdSpecial);
    void setIdRally(int newIdRally);
    void setDistance(double newDistance);

    //CRUD
    void save();
    static std::vector<Specials> getAll();
    static Specials getById(int id);
    void remove();
    void update();
};

#endif // SPECIALS_H
