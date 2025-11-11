
#include "AForm.hpp"

//orthodox Aform
AForm::AForm() :Name("chahada"), GradeToSign(150), GradeToExecute(1) 
{
    Flag = 0;
}

AForm::AForm(const AForm &other) :Name("chahada"), GradeToSign(150), GradeToExecute(1) 
{
    this->Flag = other.GetFlag();
}

AForm &AForm::operator=(const AForm &other)
{
    this->Flag = other.GetFlag();
    return *this;
}

AForm::~AForm()
{

}
AForm::AForm(std::string name , bool flag,const unsigned int GradeToSign,const unsigned int GradeToExecute):
    Name(name) , Flag(flag), GradeToSign(GradeToSign), GradeToExecute(GradeToExecute)
{
}

// getters part
std::string AForm::GetName()const
{
    return(this->Name);
}

bool        AForm::GetFlag() const
{
    return (this->Flag);
}

unsigned int AForm::GetGradeToSign()const
{
    return (this->GradeToSign);
}

unsigned int    AForm::GetGradeToExecute()const
{
    return (this->GradeToExecute);
}

//setters

void AForm::SetFlag(bool flaged)
{
    this->Flag = flaged;
}




// overload <<

std::ostream  &operator<<(std::ostream &os, const AForm  &other)
{
    os << "AForm name :" << other.GetName() << " flag of the Aform is :" << other.GetFlag()<< " the grade needed to sign is: " << other.GetGradeToSign() << " the grade needed to execute is:" << other.GetGradeToExecute() ;
    return os;
}


//additial functions



void AForm::execute(Bureaucrat const & executor) const
{
    if (this->Flag && executor.getGrade() <= this->GradeToExecute)
    {
        std::cout << "Form atempting to execute" << std::endl;
        // need to set the flag later  for the confirmetion of the execedF
    }
    else
        throw AForm::GradeTooLowException() ;
}

