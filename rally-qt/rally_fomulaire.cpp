#include "rally_fomulaire.h"
#include "ui_rally_fomulaire.h"
#include "rally.h"

fomulaire::fomulaire(QWidget *parent)
    : QFrame(parent)
    , ui(new Ui::rally_formulaire)
{
    ui->setupUi(this);
}

fomulaire::~fomulaire()
{
    delete ui;
}

void fomulaire::on_submit_button_clicked()
{
    // Recuperer le nom
    std::string nom = ui->nom_input->text().toStdString();
    // Cree un nouveau objet rally
    Rally* rally = new Rally(0,nom);
    // sauvegarder le rally
    rally->save();
}

