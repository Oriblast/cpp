#pragma once
#include "Dog.hpp"
#include "Animal.hpp"
#include <iostream>

class Dog : public Animal {
    protected:
    std::string _type;

    public:
    Dog();
    Dog(Dog const &animal);
    virtual ~Dog();
    Dog &operator=(Dog const &animal);

    virtual void makeSound(void) const;
};
