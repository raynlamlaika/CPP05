
#pragma once
#include <fstream>
#include <iostream>
#include "AForm.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public AForm
{
private:
    const std::string  Name;
    bool               Flag;
    const unsigned int GradeToSign;
    const unsigned int GradeToExecute;


public:
    ShrubberyCreationForm();
    ~ShrubberyCreationForm();
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
    ShrubberyCreationForm(const ShrubberyCreationForm &other);


    void beSigned(Bureaucrat &other);
    int createShrubbery(Bureaucrat &other);


    // egetter
    std::string  GetName()const;
    bool         GetFlag()const;
    unsigned int GetGradeToSign()const;
    unsigned int GetGradeToExecute()const;
};


