#include <iostream>

int main() {
    int tableau[5] = {10, 20, 30, 40, 50};
    std::cout << "Adresses et valeurs des elements du tableau :" << std::endl;
    for (size_t i = 0; i < 5; ++i) {
        std::cout << "Adresse de l'element " << i << " : " << &tableau[i] << ", Valeur : " << tableau[i] << std::endl;
    }
    return 0;
}
