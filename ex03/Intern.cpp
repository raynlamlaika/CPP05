
#include "Intern.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "string.h"

Intern::Intern()
{
}

Intern::~Intern()
{
}

void printerr(std::string str)
{
    std::cerr << str << std::endl;
}

AForm* Intern::makeForm(std::string name, std::string target)
{
    if (name.empty() || target.empty())
    {
        printerr("argement is empty or null, you CAN'T do that");
        return NULL;
    }
    std::string forms[4] = {"presidential pardonForm", "robotomy requestForm", "shrubbery creationForm"};
    
    int index = 0;
    while (forms[index] != name && index <= 3)
    {
        if (strcmp(forms[index].c_str(), name.c_str()))
            break;
        index++;
    }
    switch(index)
    {
        case 1:
            return (new PresidentialPardonForm(target)); // need to pass the target
        case 2:
            return (new RobotomyRequestForm(target));
        case 3:
            return (new ShrubberyCreationForm(target));
        default:
        {
            printerr("Inter can't make a form of this type");
            return (NULL);
        }
    }
}