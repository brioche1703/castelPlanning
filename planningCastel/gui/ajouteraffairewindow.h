#ifndef AJOUTERAFFAIREWINDOW_H
#define AJOUTERAFFAIREWINDOW_H

#include <QDialog>

#include "core/affaire.h"

namespace Ui {
class ajouterAffaireWindow;
}

class ajouterAffaireWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ajouterAffaireWindow(QWidget *parent = 0);
    ~ajouterAffaireWindow();

private slots:

    void on_pushButton_ok_clicked();

    void on_pushButton_annuler_clicked();

private:
    Ui::ajouterAffaireWindow *ui;
};

#endif // AJOUTERAFFAIREWINDOW_H
