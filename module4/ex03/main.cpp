#include "MateriaSource.hpp"
#include "Charactere.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "IMateriaSource.hpp"
#include "ICharactere.hpp"
#include "AMateria.hpp"

int main()
{
IMateriaSource* src = new MateriaSource();
src->learnMateria(new Ice());
src->learnMateria(new Cure());
ICharacter* me = new Character("me");
AMateria* tmp;
tmp = src->createMateria("ice");
me->equip(tmp);
std::cout << tmp->_type << std::endl;
tmp = src->createMateria("cure");
std::cout << tmp->_type << std::endl;
me->equip(tmp);
//tmp = me->get_Materia(0);
//std::cout << tmp->getType() << std::endl;
ICharacter* bob = new Character("bob");
me->use(0, *bob);
me->use(1, *bob);
delete bob;
delete me;
delete src;
return 0;
}