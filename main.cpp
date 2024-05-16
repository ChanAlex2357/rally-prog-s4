#include <iostream>
#include <jdbc/mysql_connection.h>
#include <jdbc/cppconn/driver.h>
#include <jdbc/cppconn/connection.h>
#include <jdbc/cppconn/statement.h>
#include <jdbc/cppconn/resultset.h>
int main() {
    // Création d'un objet de pilote MySQL
    sql::Driver *driver;
    driver = get_driver_instance();

    // Connexion à la base de données
    sql::Connection *con;
    con = driver->connect("tcp://127.0.0.1:3306", "root", "jca");

    // Sélection de la base de données
    con->setSchema("Helicoptere");

    // Exécution d'une requête SQL
    sql::Statement *stmt;
    sql::ResultSet *res;
    stmt = con->createStatement();
    res = stmt->executeQuery("SELECT * FROM Obstacle");

    // Parcourir et afficher les résultat

    // Libération des ressources
    delete res;
    delete stmt;
    delete con;

    return 0;
}
