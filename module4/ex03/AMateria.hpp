#pragma once

#include <iostream>
#include "ICharactere.hpp"

class ICharacter ;

class AMateria
{
public:
std::string _type;
public:
AMateria(std::string const & type);
AMateria();
~AMateria();
AMateria(AMateria const &materia);
AMateria &operator=(AMateria const &materia);

std::string const & getType() const; //Returns the materia type
virtual AMateria* clone() const = 0;
virtual void use(ICharacter& target);
};