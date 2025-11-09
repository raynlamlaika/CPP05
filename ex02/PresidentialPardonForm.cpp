
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Name("chahada"),Flag(0), GradeToSign(25), GradeToExecute(5) , informed(0)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void PresidentialPardonForm::beSigned(Bureaucrat &other)
{
    std::cout <<  "beru " <<other.getGrade()  << "  alo " << this->GradeToSign << std::endl;
    if (other.getGrade() <= this->GradeToSign)
    {
        this->Flag = true;
        std::cout <<  " helooooo lo maghok :"<< &this->Flag << std::endl ;
        std::cout<< other.getName()  << " can SIGN it, Flag is not TRUE" << std::endl;
    }
    else
        throw AForm::GradeTooLowException();

}



void PresidentialPardonForm::informs(Bureaucrat &other)
{

    if (other.getGrade() <= this->GradeToExecute && this->GetFlag())
    {
        this->informed = true;
        std::cout << this->Name << " has been pardoned by Zaphod Beeblebrox." << std::endl;
    }
    else
        std::cout << "Form not sined yet OR the execetor have a low grade" << std::endl;

}


std::string PresidentialPardonForm::GetName()const
{
    return(this->Name);
}

bool        PresidentialPardonForm::GetFlag() const
{
    return (this->Flag);
}

unsigned int PresidentialPardonForm::GetGradeToSign()const
{
    return (this->GradeToSign);
}

unsigned int    PresidentialPardonForm::GetGradeToExecute()const
{
    return (this->GradeToExecute);
}
