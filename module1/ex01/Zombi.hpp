#ifndef DEF_ZOMBI
#define DEF_ZOMBI

#include <string>
#include <iostream>

class Zombi {
    public:
     Zombi();
    ~Zombi();
    void announce( void );
    void nom(std::string n);

    private:
    std::string name;
};

#endif