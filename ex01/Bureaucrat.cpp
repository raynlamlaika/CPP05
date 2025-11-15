

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("default")
{
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade): name(name)
{
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    this->grade = grade;
}
Bureaucrat::~Bureaucrat()
{

}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    if (this != &other)
    {
        this->grade = other.grade;
    }
    return (*this);
}

Bureaucrat::Bureaucrat(const Bureaucrat &other): name(other.name)
{
    this->grade = other.grade;
}



unsigned int Bureaucrat::getGrade() const
{
    return (this->grade);
}

void Bureaucrat::setGrade(unsigned int grade)
{
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    this->grade = grade;
}

std::string Bureaucrat::getName()const
{
    return (this->name);
}


void Bureaucrat::IncrementGrade()
{
    if (grade > 1)
    {
        grade--;
        std::cout << "Bureaucrat: pass the IncrementGrade for : " << name <<  std::endl;
    }
    else
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::DecrementGrade()
{
    if (grade < 150)
    {
        grade++;
        std::cout << "Bureaucrat: pass the DecrementGrade for : " << name <<  std::endl;
    }
    else
        throw Bureaucrat::GradeTooLowException();
}


void Bureaucrat::signForm(Form& other) 
{
    try
    {
        other.beSigned(*this);
        std::cout  << this->getName() << " signed "  << other.GetName() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr  << this->getName() << " couldn’t sign " << other.GetName() \
        <<  " because " << e.what();
    }
}


// overload we cant ovload it inside the class, we dont have the frined function access
// and also if we define it we need to pass only one argemment so it will reverse the oerder
// of the streaming os

std::ostream& operator<<(std::ostream& os,const Bureaucrat &other)
{
    os << other.getName() << ", bureaucrat grade "  << other.getGrade();
    return os;
}




