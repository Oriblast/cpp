#ifndef DEF_HARL
#define DEF_HARL

#include <iostream>
#include <fstream>

class Harl {
    private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );

    public:
    void complain( std::string level );
};

#endif