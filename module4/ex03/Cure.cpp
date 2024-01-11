#include "Cure.hpp"
    
Cure::Cure() : AMateria("cure") {

}

Cure::~Cure() {

}

Cure::Cure(Cure const &cure) : AMateria(cure) {

}

Cure &Cure::operator=(Cure const &cure)
{
    (void)cure;
    return (*this);
}

AMateria *Cure::clone() const
{
    return (new Cure());
}

void    Cure::use(ICharacter& target)
{
    (void)target;
    std::cout  << "* heals "<< target.getName() << " 's wounds *" << std::endl;
}