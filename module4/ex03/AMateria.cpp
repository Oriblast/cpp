#include "AMateria.hpp"

AMateria::AMateria() : _type("zero") {

}

AMateria::AMateria(AMateria const &materia) {
    this->_type = materia._type;
}

AMateria::AMateria(std::string const & type)
{
    this->_type = type;
}

AMateria::~AMateria() {

}

AMateria &AMateria::operator=(AMateria const &materia) {
     this->_type = materia._type;
    return (*this);
}

std::string const &AMateria::getType(void) const
{
    return (this->_type);
}

void    AMateria::use(ICharacter& target)
{
    (void)target;
    std::cout  << this->_type << "* matetia used *" << std::endl;
}