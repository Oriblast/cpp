#pragma once

#include "AMateria.hpp"

class Ice : public AMateria {
    public:
    Ice();
    ~Ice();
    Ice(Ice const &ice);
    Ice &operator=(Ice const &ice);

    virtual AMateria* clone() const;
    virtual void use(ICharacter& target);
};