
#pragma once
#include <fstream>
#include <iostream>
#include "AForm.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public AForm
{
private:


public:
    ShrubberyCreationForm();
    ~ShrubberyCreationForm();
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
    ShrubberyCreationForm(const ShrubberyCreationForm &other);


    void beSigned(Bureaucrat &other);
    int createShrubbery(Bureaucrat &other);

};


