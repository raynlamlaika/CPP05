
#include "PresidentialPardonForm.hpp"
// ortodox form
PresidentialPardonForm::PresidentialPardonForm(): AForm("default", false, 25, 5)
{
    this->informed = false;
    this->target = "default";
}
PresidentialPardonForm::PresidentialPardonForm(std::string _target): AForm("default", false, 25, 5)
{
    this->informed = false;
    this->target = _target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}




//  implemmentations

void PresidentialPardonForm::beSigned(Bureaucrat &other)
{

    if (other.getGrade() <= this->GetGradeToSign())
    {
        SetFlag(true);
        std::cout<< other.getName()  << " can SIGN it, Flag = TRUE" << std::endl;
    }
    else
        throw AForm::GradeTooLowException();

}

// void PresidentialPardonForm::informs(Bureaucrat &other)
int PresidentialPardonForm::execute(Bureaucrat const & other)
{

    if (other.getGrade() <= this->GetGradeToExecute() && this->GetFlag())
    {
        std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
    }
    else
    {
        // std::cout << "Form not sined yet OR the execetor have a low grade" << std::endl;
        std::cout << "required grade: " <<this->GetGradeToExecute() << \
        " your Bureaucrat grade " <<  other.getGrade() << std::endl;

    }
    return 1;
}



// getters and setters
std::string PresidentialPardonForm::getTarget() const
{
    return (this->target);
}
void PresidentialPardonForm::SetTarget(std::string _target)
{
    this->target = _target;
}