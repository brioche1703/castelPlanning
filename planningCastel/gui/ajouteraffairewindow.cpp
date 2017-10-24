#include "ajouteraffairewindow.h"
#include "ui_ajouteraffairewindow.h"

ajouterAffaireWindow::ajouterAffaireWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ajouterAffaireWindow)
{
    ui->setupUi(this);
}

ajouterAffaireWindow::~ajouterAffaireWindow()
{
    delete ui;
}

void ajouterAffaireWindow::on_pushButton_ok_clicked()
{
    unsigned int id = ui->lineEdit_id->text().toInt();
    QString nom = ui->lineEdit_nom->text();
    QString marquage = ui->lineEdit_marquage->text();
    EtatAffaire etat = EtatAffaire(ui->comboBox_etat->currentIndex());
    unsigned int departement = ui->lineEdit_departement->text().toInt();
    TypeAffaire type = TypeAffaire(ui->comboBox_type->currentIndex());
    QString observations = ui->textEdit_observations->toPlainText();
    unsigned int total_poids = ui->lineEdit_total_poids->text().toInt();
    unsigned int total_heures = ui->lineEdit_total_heures->text().toInt();

    Affaire *affaireEntered = new Affaire(id, nom, marquage, etat, departement,
                                           type, observations, total_poids, total_heures);
    affaireEntered->print();

    this->close();
}


void ajouterAffaireWindow::on_pushButton_annuler_clicked()
{
    this->close();
}
