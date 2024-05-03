#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
public:
    virtual void crier() const = 0;
    virtual void manger() const = 0;
};

#endif
