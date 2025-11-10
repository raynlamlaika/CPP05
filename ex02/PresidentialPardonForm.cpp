
#include "PresidentialPardonForm.hpp"

// PresidentialPardonForm::PresidentialPardonForm(): Name("chahada"),Flag(0), GradeToSign(25), GradeToExecute(5) , informed(0)
PresidentialPardonForm::PresidentialPardonForm(): AForm("default", false, 25, 5)
{
    this->informed = false;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void PresidentialPardonForm::beSigned(Bureaucrat &other)
{
    std::cout <<  "beru " <<other.getGrade()  << "  alo " << this->GetGradeToSign() << std::endl;
    if (other.getGrade() <= this->GetGradeToSign())
    {
        // this->GetFlag() = true;
        SetFlag(true);
        std::cout<< other.getName()  << " can SIGN it, Flag is not TRUE" << std::endl;
    }
    else
        throw AForm::GradeTooLowException();

}



void PresidentialPardonForm::informs(Bureaucrat &other)
{

    if (other.getGrade() <= this->GetGradeToExecute() && this->GetFlag())
    {
        this->informed = true;
        std::cout << this->GetName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
    }
    else
        std::cout << "Form not sined yet OR the execetor have a low grade" << std::endl;

}


