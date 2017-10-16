/********************************************************************************
** Form generated from reading UI file 'ajouteraffairewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTERAFFAIREWINDOW_H
#define UI_AJOUTERAFFAIREWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ajouterAffaireWindow
{
public:
    QPushButton *pushButton_ok;
    QPushButton *pushButton_annuler;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_id;
    QLineEdit *lineEdit_nom;
    QComboBox *comboBox_etat;

    void setupUi(QDialog *ajouterAffaireWindow)
    {
        if (ajouterAffaireWindow->objectName().isEmpty())
            ajouterAffaireWindow->setObjectName(QStringLiteral("ajouterAffaireWindow"));
        ajouterAffaireWindow->resize(431, 573);
        pushButton_ok = new QPushButton(ajouterAffaireWindow);
        pushButton_ok->setObjectName(QStringLiteral("pushButton_ok"));
        pushButton_ok->setGeometry(QRect(250, 530, 75, 23));
        pushButton_annuler = new QPushButton(ajouterAffaireWindow);
        pushButton_annuler->setObjectName(QStringLiteral("pushButton_annuler"));
        pushButton_annuler->setGeometry(QRect(340, 530, 75, 23));
        label = new QLabel(ajouterAffaireWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 10, 321, 21));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(ajouterAffaireWindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 60, 55, 16));
        label_3 = new QLabel(ajouterAffaireWindow);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 100, 55, 16));
        label_4 = new QLabel(ajouterAffaireWindow);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 150, 55, 16));
        lineEdit_id = new QLineEdit(ajouterAffaireWindow);
        lineEdit_id->setObjectName(QStringLiteral("lineEdit_id"));
        lineEdit_id->setGeometry(QRect(70, 60, 113, 22));
        lineEdit_nom = new QLineEdit(ajouterAffaireWindow);
        lineEdit_nom->setObjectName(QStringLiteral("lineEdit_nom"));
        lineEdit_nom->setGeometry(QRect(70, 100, 113, 22));
        comboBox_etat = new QComboBox(ajouterAffaireWindow);
        comboBox_etat->setObjectName(QStringLiteral("comboBox_etat"));
        comboBox_etat->setGeometry(QRect(70, 150, 111, 22));

        retranslateUi(ajouterAffaireWindow);

        QMetaObject::connectSlotsByName(ajouterAffaireWindow);
    } // setupUi

    void retranslateUi(QDialog *ajouterAffaireWindow)
    {
        ajouterAffaireWindow->setWindowTitle(QApplication::translate("ajouterAffaireWindow", "Dialog", Q_NULLPTR));
        pushButton_ok->setText(QApplication::translate("ajouterAffaireWindow", "Ok", Q_NULLPTR));
        pushButton_annuler->setText(QApplication::translate("ajouterAffaireWindow", "Annuler", Q_NULLPTR));
        label->setText(QApplication::translate("ajouterAffaireWindow", "Ajouter une affaire", Q_NULLPTR));
        label_2->setText(QApplication::translate("ajouterAffaireWindow", "N\302\260 :", Q_NULLPTR));
        label_3->setText(QApplication::translate("ajouterAffaireWindow", "Nom :", Q_NULLPTR));
        label_4->setText(QApplication::translate("ajouterAffaireWindow", "Etat :", Q_NULLPTR));
        comboBox_etat->clear();
        comboBox_etat->insertItems(0, QStringList()
         << QApplication::translate("ajouterAffaireWindow", "En cours", Q_NULLPTR)
         << QApplication::translate("ajouterAffaireWindow", "Termin\303\251", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class ajouterAffaireWindow: public Ui_ajouterAffaireWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTERAFFAIREWINDOW_H
