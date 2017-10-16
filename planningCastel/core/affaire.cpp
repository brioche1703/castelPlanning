#include <iostream>

#include "affaire.h"

Affaire::Affaire()
{

}

Affaire::Affaire(unsigned int id, QString nom, Etat etat)
{
    this->m_id = id;
    this->m_nom = nom;
    this->m_etat = etat;
}

void Affaire::print()
{
    std::cout << "Affaire " << m_id << ":" << std::endl;
    std::cout << "Nom : " << m_nom.toStdString() << std::endl;
    if (m_etat == EN_COURS)
        std::cout << "Etat : En cours" << std::endl;
    else
        std::cout << "Etat : Terminé" << std::endl;
}
