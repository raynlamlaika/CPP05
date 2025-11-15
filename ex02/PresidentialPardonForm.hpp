

#pragma once
#include <iostream>
#include  "AForm.hpp"


class PresidentialPardonForm : public AForm 
{
private:
    bool                informed;
    std::string         target;


public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string _target);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &other);
    ~PresidentialPardonForm();

    // void informs(Bureaucrat &other);
    int execute(Bureaucrat const & executor);
    void beSigned(Bureaucrat &other);

    //getters/ setters
    std::string getTarget() const;
    void SetTarget(std::string _target);
};


