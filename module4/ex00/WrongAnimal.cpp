#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal () : _type("WrongAnimal") {
    std::cout << "construction de WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal (std::string type) : _type(type) {
    std::cout << " type construction de WrongAnimal :" << type << std::endl;
}

WrongAnimal::~WrongAnimal () {
    std::cout << "destruction de WrongAnimal" << std::endl;
}

    WrongAnimal::WrongAnimal (WrongAnimal const &animal)
    {
        this->_type = animal._type;
        std::cout << "Cat : copy constructor called" << std::endl;
    }

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &WrongAnimal)
{
    this->_type = WrongAnimal._type;
    return (*this);
}

void WrongAnimal::makeSound() const
{
    std::cout << "pas de son" << std::endl;
}

    std::string WrongAnimal::getType(void) const
    {
        return (this->_type);
    }