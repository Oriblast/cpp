#include "Harl.hpp"

using namespace std;

    void Harl::debug( void ) {
        std::cout << "[DEBUG]" << std::endl << "j'adorais avoir une supprement" << std::endl;
    }

    void Harl::info( void ) {
        std::cout << "[INFO]" << std::endl << "mon dieu le sup std::coute chere sauf que je n'en ai pas eu assez" << std::endl;
    }

    void Harl::warning( void ) {
        std::cout << "[WARNING]" << std::endl << "je merite le sup gratuit car vous maviez servi froid" << std::endl;
    }

    void Harl::error( void ) {
        std::cout << "[ERROR]" << std::endl << "appeler moi votre superieur" << std::endl;
    }

    void Harl::complain( std::string level ) {

        switch (level[0]) {

        case 'D':
            debug();
        case 'I':
            info();
        case 'W':
            warning();
        case 'E':
            error();
        default:
            std::cout << "entrez correcte svp" << std::endl;
        }
    }