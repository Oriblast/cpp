#pragma once

#include <iostream>

class Animal {
    protected:
    std::string _type;

    public:
    Animal();
    Animal(std::string const &type);
    Animal(Animal const &animal);
    virtual ~Animal();
    Animal &operator=(Animal const &animal);

    virtual void makeSound(void) const = 0;
    std::string getType() const;
};
