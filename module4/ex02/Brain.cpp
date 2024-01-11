#include "Brain.hpp"

Brain::Brain() {
    for (int i = 0; i < 100; i++)
        this->_idee[i] = "kenn";
    std::cout << "default constructor called brain" << std::endl;
}

Brain::~Brain() {
    std::cout << "braain destruction called" << std::endl;
}

Brain::Brain(Brain const &bain) {
    for (int i = 0; i < 100; i++)
        this->_idee[i] = bain._idee[i];
    std::cout << "copy constructor called" << std::endl;
}

Brain &Brain::operator=(Brain const &bain) {
    for (int i = 0; i < 100; i++)
        this->_idee[i] = bain._idee[i];
    std::cout << "Brain : Copy assignment operator called" << std::endl;
    return(*this);
}

std::string Brain::getbr(int i)
{
    return(this->_idee[i]);
}