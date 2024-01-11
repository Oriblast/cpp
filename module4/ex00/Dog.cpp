#include "Dog.hpp"

Dog::Dog () : Animal("Dog"), _type("Dog") {
    std::cout << "construction de Dog" << std::endl;
}

Dog::~Dog () {
    std::cout << "destruction de Dog" << std::endl;
}

 Dog::Dog (Dog const &animal) : Animal(animal)
    {
        std::cout << "Cat : copy constructor called" << std::endl;
    }

Dog &Dog::operator=(Dog const &Dog)
{
    this->_type = Dog._type;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "ouf ouf" << std::endl;
}
