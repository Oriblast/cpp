#include "Cat.hpp"

Cat::Cat () : Animal("Cat"), _type("Cat") {
    std::cout << "construction de Cat" << std::endl;
}

Cat::~Cat () {
    std::cout << "destruction de Cat" << std::endl;
}

Cat::Cat (Cat const &cat) : Animal(cat) {
    std::cout << "Cat : copy constructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &Cat)
{
    this->_type = Cat._type;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "miaou miaou" << std::endl;
}
