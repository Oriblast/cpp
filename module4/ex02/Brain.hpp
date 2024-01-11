#pragma once

#include <iostream>

class Brain {
    private:
    std::string _idee[100];

    public:
    Brain();
    Brain(Brain const &brain);
    ~Brain();
    Brain &operator=(Brain const &brain);
    std::string getbr(int i);
};
