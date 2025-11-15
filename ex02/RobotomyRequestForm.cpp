

#include "RobotomyRequestForm.hpp"


//  orthodox Form

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 72, 45)
{
    this->Robotzed = false;
}
RobotomyRequestForm::RobotomyRequestForm(std::string _target): AForm("RobotomyRequestForm", 145, 137)
{
   this->target = _target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
{
    this->Robotzed = other.Robotzed;
    this->target = other.target;
}


//  functions to implemmente
void RobotomyRequestForm::beSigned(Bureaucrat &other)
{
    if (other.getGrade() <= this->GetGradeToSign())
    {
        // this->Flag = true;
        this->SetFlag(true);
        std::cout << "i can SIGN it, Flag is not TRUE" << std::endl;
    }
    else
    {
        throw AForm::GradeTooLowException();
    }
}

// robotomized(Bureaucrat &other)



int RobotomyRequestForm::execute(Bureaucrat const & other)
{
    const int RandomValue = std::rand();
    if (other.getGrade() <= this->GetGradeToExecute() && this->GetFlag())
    {
        // rand for the requrent of 50/100 it will robotomized successfully 50%

        if (RandomValue % 2)
        {
            this->Robotzed = true;
            std::cout  << "target: " << this->getTarget() << " get rotomized" << std::endl;
        }
        else
        {
            this->Robotzed = false;
            std::cout  << "target: " << this->getTarget() << " isn't rotomized yet" << std::endl;
        }
        
    }
    // otherwise  it will faild to robotomize
    else
        std::cout << "Form not sined yet OR the execetor have a low grade" << std::endl;

    return 0;
}






// geters and seters
std::string RobotomyRequestForm::getTarget() const
{
    return (this->target);
}
void RobotomyRequestForm::SetTarget(std::string _target)
{
    this->target = _target;
}
