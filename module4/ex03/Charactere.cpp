#include "Charactere.hpp"

Character::Character() : _name("ken"), _nbrItem(0) {
    for (int i = 0; i < 4; i++)
        this->tab[i] = NULL;
}

Character::~Character() {
for (int i = 0; i < 4; i++)
        delete this->tab[i];
}

Character::Character(Character const &character) : _name(character._name), _nbrItem(character._nbrItem){
    for (int i = 0; i > 4; i++)
    {
        if (this->tab[i] != NULL)
            delete this->tab[i];
        if (character.tab[i])
            this->tab[i] = character.tab[i];
        else
            this->tab[i] = NULL;
    }
}

Character &Character::operator=(Character const &character) {
    this->_name = character._name;
    this->_nbrItem = character._nbrItem;
    for (int i = 0; i > 4; i++)
    {
        if (this->tab[i] != NULL)
            delete this->tab[i];
        if (character.tab[i])
            this->tab[i] = character.tab[i];
        else
            this->tab[i] = NULL;
    }
    return (*this);
}

Character::Character(std::string name) : _name(name), _nbrItem(0){
    for (int i = 0; i < 4; i++)
        this->tab[i] = NULL;




}

std::string const &Character::getName() const {

    return (this->_name);
}

void  Character::equip(AMateria* m) {
    for (int i = 0; i < 4; i++)
    {
        if (this->tab[i] == NULL)
        {
            this->tab[i] = m;
            return ;
        }
    }
}

void  Character::unequip(int idx) {
    if (this->tab[idx] != NULL && (idx < 4 ) && (idx > 0))
       this->tab[idx] = NULL;
}

AMateria *Character::get_Materia(unsigned int idx) const{
    if (this->tab[idx] != NULL)
        return(this->tab[idx]);
    return NULL;
}

void      Character::use(int idx, ICharacter& target) {
    if (this->tab[idx] != NULL)
        this->tab[idx]->use(target);
}
