
#include "Form.hpp"

//orthodox form
Form::Form() :Name("form_default"), GradeToSign(150), GradeToExecute(1) 
{
    Flag = 0;
}
Form::Form(const Form &other) :Name("form_default"), GradeToSign(150), GradeToExecute(1) 
{
    this->Flag = other.GetFlag();
}

Form::Form(std::string name ,  unsigned int GradeToSign,unsigned int GradeToExecute):
    Name(name) , Flag(false), GradeToSign(GradeToSign), GradeToExecute(GradeToExecute)
{
}

Form &Form::operator=(const Form &other)
{
    this->Flag = other.GetFlag();
    return *this;
}

Form::~Form()
{

}


// getters part
std::string Form::GetName()const
{
    return(this->Name);
}

bool        Form::GetFlag() const
{
    return (this->Flag);
}

unsigned int Form::GetGradeToSign()const
{
    return (this->GradeToSign);
}

unsigned int    Form::GetGradeToExecute()const
{
    return (this->GradeToExecute);
}




//function to immplemment
void  Form::beSigned(Bureaucrat &other)
{
    if (other.getGrade() <= this->GradeToSign)
    {
        this->Flag = true;
        std::cout << "i can SIGN it, Flag is now TRUE" << std::endl;
    }
    else
    {
        throw Form::GradeTooLowException();
    }
}


std::ostream  &operator<<(std::ostream &os, const Form  &other)
{
    if (other.GetFlag())
        os << "Form name :" << other.GetName() << " flag of the form is : True, the grade needed to sign is: " << other.GetGradeToSign() << " the grade needed to execute is:" << other.GetGradeToExecute() ;
    else
        os << "Form name :" << other.GetName() << " flag of the form is : False, the grade needed to sign is: " << other.GetGradeToSign() << " the grade needed to execute is:" << other.GetGradeToExecute() ;
    return os;
}


//  exceptions 
const char * Form::GradeTooHighException::what() const throw()
{
    return "Grade Too High Exception, can't pass the action\n";
}

const char * Form::GradeTooLowException::what() const throw()
{
    return "Grade Too High Exception, can't pass the action\n";
}


