#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    const std::string  Name;
    bool         Flag;
    const unsigned int GradeToSign;
    const unsigned int GradeToExecute;
public:
    //orthodox form
    Form();
    Form(const Form &other);
    Form &operator=(const Form &other);
    virtual  ~Form();



    // exception part 
    class GradeTooHighException : public std::exception
    {
        public:
            const char* what() const throw()
            {
                return "Grade Too High Exception, can't pass the action\n";
            }
    };
    class GradeTooLowException : public std::exception
    {
        public:
            const char* what() const throw()
            {
                return "Grade Too Low Exception, can't pass the action\n";
            }
    };
    
    // getters part
    std::string  GetName()const;
    bool         GetFlag()const;
    unsigned int GetGradeToSign()const;
    unsigned int GetGradeToExecute()const;

    

    //function to immplemment
    virtual void beSigned(Bureaucrat &other) = 0;
};


std::ostream  &operator<<(std::ostream &os,const Form & other);