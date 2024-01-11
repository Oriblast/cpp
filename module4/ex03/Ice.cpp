#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {

}

Ice::~Ice() {

}

Ice::Ice(Ice const &ice) : AMateria(ice) {

}

Ice &Ice::operator=(Ice const &ice)
{
    (void)ice;
    return (*this);
}

AMateria *Ice::clone() const
{
    return (new Ice());
}

void    Ice::use(ICharacter& target)
{
    (void)target;
    std::cout  << "* shoots an ice bolt at" << target.getName()  << " *" << std::endl;
}