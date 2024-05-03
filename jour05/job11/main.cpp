#include <iostream>
#include "Operation.cpp"

int main() {
    // Exemple d'utilisation de la classe Operation
    Operation a(5);
    Operation b(3);

    // Addition
    Operation resultat_addition = a + b;
    std::cout << "Addition : ";
    resultat_addition.afficher(); // Output: 8

    // Soustraction
    Operation resultat_soustraction = a - b;
    std::cout << "Soustraction : ";
    resultat_soustraction.afficher(); // Output: 2

    // Multiplication
    Operation resultat_multiplication = a * b;
    std::cout << "Multiplication : ";
    resultat_multiplication.afficher(); // Output: 15

    // Division
    try {
        Operation resultat_division = a / b;
        std::cout << "Division : ";
        resultat_division.afficher(); // Output: 1.66667
    } catch(const std::invalid_argument& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
