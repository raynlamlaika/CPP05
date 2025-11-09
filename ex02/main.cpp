





#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp" 
#include "RobotomyRequestForm.hpp" 
#include "ShrubberyCreationForm.hpp"

int main ()
{
    Bureaucrat* first = new Bureaucrat();
    first->setGrade(12);
    first->setName("niyaak");
    first->IncrementGrade();
    first->IncrementGrade();
    first->IncrementGrade();
    first->IncrementGrade();
    first->IncrementGrade();
    first->IncrementGrade();
    first->DecrementGrade();
    first->DecrementGrade();
    first->DecrementGrade();
    first->DecrementGrade();
    first->IncrementGrade();
    first->IncrementGrade();


    PresidentialPardonForm* sec = new PresidentialPardonForm();
    try
    {
        std::cout << "form is singed" << std::endl;

        sec->beSigned(*first);
    }
    catch(const std::exception& e)
    {
        std::cout << "form isn't singed" << std::endl;

        std::cerr << e.what() << '\n';
    }

   sec->informs(*first);






}

