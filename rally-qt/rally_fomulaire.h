#ifndef RALLY_FOMULAIRE_H
#define RALLY_FOMULAIRE_H

#include <QFrame>

namespace Ui {
class rally_formulaire;
}

class fomulaire : public QFrame
{
    Q_OBJECT

public:
    explicit fomulaire(QWidget *parent = nullptr);
    ~fomulaire();

private slots:
    void on_submit_button_clicked();

private:
    Ui::rally_formulaire *ui;
};

#endif // RALLY_FOMULAIRE_H
