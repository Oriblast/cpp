#include "Zombi.hpp"

Zombi::Zombi() {

}

Zombi::~Zombi() {
    std::cout << name << " est detruit" << std::endl;
}

void Zombi::announce( void ) {
    std::cout << name << ":BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombi::nom(std::std::string n) {
    this->name = n;
}