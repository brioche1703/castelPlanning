#ifndef AFFAIRE_H
#define AFFAIRE_H

#include <QString>

enum EtatAffaire
{
    EN_COURS,
    TERMINE,
};

enum TypeAffaire
{
    CL,
    EX,
}

enum SousTraitanceAffaire
{
    NONE,
    ST,
    MT,
}

class Affaire
{
public:
    Affaire();
    ~Affaire();

    Affaire(unsigned int id, QString nom, QString marquage, EtatAffaire etat, unsigned int m_departement,
        TypeAffaire m_type, QString m_observations, unsigned int m_total_poids, unsigned int m_total_heures);

private:

    unsigned int m_id;
    QString m_nom;
    QString m_marquage;
    EtatAffaire m_etat;
    unsigned int m_departement;
    TypeAffaire m_type;
    QString m_observations;
    unsigned int m_total_poids;
    unsigned int m_total_heures;

public :

    void print();

};

#endif // AFFAIRE_H
