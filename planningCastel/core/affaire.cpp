#include <iostream>

#include "affaire.h"

Affaire::Affaire()
{

}

Affaire::Affaire(unsigned int id, QString nom, QString marquage, EtatAffaire etat, unsigned int departement,
                 TypeAffaire type, QString observations, unsigned int total_poids, unsigned int total_heures)
{
    this->m_id = id;
    this->m_nom = nom;
    this->m_marquage = marquage;
    this->m_etat = etat;
    this->m_departement = departement;
    this->m_type = type;
    this->m_observations = observations;
    this->m_total_poids = total_poids;
    this->m_total_heures = total_heures;
}


void Affaire::print()
{
    std::cout << "Affaire " << m_id << ":" << std::endl;
    std::cout << "Nom : " << m_nom.toStdString() << std::endl;
    if (m_etat == EN_COURS)
        std::cout << "Etat : En cours" << std::endl;
    else
        std::cout << "Etat : Terminé" << std::endl;
    std::cout << m_observations.toStdString() << std::endl;
}
