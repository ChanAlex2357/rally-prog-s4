#ifndef SPECIALS_H
#define SPECIALS_H

class Specials {
private:
    int id_special;
    int id_rally;
    float distance;

public:
    // Constructeur
    Specials(int id_special, int id_rally, float distance);

    // Accesseurs (getters)
    int getIdSpecial() const;
    int getIdRally() const;
    float getDistance() const;

    // Mutateurs (setters)
    void setIdSpecial(int newIdSpecial);
    void setIdRally(int newIdRally);
    void setDistance(double newDistance);
};

#endif // SPECIALS_H
