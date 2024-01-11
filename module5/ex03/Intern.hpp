#pragma once

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
    public:
    class noform : public std::runtime_error {
        public:
        noform() : std::runtime_error("pas de bureaucrat") {

        }
    };

    Form *makeForm(std::string bur, std::string form);
};
