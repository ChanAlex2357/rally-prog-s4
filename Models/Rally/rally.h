#ifndef RALLY_H
#define RALLY_H
#include <string>
#include <vector>

class Rally
{
private:
    int id_rally;
    std::string nom_rally;
    std::string date_rally;

public:
    // Constructeur
    Rally();
    Rally(int id_rally, const std::string& nom_rally, const std::string& date_rally);

    // Accesseurs (getters)
    int getIdRally() const;
    const std::string& getNomRally() const;
    const std::string& getDateRally() const;

    // Mutateurs (setters)
    void setIdRally(int newIdRally);
    void setNomRally(const std::string& newNomRally);
    void setDateRally(const std::string& newDateRally);

    //CRUD
    void save();
    static std::vector<Rally> getAll();
    static Rally getById(int id);
    void remove();
    void update();
};

#endif // RALLY_H
