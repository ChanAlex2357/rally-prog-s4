#include "bdd.h"

Bdd::Bdd(){

}
Bdd::Bdd(char * connInfo){
    setConnInfo(connInfo);
}
char * Bdd::getConnInfo() const {return connInfo;}

void Bdd::setConnInfo(char *newConnInfo){ connInfo  = newConnInfo;}

PGconn * Bdd::getConn(){
    return PQconnectdb( this->getConnInfo());
}