#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    const std::string   Name;
    bool                Flag;
    const unsigned int  GradeToSign;
    const unsigned int  GradeToExecute;

public:
    //orthodox form
    Form();
    Form(const Form &other);
    Form(std::string name , unsigned int GradeToSign,unsigned int GradeToExecute); 
    Form &operator=(const Form &other);
    ~Form();



    // exception part 
    class GradeTooHighException : public std::exception
    {
        public:
            const char* what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        public:
            const char* what() const throw();
    };

    // getters part
    std::string  GetName()const;
    bool         GetFlag()const;
    unsigned int GetGradeToSign()const;
    unsigned int GetGradeToExecute()const;



    //function to immplemment
    void beSigned(Bureaucrat &other);
};


std::ostream  &operator<<(std::ostream &os,const Form & other);