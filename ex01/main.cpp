#include "Bureaucrat.hpp"





int main()
{
    Bureaucrat *first = new Bureaucrat("raayane", 120);
    first->setGrade(122);

    first->IncrementGrade();
    first->IncrementGrade();
    std::cout << *first << std::endl;
    try{
        first->IncrementGrade();
        first->IncrementGrade();

    }
    catch (std::exception& e)
    {

        std::cout << "errrror"  << std::endl;
    }



    std::cout << "the firm pasrt" << std::endl;
    // creatimg in form 
    Form *chahada = new Form("pardona", 102, 120);
    std::cout << *chahada << std::endl;
    try
    {
        chahada->beSigned(*first);
        chahada->beSigned(*first);
        chahada->beSigned(*first);
        first->signForm(*chahada);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what();
    }
    
    delete first;
    delete chahada;
    return 0;
}