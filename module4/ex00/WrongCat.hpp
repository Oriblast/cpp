#pragma once
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
    protected:
    std::string _type;

    public:
    WrongCat();
    WrongCat(WrongCat const &animal);
    virtual ~WrongCat();
    WrongCat &operator=(WrongCat const &animal);

    void makeSound(void) const;
    std::string getType() const;
};
