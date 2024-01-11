#include "Dog.hpp"

Dog::Dog () : Animal("Dog"), _type("Dog") {
    _brain = new Brain();
    std::cout << "construction de Dog" << std::endl;
}

Dog::~Dog () {
    delete _brain;
    std::cout << "destruction de Dog" << std::endl;
}

 Dog::Dog (Dog const &animal) : Animal(animal){
        *this->_brain = *animal._brain;
        std::cout << "Dog: copy constructor called" << std::endl;
    }

Dog &Dog::operator=(Dog const &dog)
{
    *this->_brain = *dog._brain;
    this->_type = dog._type;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "ouf ouf" << std::endl;
}
