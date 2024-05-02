#include <iostream>

int main() {
    int entier = 17;
    float flottant = 3.14;
    double reel = 123.345;
    const char* caractere = "La Plateforme";
    std::cout << "Adresse memoire de la variable 'entier' : " << &entier << ", Valeur : " << entier << std::endl;
    std::cout << "Adresse memoire de la variable 'flottant' : " << &flottant << ", Valeur : " << flottant << std::endl;
    std::cout << "Adresse memoire de la variable 'reel' : " << &reel << ", Valeur : " << reel << std::endl;
    std::cout << "Adresse memoire de la variable 'caractere' : " << (void*)&caractere << ", Valeur : " << caractere << std::endl;
    return 0;
}
