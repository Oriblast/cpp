#pragma once

#include "Cat.hpp"
#include "Animal.hpp"

class Cat : public Animal {
    protected:
    std::string _type;

    public:
    Cat();
    Cat(std::string &type);
    Cat(Cat const &cat);
    virtual ~Cat();
    Cat &operator=(Cat const &animal);

    virtual void makeSound(void) const;
};
