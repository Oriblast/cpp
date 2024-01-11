#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
const Animal* j = new Dog();
const Cat* i = new Cat();
for(int io = 0; io < 100; io++)
{
    std::cout <<i->getide(io) << std::endl;
}
delete j;
delete i;
return 0;
}
