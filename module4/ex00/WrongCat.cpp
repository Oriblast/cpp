#include "WrongCat.hpp"

WrongCat::WrongCat () : _type("WrongCat") {
    std::cout << "construction de WrongCat" << std::endl;
}

WrongCat::~WrongCat () {
    std::cout << "destruction de WrongCat" << std::endl;
}

 WrongCat::WrongCat (WrongCat const &animal)
    {
        this->_type = animal._type;
        std::cout << "Cat : copy constructor called" << std::endl;
    }


WrongCat &WrongCat::operator=(WrongCat const &WrongCat)
{
    this->_type = WrongCat._type;
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << "miaou miaou" << std::endl;
}
