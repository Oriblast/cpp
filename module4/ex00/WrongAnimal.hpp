#pragma once


#include <iostream>

class WrongAnimal {
    protected:
    std::string _type;

    public:
    WrongAnimal();
    WrongAnimal(std::string type);
    WrongAnimal(WrongAnimal const &animal);
    virtual ~WrongAnimal();
    WrongAnimal &operator=(WrongAnimal const &animal);

    void makeSound(void) const;
    std::string getType() const;
};
