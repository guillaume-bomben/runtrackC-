#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {
private:
    std::string nom;
    int numero;

public:
    Contact(const std::string& nom, int numero) : nom(nom), numero(numero) {}

    Contact(const Contact& autre) : nom(autre.nom), numero(autre.numero) {}

    void setNumero(int nouveauNumero) {
        numero = nouveauNumero;
    }

    void afficherInfos() const {
        std::cout << "Nom: " << nom << ", Numéro de téléphone: " << numero << std::endl;
    }
};

#endif 
