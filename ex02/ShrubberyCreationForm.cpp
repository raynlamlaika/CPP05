

#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(): Name("default"), Flag(0), GradeToSign(145), GradeToExecute(137)
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}



void ShrubberyCreationForm::beSigned(Bureaucrat &other)
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


int ShrubberyCreationForm::createShrubbery(Bureaucrat &other)
{

    //check part for exec and singed form
    if (other.getGrade() <= this->GradeToExecute && this->GetFlag())
    {
        // access to crea in file
        std::string FileName = this->Name  + "_shrubbery"; // name of the file + _shrubbery
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


std::string ShrubberyCreationForm::GetName()const
{
    return(this->Name);
}

bool        ShrubberyCreationForm::GetFlag() const
{
    return (this->Flag);
}

unsigned int ShrubberyCreationForm::GetGradeToSign()const
{
    return (this->GradeToSign);
}

unsigned int    ShrubberyCreationForm::GetGradeToExecute()const
{
    return (this->GradeToExecute);
}



