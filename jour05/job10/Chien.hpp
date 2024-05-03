#ifndef CHIEN_HPP
#define CHIEN_HPP

#include "Animal.hpp"

class Chien : public Animal {
public:
    Chien() : Animal() {}

    void crier() const override {
        std::cout << "Woof!" << std::endl;
    }

    void manger(const std::string& aliment) const override {
        std::cout << "Le chien mange " << aliment << "." << std::endl;
    }

};

#endif
