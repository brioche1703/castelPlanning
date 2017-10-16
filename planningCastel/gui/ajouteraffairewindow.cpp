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
    Affaire *affaire1 = new Affaire(ui->lineEdit_id->text().toInt(), ui->lineEdit_nom->text(), Etat(ui->comboBox_etat->currentIndex()));
    affaire1->print();
    this->close();
}


void ajouterAffaireWindow::on_pushButton_annuler_clicked()
{
    this->close();
}
