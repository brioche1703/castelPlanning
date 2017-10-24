#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ajouteraffairewindow.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_ajouterAffaire_clicked();

private:
    Ui::MainWindow *ui;

    // Windows
    ajouterAffaireWindow *m_ajouterAffaireWindow;
};

#endif // MAINWINDOW_H
