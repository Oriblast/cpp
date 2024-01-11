#ifndef DEF_ZOMBI
#define DEF_ZOMBI

#include <string>
#include <iostream>

class Zombi {
    public:
    Zombi(std::string n);
    ~Zombi();
    Zombi();
    void announce( void );

    private:
    std::string name;
};

#endif