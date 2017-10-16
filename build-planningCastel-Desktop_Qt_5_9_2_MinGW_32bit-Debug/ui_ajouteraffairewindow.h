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
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ajouterAffaireWindow
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;

    void setupUi(QDialog *ajouterAffaireWindow)
    {
        if (ajouterAffaireWindow->objectName().isEmpty())
            ajouterAffaireWindow->setObjectName(QStringLiteral("ajouterAffaireWindow"));
        ajouterAffaireWindow->resize(431, 573);
        pushButton = new QPushButton(ajouterAffaireWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(250, 530, 75, 23));
        pushButton_2 = new QPushButton(ajouterAffaireWindow);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(340, 530, 75, 23));
        label = new QLabel(ajouterAffaireWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 190, 181, 121));

        retranslateUi(ajouterAffaireWindow);

        QMetaObject::connectSlotsByName(ajouterAffaireWindow);
    } // setupUi

    void retranslateUi(QDialog *ajouterAffaireWindow)
    {
        ajouterAffaireWindow->setWindowTitle(QApplication::translate("ajouterAffaireWindow", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ajouterAffaireWindow", "Ok", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("ajouterAffaireWindow", "Annuler", Q_NULLPTR));
        label->setText(QApplication::translate("ajouterAffaireWindow", "Git marche toujours!?", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ajouterAffaireWindow: public Ui_ajouterAffaireWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTERAFFAIREWINDOW_H
