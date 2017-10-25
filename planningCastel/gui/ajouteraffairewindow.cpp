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
    this->close();
}


void ajouterAffaireWindow::on_pushButton_annuler_clicked()
{
    this->close();
}
