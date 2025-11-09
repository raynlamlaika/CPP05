
#pragma once

#include "AForm.hpp"
#include <iostream>
#include <cstdlib>

// class AForm;
class Bureaucrat;

class RobotomyRequestForm : public AForm
{
private:
    const std::string  Name;
    bool               Flag;
    const unsigned int GradeToSign;
    const unsigned int GradeToExecute;
    bool               Robotzed;
    
public:
    RobotomyRequestForm();
    ~RobotomyRequestForm();
    RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
    RobotomyRequestForm(const RobotomyRequestForm &other);

    void beSigned(Bureaucrat &other);
    void robotomized(Bureaucrat &other);



    // getters
    std::string  GetName()const;
    bool         GetFlag()const;
    unsigned int GetGradeToSign()const;
    unsigned int GetGradeToExecute()const;
};
