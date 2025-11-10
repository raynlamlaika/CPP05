

#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm():AForm("RobotomyRequestForm", false, 72, 45), Robotzed(0)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

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


void RobotomyRequestForm::robotomized(Bureaucrat &other)
{
    const int RandomValue = std::rand();
    // chekc the access
    if (other.getGrade() <= this->GetGradeToExecute() && this->GetFlag())
    {
        // rand for the requrent of 50/100 it will robotomized successfully 50%

        if (RandomValue % 2)
        {
            this->Robotzed = true;
            std::cout  << "target :" << this->GetName() << "get rotomized" << std::endl;
        }
        else
        {
            this->Robotzed = false;
            std::cout  << "target :" << this->GetName() << "isn't rotomized yet" << std::endl;
        }
        
    }
    else
        std::cout << "Form not sined yet OR the execetor have a low grade" << std::endl;


    // otherwise  it will faild to robotomize
}



