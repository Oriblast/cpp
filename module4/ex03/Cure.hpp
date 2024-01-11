#pragma once

#include "AMateria.hpp"

class Cure : public AMateria {
    public:
    Cure();
    ~Cure();
    Cure(Cure const &cure);
    Cure &operator=(Cure const &cure);

    virtual AMateria* clone() const;
    virtual void use(ICharacter& target);
};