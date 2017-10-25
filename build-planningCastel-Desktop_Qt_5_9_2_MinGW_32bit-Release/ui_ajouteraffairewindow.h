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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ajouterAffaireWindow
{
public:
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QFormLayout *formLayout;
    QLabel *QLineEdit_id_2;
    QLineEdit *QLineEdit_id;
    QLabel *QLineEdit_nom_2;
    QLineEdit *QLineEdit_nom;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *ajouterAffaireWindow)
    {
        if (ajouterAffaireWindow->objectName().isEmpty())
            ajouterAffaireWindow->setObjectName(QStringLiteral("ajouterAffaireWindow"));
        ajouterAffaireWindow->resize(499, 544);
        verticalLayout_3 = new QVBoxLayout(ajouterAffaireWindow);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label = new QLabel(ajouterAffaireWindow);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_3->addWidget(label);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        QLineEdit_id_2 = new QLabel(ajouterAffaireWindow);
        QLineEdit_id_2->setObjectName(QStringLiteral("QLineEdit_id_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, QLineEdit_id_2);

        QLineEdit_id = new QLineEdit(ajouterAffaireWindow);
        QLineEdit_id->setObjectName(QStringLiteral("QLineEdit_id"));

        formLayout->setWidget(0, QFormLayout::FieldRole, QLineEdit_id);

        QLineEdit_nom_2 = new QLabel(ajouterAffaireWindow);
        QLineEdit_nom_2->setObjectName(QStringLiteral("QLineEdit_nom_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, QLineEdit_nom_2);

        QLineEdit_nom = new QLineEdit(ajouterAffaireWindow);
        QLineEdit_nom->setObjectName(QStringLiteral("QLineEdit_nom"));

        formLayout->setWidget(1, QFormLayout::FieldRole, QLineEdit_nom);


        verticalLayout_3->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        retranslateUi(ajouterAffaireWindow);

        QMetaObject::connectSlotsByName(ajouterAffaireWindow);
    } // setupUi

    void retranslateUi(QDialog *ajouterAffaireWindow)
    {
        ajouterAffaireWindow->setWindowTitle(QApplication::translate("ajouterAffaireWindow", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("ajouterAffaireWindow", "Ajouter affaire :", Q_NULLPTR));
        QLineEdit_id_2->setText(QApplication::translate("ajouterAffaireWindow", "Num\303\251ro :", Q_NULLPTR));
        QLineEdit_nom_2->setText(QApplication::translate("ajouterAffaireWindow", "Nom :", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ajouterAffaireWindow: public Ui_ajouterAffaireWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTERAFFAIREWINDOW_H
