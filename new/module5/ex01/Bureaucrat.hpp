#pragma once 

#include <iostream>
#include "Form.hpp"
#include <stdexcept>
#include <string>
class Form;

class Bureaucrat {
    private:
    std::string _name;
    int _grade;

    public:
    Bureaucrat();
    ~Bureaucrat();
    Bureaucrat(Bureaucrat const &bureaucrat);
    Bureaucrat &operator=(Bureaucrat const &bureaucrat);
    Bureaucrat(std::string const &name, unsigned int grade);

    void gradep();
    void gradem();
    std::string getName() const;
    int getGrade() const;
    class GradeTooHighException : public std::runtime_error {
        public:
        GradeTooHighException() : std::runtime_error("grade too high"){
        }
    };

    class GradeTooLowException : public std::runtime_error {
        public:
        GradeTooLowException() : std::runtime_error("grade too low"){
        }
    };

    void signForm(Form const &form) ;
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat);