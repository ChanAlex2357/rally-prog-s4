CREATE TABLE Rally (
    id_rally Serial PRIMARY KEY,
    nom_rally VARCHAR(50),
    date_rally DATE
);

CREATE TABLE CategoryPilote (
    id_categorie Serial PRIMARY KEY,
    nom_category VARCHAR(50)
);

CREATE TABLE Pilote (
    id_pilote Serial PRIMARY KEY,
    nom_pilote VARCHAR(50),
    id_categorie INT,
    FOREIGN KEY (id_categorie) REFERENCES CategoryPilote(id_categorie)
);

CREATE TABLE Specials (
    id_special Serial PRIMARY KEY,
    tire_special VARCHAR(50),
    distance decimal(10,2)
);
CREATE TABLE Chrono (
    id_chrono serial PRIMARY KEY,
    id_rally INT,
    id_special INT,
    id_pilote INT,
    temps Interval,
    FOREIGN KEY (id_special) REFERENCES Specials(id_special),
    FOREIGN KEY (id_pilote) REFERENCES Pilote(id_pilote)
);

CREATE TABLE TypePoint (
    id_type_point Serial PRIMARY KEY,
    nom_type VARCHAR(50)
);

Create TABLE Point (
    id_type_point int,
    rang int,
    valeur int,
    FOREIGN KEY(id_type_point) REFERENCES TypePoint(id_type_point)
);


-- View pour les pilotes et leur category
Create or replace view v_pilote_category as
select pilote.* , CategoryPilote.nom_category
from pilote
join CategoryPilote on CategoryPilote.id_categorie = pilote.id_categorie;


-- general points
create or replace view v_ranked_point as 
select point.* from point where id_type_point=1;
-- category points
create or replace view v_category_point as 
select point.* from point where id_type_point=2;

-- View pour recuperer le temps pour chaque rally
-- Classement General sans les points
    create or replace view v_rally_general_ranked as
    SELECT  id_rally,
            v_pilote_category.id_Pilote AS id_pilote, 
            v_pilote_category.nom_pilote AS nom_pilote , 
            v_pilote_category.id_categorie AS id_category, 
            v_pilote_category.nom_category AS nom_category,
            SUM(temps) AS temps,
            ROW_NUMBER() OVER (PARTITION BY id_rally ORDER BY SUM(temps)) AS rang
    FROM chrono 
    join v_pilote_category as v_pilote_category on chrono.id_pilote = v_pilote_category.id_pilote
    GROUP BY    v_pilote_category.id_pilote ,
                id_rally , 
                v_pilote_category.nom_pilote , 
                v_pilote_category.id_categorie, 
                v_pilote_category.nom_category
    ORDER BY id_rally ,temps ASC;

-- Classement par categorie
    create or replace view v_rally_category_ranked as
    SELECT  id_rally,
            v_pilote_category.id_Pilote AS id_pilote, 
            v_pilote_category.nom_pilote AS nom_pilote , 
            v_pilote_category.id_categorie AS id_category, 
            v_pilote_category.nom_category AS nom_category,
            SUM(temps) AS temps,
            ROW_NUMBER() OVER (PARTITION BY id_rally , nom_category ORDER BY SUM(temps)) AS rang
    FROM chrono 
    join v_pilote_category as v_pilote_category on chrono.id_pilote = v_pilote_category.id_pilote
    GROUP BY    v_pilote_category.id_pilote ,
                id_rally ,
                v_pilote_category.nom_pilote , 
                v_pilote_category.id_categorie, 
                v_pilote_category.nom_category
    ORDER BY id_rally ,temps ASC;


-- Classement avec point gagne
    CREATE or replace view v_rally_general_ranked_points as
    select v_rally_general_ranked.* , COALESCE(point.valeur,0) as points
    from v_rally_general_ranked
    left join v_ranked_point as point on point.rang = v_rally_general_ranked.rang;

-- Classement category avec points
    CREATE or replace view v_rally_category_ranked_points as
    select v_rally_category_ranked.* , COALESCE(point.valeur,0) as points
    from v_rally_category_ranked
    left join v_category_point as point on point.rang = v_rally_category_ranked.rang;


-- Rally Wins
    Create or replace view v_rally_wins as
    select v_grp.id_pilote , count(distinct v_grp.id_rally) as wins
    from v_rally_general_ranked as v_grp
    where rang = 1
    group by v_grp.id_pilote;

-- Classement avec le nombre de rally gagner
    create or replace view v_pre_final_rank as
    select  v_grp.id_pilote,
            v_grp.nom_pilote,
            v_grp.nom_category,
            sum(v_grp.temps) as temps_total,
            sum(v_grp.points) as points
    from v_rally_general_ranked_points as v_grp
    group by v_grp.id_pilote,v_grp.nom_pilote,v_grp.nom_category;

    create or replace view v_final_rank as
    select  v_pfr.* ,
            COALESCE(v_rw.wins, 0) AS rally_gagner,
            ROW_NUMBER() OVER (ORDER BY v_pfr.temps_total, COALESCE(v_rw.wins, 0) DESC) AS final_rank
    from v_pre_final_rank as v_pfr
    left join v_rally_wins as v_rw on v_rw.id_pilote =  v_pfr.id_pilote;