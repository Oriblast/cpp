#pragma once
#include "Form.hpp"
#include "Bureaucrat.hpp"

class SherubberyCreationForm: public Form
{
    private:
        std::string _target;
    public:
        SherubberyCreationForm(void);
        SherubberyCreationForm(SherubberyCreationForm const &src);
        SherubberyCreationForm &operator=(SherubberyCreationForm const &src);
        ~SherubberyCreationForm(void);

        SherubberyCreationForm(std::string target);
        void    execute(Bureaucrat const &excutor)const;
};
