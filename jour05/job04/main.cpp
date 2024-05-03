#include <iostream>
#include "Joueur.hpp"

int main() {
    Joueur joueur1; 
    Joueur joueur2(3, 4); 
    Joueur joueur3(7, 2, "Alice"); 
    joueur1.afficherPosition();
    joueur2.afficherPosition();
    joueur3.afficherPosition();
    return 0;
}
