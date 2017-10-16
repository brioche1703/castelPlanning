#ifndef AFFAIRE_H
#define AFFAIRE_H

#include <QString>

enum Etat {
    EN_COURS,
    TERMINE,
};

class Affaire
{
public:
    Affaire();
    ~Affaire();

    Affaire(unsigned int id, QString nom, Etat etat);

private:

    unsigned int m_id;
    QString m_nom;
    Etat m_etat;

public :

    void print();

};

#endif // AFFAIRE_H
