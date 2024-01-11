#pragma once

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
    public:
        AMateria        *_tab[4];
        unsigned int    _nItem;
    public:
        MateriaSource(void);
        MateriaSource(MateriaSource const &materiaSource);
        MateriaSource &operator=(MateriaSource& materiaSource);
        ~MateriaSource(void);
        
        virtual void learnMateria(AMateria *imateria);
        virtual AMateria *createMateria(std::string const &type);
};