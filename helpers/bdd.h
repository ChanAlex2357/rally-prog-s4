#ifndef     BDD_H
#define     BDD_H
#include <postgresql/libpq-fe.h>

class Bdd
{
private:
    // Info de connexion , par default la base de donnee est postgres postgres 
    char * connInfo = "dbname=postgres";
public:
    Bdd();
    Bdd(char * connInfo);

    char * getConnInfo() const;

    void setConnInfo(char * connInfo);

    PGconn * getConn();
};
#endif