#pragma once 
#include "Form.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form {
    private:
    std::string _tar;   
    
    public:
    PresidentialPardonForm();
    PresidentialPardonForm(PresidentialPardonForm const &pre);
    ~PresidentialPardonForm();
    PresidentialPardonForm &operator=(PresidentialPardonForm const &pre);

    PresidentialPardonForm(std::string tar);
    void execute(Bureaucrat const &excutor) const;
};

