
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("default"), grade(100)
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

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade Too High Exception, can't pass the action\n";
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade Too High Exception, can't pass the action\n";
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    this->grade = other.grade;
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


std::ostream& operator<<(std::ostream& os,const Bureaucrat &other)
{
    os << other.getName() << ", bureaucrat grade "  << other.getGrade();
    return os;
}
