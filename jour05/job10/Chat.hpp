#ifndef CHAT_HPP
#define CHAT_HPP

#include "Animal.hpp"

class Chat : public Animal {
public:
    Chat() : Animal() {}

    void crier() const override {
        std::cout << "Miaou!" << std::endl;
    }

    void manger(const std::string& aliment) const override {
        std::cout << "Le chat mange " << aliment << "." << std::endl;
    }
};

#endif
