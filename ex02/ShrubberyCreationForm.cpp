

#include "ShrubberyCreationForm.hpp"

// orthodox form
ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm", false, 145, 137)
{
    this->target = "Default";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target): AForm("ShrubberyCreationForm", false, 145, 137)
{
   this->target = _target;
}


ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


// implementation form 
void ShrubberyCreationForm::beSigned(Bureaucrat &other)
{
    if (other.getGrade() <= this->GetGradeToSign())
    {
        this->SetFlag(true);
        std::cout << "i can SIGN it, Flag is not TRUE" << std::endl;
    }
    else
    {
        throw AForm::GradeTooLowException();
    }
}


int ShrubberyCreationForm::createShrubbery(Bureaucrat &other)
{

    if (other.getGrade() <= this->GetGradeToExecute() && this->GetFlag())
    {
        std::string FileName = this->getTarget()  + "_shrubbery";
        std::cout << "program try to create file :" << FileName << std::endl;
        std::ifstream checkFile(FileName.c_str());
        if (checkFile.good())
        {
            std::cout << "File already exists. what are you trying to do!" << std::endl;
            return 0;
        }
        else
        {
            std::fstream outFile(FileName.c_str(), std::ios::out);
            if (!outFile)
            {
                std::cout << "ShrubberyCreationForm: it have Grade, but can't open file: "<< FileName << std::endl;
                return (0);
            }
            else
            {
                //draw the tree
                std::cout << "ShrubberyCreationForm: drawing tree" << std::endl;
            }
            
        }
    }
    else
        std::cout << "ShrubberyCreationForm: Form not sined yet OR the execetor have a low grade" << std::endl;
    return 1;
}


// setters and getters
std::string ShrubberyCreationForm::getTarget() const
{
    return (this->target);
}
void ShrubberyCreationForm::SetTarget(std::string _target)
{
    this->target = _target;
}
