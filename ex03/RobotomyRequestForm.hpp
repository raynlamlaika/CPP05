
#pragma once

#include "AForm.hpp"
#include <iostream>
#include <cstdlib>

// class AForm;
class Bureaucrat;

class RobotomyRequestForm : public AForm
{
private:
    bool               Robotzed;
    std::string        target;
    
public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string _target);
    ~RobotomyRequestForm();
    RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
    RobotomyRequestForm(const RobotomyRequestForm &other);

    void beSigned(Bureaucrat &other);
    void robotomized(Bureaucrat &other);

    //getters/ setters
    std::string getTarget() const;
    void SetTarget(std::string _target);
};