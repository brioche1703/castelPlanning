#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_ajouterAffaire_clicked()
{
    // Ouvrir en perdant l'acces a la premiere fenetre
    m_ajouterAffaireWindow = new ajouterAffaireWindow(this);
    m_ajouterAffaireWindow->setModal(true);
    m_ajouterAffaireWindow->exec();

    // Ouvrir en gardant acces a la premiere fenetre
//    m_ajouterAffaireWindow = new ajouterAffaireWindow(this);
//    m_ajouterAffaireWindow->show();
}
