#include <iostream>
#include "Personne.hpp"

int main() {
    Personne personnage1("Alice", 100, 10.5);
    Personne personnage2("Bob", 120, 8.0);

    std::cout << "Informations du personnage 1 : " << std::endl;
    personnage1.afficherInformations();

    std::cout << std::endl;

    std::cout << "Informations du personnage 2 : " << std::endl;
    personnage2.afficherInformations();

    personnage1.setNom("Carol");
    personnage1.setPointsDeVie(90);
    personnage1.setDefense(12.0);

    std::cout << std::endl;
    std::cout << "Informations du personnage 1 après modification : " << std::endl;
    personnage1.afficherInformations();

    return 0;
}
