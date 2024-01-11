    #include "Animal.hpp"

    Animal::Animal () : _type("Animal") {
        std::cout << "construction de animal" << std::endl;
    }

    Animal::Animal (std::string const &type) : _type(type) {
        std::cout << "construction de animal" << type << std::endl;
    }

    Animal::~Animal () {
        std::cout << "destruction de animal" << std::endl;
    }

    Animal::Animal (Animal const &animal)
    {
        this->_type = animal._type;
        std::cout << "Cat : copy constructor called" << std::endl;
    }

    Animal &Animal::operator=(Animal const &animal)
    {
        this->_type = animal._type;
        return (*this);
    }

    void Animal::makeSound() const
    {
        std::cout << "pas de crie" << std::endl;
    }

    std::string Animal::getType(void) const
    {
        return (this->_type);
    }