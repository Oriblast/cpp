#include "Cat.hpp"

Cat::Cat () : Animal("Cat"), _brain(new Brain()) {
    std::cout << "construction de Cat" << std::endl;
}

Cat::~Cat () {
    delete _brain;
    std::cout << "destruction de Cat" << std::endl;
}

Cat::Cat (Cat const &cat) : Animal(cat), _brain(new Brain()){
    std::cout << "Cat : copy constructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &cat)
{
    *this->_brain = *cat._brain;
    this->_type = cat._type;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "miaou miaou" << std::endl;
}

std::string Cat::getide(int i) const
{
    return (_brain->getbr(i));
}
