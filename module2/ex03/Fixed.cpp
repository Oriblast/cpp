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

    Fixed::Fixed(int const nbi) {
        std::cout << "Int constructor called" << std::endl;
        this->_fixed_point = nbi * (1 << Fixed::_fractional_bits);
    }

    Fixed::Fixed(float const nbf) {
        std::cout << "Float constructor called" << std::endl;
        this->_fixed_point = roundf( nbf * (1 << Fixed::_fractional_bits));
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
        this->_fixed_point = copie.getRawBits();
        return *this;
    }

    bool Fixed::operator==(Fixed const &fix) const {
        return (this->_fixed_point == fix._fixed_point);
    }

    bool Fixed::operator>(Fixed const &fix) const {
        return (this->_fixed_point > fix._fixed_point);
    }

    bool Fixed::operator<(Fixed const &fix) const {
        return (this->_fixed_point < fix._fixed_point);
    }

    bool Fixed::operator<=(Fixed const &fix) const {
        return (this->_fixed_point <= fix._fixed_point);
    }

    bool Fixed::operator>=(Fixed const &fix) const {
        return (this->_fixed_point >= fix._fixed_point);
    }
    bool Fixed::operator!=(Fixed const &fix) const {
        return (this->_fixed_point != fix._fixed_point);
    }

    Fixed Fixed::operator+(Fixed const &fix) {
        return (Fixed(this->_fixed_point + fix._fixed_point) / (float)(1 << Fixed::_fractional_bits));
    }

    Fixed Fixed::operator-(Fixed const &fix) {
        return (Fixed(this->_fixed_point - fix._fixed_point) / (float)(1 << Fixed::_fractional_bits));
    }

    Fixed Fixed::operator/(Fixed const &fix) {
         return (Fixed((this->_fixed_point / (float)(1 << _fractional_bits)) / (fix._fixed_point / (float)(1 << _fractional_bits))));
    }

    Fixed Fixed::operator*(Fixed const &fix) {
        return (Fixed((this->_fixed_point / (float)(1 << _fractional_bits)) * (fix._fixed_point / (float)(1 << _fractional_bits))));
    }

    int Fixed::toInt(void) const {
        return (this->_fixed_point >> Fixed::_fractional_bits);
    }

    float Fixed::toFloat(void) const {
        return ((float)this->_fixed_point / (1 << Fixed::_fractional_bits));
    }

    Fixed Fixed::operator++(int) {
        this->_fixed_point++;
        return (*this);
    }

    Fixed Fixed::operator++(void) {
        this->_fixed_point++;
        return (*this);
    }

    Fixed Fixed::operator--(int) {
        this->_fixed_point++;
        return (*this);
    }

    Fixed Fixed::operator--(void) {
        this->_fixed_point++;
        return (*this);
    }

    Fixed &Fixed::min(Fixed &nb1, Fixed &nb2) {
        if (nb1 < nb2)
            return (nb1);
        else
            return (nb2);     
    }
    Fixed &Fixed::min(Fixed const &nb1, Fixed const &nb2) {
        if (nb1 < nb2)
            return ((Fixed&)nb1);
        return ((Fixed&)nb2);     
    }

    Fixed &Fixed::max(Fixed &nb1, Fixed &nb2) {
        if (nb1 > nb2)
            return (nb1);
        else
            return (nb2);     
    }

    Fixed &Fixed::max(Fixed const &nb1, Fixed const &nb2) {
        if (nb1 > nb2)
            return ((Fixed&)nb1);
        return ((Fixed&)nb2);     
    }

    std::ostream    &operator<<(std::ostream &new_out, Fixed const &fixed)
{
    new_out << fixed.toFloat();
    return (new_out);
}