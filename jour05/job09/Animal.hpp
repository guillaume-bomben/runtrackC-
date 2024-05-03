#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
private:
    static int totalAnimaux;

public:
    Animal() {
        totalAnimaux++;
    }

    virtual ~Animal() {
        totalAnimaux--;
    }

    static int getTotalAnimaux() {
        return totalAnimaux;
    }

    virtual void crier() const = 0;
    virtual void manger() const = 0;
};

int Animal::totalAnimaux = 0;

#endif

