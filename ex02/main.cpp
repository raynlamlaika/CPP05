





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

   sec->execute(*first);



    ShrubberyCreationForm *good = new ShrubberyCreationForm();
    first->signForm(*good);
    good->execute(*first);
    RobotomyRequestForm *eee = new RobotomyRequestForm();
    eee->beSigned(*first);
    eee->execute(*first);
    eee->execute(*first);
    eee->execute(*first);
    eee->execute(*first);
    eee->execute(*first);
    eee->execute(*first);
    eee->execute(*first);
    eee->execute(*first);
    eee->execute(*first);
    eee->execute(*first);
    eee->execute(*first);
    eee->execute(*first);
    eee->execute(*first);
    eee->execute(*first);
    eee->execute(*first);
    eee->execute(*first);
    eee->execute(*first);
    eee->execute(*first);
    eee->execute(*first);


    PresidentialPardonForm* maki = new PresidentialPardonForm();
    maki->execute(*first);
    maki->execute(*first);
    maki->execute(*first);
    maki->execute(*first);
    maki->beSigned(*first);
    maki->execute(*first);
    maki->execute(*first);
    maki->execute(*first);
    maki->execute(*first);
    first->IncrementGrade();
    first->IncrementGrade();
    first->IncrementGrade();
    first->IncrementGrade();
    maki->execute(*first);
    maki->execute(*first);
    maki->execute(*first);
    maki->execute(*first);

}

