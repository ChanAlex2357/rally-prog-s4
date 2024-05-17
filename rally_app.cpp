#include <iostream>
#include <postgresql/libpq-fe.h>

using namespace std;
int main() {
    const char  *connInfo;
    PGconn      *conn;
    // step1 : configuration de la connect string , par defaut : dbname=postgres
    connInfo =  "dbname=rally user=postgres password=jca";

    conn = PQconnectdb(connInfo);
    if (PQstatus(conn) != CONNECTION_OK)
    {
        printf("Connexion failed ! \n %s \n",PQerrorMessage(conn));
        PQfinish(conn);
        exit(1);   
    }

    cout << "HostPort : " << PQport(conn) << endl;
    cout << "ServerPath : " << PQhost(conn) << endl;
    cout << "Database : " << PQdb(conn) << endl;
    cout << "Login Id : " << PQuser(conn) << endl;
    cout << "Proc PID : " << PQbackendPID(conn) << endl;

             
    PQfinish(conn);
    return 0;
}
