

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
    ~PresidentialPardonForm();

    void informs(Bureaucrat &other);
    void beSigned(Bureaucrat &other);

    //getters/ setters
    std::string getTarget() const;
    void SetTarget(std::string _target);


};


