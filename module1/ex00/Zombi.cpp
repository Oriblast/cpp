#include "Zombi.hpp"

Zombi::Zombi(std::string n) {
    name = n;
}

Zombi::~Zombi() {
    std::cout << name << " est detruit" << std::endl;
}

void Zombi::announce( void ) {
    std::cout << name << ":BraiiiiiiinnnzzzZ..." << std::endl;
}