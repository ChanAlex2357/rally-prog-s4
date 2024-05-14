#ifndef CHRONO_H
#define CHRONO_H

class Chrono {
private:
    int id_special;
    int id_pilote;
    double temps;

public:
    // Constructeur
    Chrono(int id_special, int id_pilote, double temps);

    // Accesseurs (getters)
    int getIdSpecial() const;
    int getIdPilote() const;
    double getTemps() const;

    // Mutateurs (setters)
    void setIdSpecial(int newIdSpecial);
    void setIdPilote(int newIdPilote);
    void setTemps(double newTemps);
};

#endif // CHRONO_H