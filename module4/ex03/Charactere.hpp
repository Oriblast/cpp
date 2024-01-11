#pragma once

#include "ICharactere.hpp"

class Character : public ICharacter {
    protected:
    std::string _name;
    int _nbrItem;
    AMateria *tab[4];

    public:
    Character();
    ~Character();
    Character(Character const &character);
    Character &operator=(Character const &character);

    Character(std::string name);
    virtual std::string const   &getName() const;
    virtual void                equip(AMateria* m);
    virtual void                unequip(int idx);
    virtual void                use(int idx, ICharacter& target);
    virtual AMateria            *get_Materia(unsigned int idx) const;
};
