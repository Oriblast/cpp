#include "Fixed.hpp"

int const Fixed::_fractional_bits = 8;

    Fixed::Fixed() : _fixed_point(0) {
        std::cout << "Default constructor called" << std::endl;
    }

    Fixed::~Fixed() {
        std::cout << "Destructor called" << std::endl;
    }
    Fixed::Fixed(Fixed const &copie) {
        std::cout << "Copy constructor called" << std::endl;
        *this = copie;
        return ;
    }


    int Fixed::getRawBits(void) const {
        std::cout << "getRawBits member function called" << std::endl;
        return(_fixed_point);
    }

    void Fixed::setRawBits( int const raw ) {
        _fixed_point = raw;
        return ;
    }

    Fixed &Fixed::operator=(Fixed const &copie) {
        std::cout << "Copy assignment operator called" << std::endl;
        this->_fixed_point = getRawBits();
        return *this;
    }