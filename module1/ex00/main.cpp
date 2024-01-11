#include "Zombi.hpp"

Zombi* newZombie(std::string name ) {
    return new Zombi(name);
}

void randomChump(std::string name ) {
    Zombi z = Zombi(name);
    z.announce();
}

int main()
{
    Zombi *zmbi = newZombie("pute");
    zmbi->announce();
    delete zmbi;

    randomChump("ken");
    return 0;
}