#include "rally.h"

Rally::Rally() {

}
Rally::Rally(int id, std::string nom) {
    Rally::setIdRally(id) ;
    Rally::setNomRally(nom);
}   
void Rally::setIdRally(int id) {
    Rally::id_rally = id;
}

void Rally::setNomRally(std::string nom) {
    Rally::nom_rally = nom;
}