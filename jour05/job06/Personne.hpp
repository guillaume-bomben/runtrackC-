#ifndef PERSONNE_HPP
#define PERSONNE_HPP

#include <iostream>
#include <string>

class Personne {
private:
    std::string nom;
    int pointsDeVie;
    float defense;

public:
    // Constructeur avec une liste d'initialisation
    Personne(const std::string& nom, int pointsDeVie, float defense)
        : nom(nom), pointsDeVie(pointsDeVie), defense(defense) {}

    // Méthode pour afficher les informations du personnage
    void afficherInformations() const {
        std::cout << "Nom: " << nom << std::endl;
        std::cout << "Points de vie: " << pointsDeVie << std::endl;
        std::cout << "Defense: " << defense << std::endl;
    }

    void setNom(const std::string& nouveauNom) {
        nom = nouveauNom;
    }

    void setPointsDeVie(int nouveauxPointsDeVie) {
        pointsDeVie = nouveauxPointsDeVie;
    }

    void setDefense(float nouvelleDefense) {
        defense = nouvelleDefense;
    }

    std::string getNom() const {
        return nom;
    }

    int getPointsDeVie() const {
        return pointsDeVie;
    }

    float getDefense() const {
        return defense;
    }
};

#endif
