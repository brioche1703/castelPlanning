#ifndef AJOUTERAFFAIREWINDOW_H
#define AJOUTERAFFAIREWINDOW_H

#include <QDialog>

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
    void on_pushButton_clicked();

private:
    Ui::ajouterAffaireWindow *ui;
};

#endif // AJOUTERAFFAIREWINDOW_H
