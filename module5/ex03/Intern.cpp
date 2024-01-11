#include "Intern.hpp"

Form *Intern::makeForm(std::string bur, std::string form) 
{
    std::string bot = "shrubbery creation";
    std::string she = "robotomy request";
    std::string pres = "presidenial pardon";

    if (bur == bot)
        return new RobotomyRequestForm(form);
    else if (bur == she)
        return new SherubberyCreationForm(form);
    else if (bur == pres)
        return new PresidentialPardonForm(form);
    else 
        throw Intern::noform();
}