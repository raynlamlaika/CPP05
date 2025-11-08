

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    if (this != &other)
    {
        this->name = other.name;
        this->grade = other.grade;
    }
    return (*this);
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
    this->name = other.name;
    this->grade = other.grade;
}

// getters and sters

unsigned int Bureaucrat::getGrade() const
{
    return (this->grade);
}

void Bureaucrat::setGrade(unsigned int grade)
{
    this->grade = grade;
}

std::string Bureaucrat::getName()const
{
    return (this->name);
}

void Bureaucrat::setName(std::string name)
{
    this->name = name;
}


// functions implemmentation 
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
        throw Bureaucrat::GradeTooHighException();
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
        std::cout  << this->getName() << " couldn’t sign " << other.GetName() \
        <<  " because " << e.what() << std::endl;
    }
}


// overload

std::ostream& operator<<(std::ostream& os,const Bureaucrat &other)
{
    os << other.getName() << ", bureaucrat grade "  << other.getGrade();
    return os;
}




