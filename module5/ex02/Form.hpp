#pragma once 

#include "Bureaucrat.hpp"
class Bureaucrat;

class Form  {
    private:
    std::string _name;
    bool _sign;
    int const _sign_grade;
    int const _ex_grade;

    public:
    Form();
    ~Form();
    Form(Form const &form);
    Form &operator=(Form const &form);

    Form(std::string name, int const sign_grade, int const ex_grade);
    int getGrade() const;
    int getEx() const;
    void beSigned(Bureaucrat const &bureaucrat);
    bool getSign() const;
    std::string getName() const;


    class GradeTooHighException : public std::runtime_error 
    {
        public:
        GradeTooHighException() : std::runtime_error("grade too high") {}
    };

    class GradeTooLowException : public std::runtime_error
    {
        public:
        GradeTooLowException() : std::runtime_error("grade too high") {}
    };

    class FormSigned : public std::runtime_error
    {
        public:
        FormSigned() : std::runtime_error("signed") {}
    };
    
    class FormNoSigned : public std::runtime_error
    {
        public:
        FormNoSigned() : std::runtime_error("can't signed") {}
    };

    void checkSignForm(Bureaucrat const & b) const;
    virtual void    execute(Bureaucrat const & executor) const = 0;
};

//std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat);
