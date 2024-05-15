#ifndef CHRONO_H
#define CHRONO_H

#include<vector>
class Chrono {
private:
    int id_special;
    int id_pilote;
    double temps;

public:
    // Constructeur
    Chrono();
    Chrono(int id_special, int id_pilote, double temps);

    // Accesseurs (getters)
    int getIdSpecial() const;
    int getIdPilote() const;
    double getTemps() const;

    // Mutateurs (setters)
    void setIdSpecial(int newIdSpecial);
    void setIdPilote(int newIdPilote);
    void setTemps(double newTemps);

    //CRUD
    void save();
    static std::vector<Chrono> getAll();
    static Chrono getById(int id);
    void remove();
    void update();
};

#endif // CHRONO_H
