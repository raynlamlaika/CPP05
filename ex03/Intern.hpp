
#pragma once
#include "iostream"
#include "AForm.hpp"

class AForm;

class Intern
{
private:
    
public:
    Intern();
    ~Intern();

    // functions
    AForm* makeForm(std::string name, std::string target);
};

