

#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm() : Name("chahada"),Flag(0), GradeToSign(72), GradeToExecute(45) , Robotzed(0)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::beSigned(Bureaucrat &other)
{
    if (other.getGrade() <= this->GradeToSign)
    {
        this->Flag = true;
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
    if (other.getGrade() <= this->GradeToExecute && this->GetFlag())
    {
        // rand for the requrent of 50/100 it will robotomized successfully 50%

        if (RandomValue % 2)
        {
            this->Robotzed = true;
            std::cout  << "target :" << this->Name << "get rotomized" << std::endl;
        }
        else
        {
            this->Robotzed = false;
            std::cout  << "target :" << this->Name << "isn't rotomized yet" << std::endl;
        }
        
    }
    else
        std::cout << "Form not sined yet OR the execetor have a low grade" << std::endl;


    // otherwise  it will faild to robotomize
}



std::string RobotomyRequestForm::GetName()const
{
    return(this->Name);
}

bool        RobotomyRequestForm::GetFlag() const
{
    return (this->Flag);
}

unsigned int RobotomyRequestForm::GetGradeToSign()const
{
    return (this->GradeToSign);
}

unsigned int    RobotomyRequestForm::GetGradeToExecute()const
{
    return (this->GradeToExecute);
}


