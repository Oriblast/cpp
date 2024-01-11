#pragma once

#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
    protected:
    Brain *_brain;
    std::string _type;

    public:
    Cat();
    Cat(std::string const &type);
    Cat(Cat const &cat);
    virtual ~Cat();
    Cat &operator=(Cat const &animal);

    virtual std::string getide(int i) const;
    virtual void makeSound(void) const;
};
