#pragma once 

#include <iostream>
#include <stack>

template<typename T>
class MutantStack: public std::stack<T>
{
    public:
        MutantStack(void) = default;
        MutantStack(MutantStack const &src) = default;
        MutantStack &operator=(MutantStack const &src) = default;
        ~MutantStack(void) = default;

        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin(void);
        iterator end(void);
};

#include "MutantStack.tpp"