

#pragma once
#include <iostream>
#include  "AForm.hpp"

class PresidentialPardonForm : public AForm 
{
private:
    const std::string   Name;
    bool                Flag;
    const unsigned int  GradeToSign;
    const unsigned int  GradeToExecute;
    bool                informed;



public:
    PresidentialPardonForm();
    ~PresidentialPardonForm();

    void informs(Bureaucrat &other);
    void beSigned(Bureaucrat &other);

    std::string  GetName()const;
    bool         GetFlag()const;
    unsigned int GetGradeToSign()const;
    unsigned int GetGradeToExecute()const;



};


