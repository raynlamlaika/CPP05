
#pragma once
#include <fstream>
#include <iostream>
#include "AForm.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public AForm
{
private:
    std::string target;

public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string _target);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
    ShrubberyCreationForm(const ShrubberyCreationForm &other);


    void beSigned(Bureaucrat &other);
    int execute(Bureaucrat const & other);

    std::string getTarget() const;
    void SetTarget(std::string _target);
};


