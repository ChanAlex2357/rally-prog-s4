#ifndef RALLY_H
#define RALLY_H
#include <string>
class Rally
{
private:
    int id_rally;
    std::string nom_rally;

public:
    Rally();
    Rally(int id , std::string nom);

    void setIdRally(int id);
    int getIdRally();

    void setNomRally(std::string nom);
    std::string getNomRally();
};

#endif // RALLY_H
