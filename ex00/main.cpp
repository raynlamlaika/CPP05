#include "Bureaucrat.hpp"





int main()
{
    Bureaucrat *first = new Bureaucrat(); 
    first->setName("rayane");
    first->setGrade(2);

    first->IncrementGrade();
    first->IncrementGrade();
    std::cout << *first << std::endl;
    // try{
    //     first->IncrementGrade();
    //     first->IncrementGrade();

    // }
    // catch (std::exception& e)
    // {

    //     std::cout << "errrror"  << std::endl;
    // }

    delete first;
    return 0;
}