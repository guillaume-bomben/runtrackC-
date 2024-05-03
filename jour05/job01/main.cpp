#include <iostream>
#include "Joueur.hpp"

int main() {
    Joueur joueur;
    joueur.afficherPosition();
    joueur.deplacer(3, 2);
    joueur.afficherPosition();
    joueur.setPosition(10, 5);
    joueur.afficherPosition();
    return 0;
}
