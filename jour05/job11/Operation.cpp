#include "Operation.hpp"
#include <iostream>
#include <stdexcept>

Operation::Operation(double val) : valeur(val) {}

Operation Operation::operator+(const Operation& other) const {
    return Operation(this->valeur + other.valeur);
}

Operation Operation::operator-(const Operation& other) const {
    return Operation(this->valeur - other.valeur);
}

Operation Operation::operator*(const Operation& other) const {
    return Operation(this->valeur * other.valeur);
}

Operation Operation::operator/(const Operation& other) const {
    if (other.valeur != 0) {
        return Operation(this->valeur / other.valeur);
    } else {
        throw std::invalid_argument("Division par zéro");
    }
}

void Operation::afficher() const {
    std::cout << "Valeur : " << valeur << std::endl;
}
