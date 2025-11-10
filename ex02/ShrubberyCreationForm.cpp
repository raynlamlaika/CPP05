

#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm", false, 145, 137)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}



void ShrubberyCreationForm::beSigned(Bureaucrat &other)
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


int ShrubberyCreationForm::createShrubbery(Bureaucrat &other)
{

    //check part for exec and singed form
    if (other.getGrade() <= this->GetGradeToExecute() && this->GetFlag())
    {
        // access to crea in file
        std::string FileName = this->GetName()  + "_shrubbery"; // name of the file + _shrubbery
        std::cout << "program try to create file :" << FileName << std::endl;
        // check access of creation file
        // std::fstream FileS(FileName, std::ios::out);
        // if (!FileS)
        // {
        //     std::cout << "ShrubberyCreationForm: it have grade to but can't open file: "<< FileName << std::endl;
        //     return (0);
        // }
        // pass on it in a tree
        // // CreatTree(FileS);
        // FileS << "it will bw working later" << std::endl;
    }
    else
        std::cout << "Form not sined yet OR the execetor have a low grade" << std::endl;
    return 1;
}


