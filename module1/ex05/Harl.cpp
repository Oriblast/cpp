#include "Harl.hpp"


    void Harl::debug( void ) {
        std::cout << "j'adorais avoir une supprement" << std::endl;
    }

    void Harl::info( void ) {
        std::cout << "mon dieu le sup std::coute chere sauf que je n'en ai pas eu assez" << std::endl;
    }

    void Harl::warning( void ) {
        std::cout << "je merite le sup gratuit car vous maviez servi froid" << std::endl;
    }

    void Harl::error( void ) {
        std::cout << "appeler moi votre superieur" << std::endl;
    }

    void Harl::complain( std::string level ) {
        if (level == "DEBUG")
            debug();
        else if (level == "INFO")
            info();
        else if (level == "WARNING")
            warning();
        else if (level == "ERROR")
            error();
        else 
            std::cout << "entrez correcte svp" << std::endl;
    }