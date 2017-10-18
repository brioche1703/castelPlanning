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
#include <QtWidgets/QTextEdit>

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
    QLabel *label_5;
    QLineEdit *lineEdit_marquage;
    QLabel *label_6;
    QLineEdit *lineEdit_departement;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QComboBox *comboBox_type;
    QTextEdit *textEdit_observations;
    QLabel *label_10;
    QLineEdit *lineEdit_total_poids;
    QLineEdit *lineEdit_total_heures;

    void setupUi(QDialog *ajouterAffaireWindow)
    {
        if (ajouterAffaireWindow->objectName().isEmpty())
            ajouterAffaireWindow->setObjectName(QStringLiteral("ajouterAffaireWindow"));
        ajouterAffaireWindow->resize(533, 677);
        pushButton_ok = new QPushButton(ajouterAffaireWindow);
        pushButton_ok->setObjectName(QStringLiteral("pushButton_ok"));
        pushButton_ok->setGeometry(QRect(350, 640, 75, 23));
        pushButton_annuler = new QPushButton(ajouterAffaireWindow);
        pushButton_annuler->setObjectName(QStringLiteral("pushButton_annuler"));
        pushButton_annuler->setGeometry(QRect(440, 640, 75, 23));
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
        label_4->setGeometry(QRect(20, 170, 55, 16));
        lineEdit_id = new QLineEdit(ajouterAffaireWindow);
        lineEdit_id->setObjectName(QStringLiteral("lineEdit_id"));
        lineEdit_id->setGeometry(QRect(90, 60, 351, 22));
        lineEdit_nom = new QLineEdit(ajouterAffaireWindow);
        lineEdit_nom->setObjectName(QStringLiteral("lineEdit_nom"));
        lineEdit_nom->setGeometry(QRect(90, 100, 351, 22));
        comboBox_etat = new QComboBox(ajouterAffaireWindow);
        comboBox_etat->setObjectName(QStringLiteral("comboBox_etat"));
        comboBox_etat->setGeometry(QRect(70, 170, 111, 22));
        label_5 = new QLabel(ajouterAffaireWindow);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 140, 55, 16));
        lineEdit_marquage = new QLineEdit(ajouterAffaireWindow);
        lineEdit_marquage->setObjectName(QStringLiteral("lineEdit_marquage"));
        lineEdit_marquage->setGeometry(QRect(90, 140, 351, 22));
        label_6 = new QLabel(ajouterAffaireWindow);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 210, 91, 16));
        lineEdit_departement = new QLineEdit(ajouterAffaireWindow);
        lineEdit_departement->setObjectName(QStringLiteral("lineEdit_departement"));
        lineEdit_departement->setGeometry(QRect(90, 210, 351, 22));
        label_7 = new QLabel(ajouterAffaireWindow);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 250, 91, 16));
        label_8 = new QLabel(ajouterAffaireWindow);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 290, 91, 16));
        label_9 = new QLabel(ajouterAffaireWindow);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 480, 91, 16));
        comboBox_type = new QComboBox(ajouterAffaireWindow);
        comboBox_type->setObjectName(QStringLiteral("comboBox_type"));
        comboBox_type->setGeometry(QRect(70, 250, 111, 22));
        textEdit_observations = new QTextEdit(ajouterAffaireWindow);
        textEdit_observations->setObjectName(QStringLiteral("textEdit_observations"));
        textEdit_observations->setGeometry(QRect(100, 290, 401, 141));
        label_10 = new QLabel(ajouterAffaireWindow);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 520, 91, 16));
        lineEdit_total_poids = new QLineEdit(ajouterAffaireWindow);
        lineEdit_total_poids->setObjectName(QStringLiteral("lineEdit_total_poids"));
        lineEdit_total_poids->setGeometry(QRect(90, 480, 351, 22));
        lineEdit_total_heures = new QLineEdit(ajouterAffaireWindow);
        lineEdit_total_heures->setObjectName(QStringLiteral("lineEdit_total_heures"));
        lineEdit_total_heures->setGeometry(QRect(90, 520, 351, 22));

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
        label_5->setText(QApplication::translate("ajouterAffaireWindow", "Marquage :", Q_NULLPTR));
        label_6->setText(QApplication::translate("ajouterAffaireWindow", "D\303\251partement :", Q_NULLPTR));
        label_7->setText(QApplication::translate("ajouterAffaireWindow", "Type :", Q_NULLPTR));
        label_8->setText(QApplication::translate("ajouterAffaireWindow", "Observation :", Q_NULLPTR));
        label_9->setText(QApplication::translate("ajouterAffaireWindow", "Poids total :", Q_NULLPTR));
        comboBox_type->clear();
        comboBox_type->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("ajouterAffaireWindow", "CL", Q_NULLPTR)
         << QApplication::translate("ajouterAffaireWindow", "EX", Q_NULLPTR)
         << QApplication::translate("ajouterAffaireWindow", "GP", Q_NULLPTR)
        );
        label_10->setText(QApplication::translate("ajouterAffaireWindow", "Heures totales :", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ajouterAffaireWindow: public Ui_ajouterAffaireWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTERAFFAIREWINDOW_H
