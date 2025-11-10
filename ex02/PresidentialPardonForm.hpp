

#pragma once
#include <iostream>
#include  "AForm.hpp"

class PresidentialPardonForm : public AForm 
{
private:
    bool                informed;



public:
    PresidentialPardonForm();
    ~PresidentialPardonForm();

    void informs(Bureaucrat &other);
    void beSigned(Bureaucrat &other);




};


