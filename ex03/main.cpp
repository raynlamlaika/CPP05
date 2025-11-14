





#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp" 
#include "RobotomyRequestForm.hpp" 
#include "ShrubberyCreationForm.hpp"

#include "Intern.hpp"

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



    ShrubberyCreationForm *good = new ShrubberyCreationForm();
    first->signForm(*good);
    good->createShrubbery(*first);
    RobotomyRequestForm *eee = new RobotomyRequestForm();
    eee->beSigned(*first);
    eee->robotomized(*first);
    eee->robotomized(*first);
    eee->robotomized(*first);
    eee->robotomized(*first);
    eee->robotomized(*first);
    eee->robotomized(*first);
    eee->robotomized(*first);
    eee->robotomized(*first);
    eee->robotomized(*first);
    eee->robotomized(*first);
    eee->robotomized(*first);
    eee->robotomized(*first);
    eee->robotomized(*first);
    eee->robotomized(*first);
    eee->robotomized(*first);
    eee->robotomized(*first);
    eee->robotomized(*first);
    eee->robotomized(*first);
    eee->robotomized(*first);


    PresidentialPardonForm* maki = new PresidentialPardonForm();
    maki->informs(*first);
    maki->informs(*first);
    maki->informs(*first);
    maki->informs(*first);
    maki->beSigned(*first);
    maki->informs(*first);
    maki->informs(*first);
    maki->informs(*first);
    maki->informs(*first);
    first->IncrementGrade();
    first->IncrementGrade();
    first->IncrementGrade();
    first->IncrementGrade();
    maki->informs(*first);
    maki->informs(*first);
    maki->informs(*first);
    maki->informs(*first);


    std::cout << "---------Intern part-----------" << std::endl;
    Intern helo;
    AForm* formd;

    // formd = helo.makeForm("PresidentialPardonForm", "bundries");
    formd = helo.makeForm("PresidentialPa", "s");
    if (formd == NULL)
        std::cout << "this is where the null stand" << std::endl;


}

