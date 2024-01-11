#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _nItem(0) {
    for (int i = 0; i < 4; i++)
        this->_tab[i] = NULL;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; i++)
        delete this->_tab[i];
}

MateriaSource::MateriaSource(MateriaSource const &materiaSource) : _nItem(materiaSource._nItem) {
    for (int i = 0; i < 4; i++)
    {
        if (this->_tab[i] != NULL)
            delete this->_tab[i];
        this->_tab[i] = materiaSource._tab[i];
    }
}

MateriaSource &MateriaSource::operator=(MateriaSource &materiaSource) {
    this->_nItem = materiaSource._nItem;
    for (int i = 0; i < 4; i++)
    {
        if (this->_tab[i] != NULL)
            delete this->_tab[i];
        this->_tab[i] = materiaSource._tab[i];
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria *imateria) {
    if (this->_nItem < 4)
    {
        for (int i = 0; i < 4; i++)
        {
            if (this->_tab[i] == NULL)
            {
                this->_tab[i] = imateria;
                this->_nItem++;
                break ;
            }
        }
    }
}

AMateria *MateriaSource::createMateria(std::string const &type) {

    for (int i = 0; i < 4; i++)
    {
        if (this->_tab[i] != NULL && this->_tab[i]->getType() == type)
        {
            return (this->_tab[i]->clone());
        }
    }
    return (0);
}