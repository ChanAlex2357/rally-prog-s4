CREATE TABLE CategoryPilote (
    id_categorie INT AUTO_INCREMENT PRIMARY KEY,
    nom_category VARCHAR(50)
);

CREATE TABLE Pilote (
    id_pilote INT AUTO_INCREMENT PRIMARY KEY,
    nom_pilote VARCHAR(50),
    id_categorie INT,
    FOREIGN KEY (id_categorie) REFERENCES CategoryPilote(id_categorie)
);

CREATE TABLE Specials (
    id_special INT AUTO_INCREMENT PRIMARY KEY,
    id_rally INT,
    distance DOUBLE,
    FOREIGN KEY (id_rally) REFERENCES Rally(id_rally)
);
CREATE TABLE Chrono (
    id_special INT,
    id_pilote INT,
    temps DOUBLE,
    PRIMARY KEY (id_special, id_pilote),
    FOREIGN KEY (id_special) REFERENCES Specials(id_special),
    FOREIGN KEY (id_pilote) REFERENCES Pilote(id_pilote)
);
