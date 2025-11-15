#include "Bureaucrat.hpp"


int main()
{
    try
    {
        Bureaucrat *r = new Bureaucrat("dib", 1000); 
        std::cout << r ;
    }
    catch(const std::exception& e)
    {
       std::cout << "can't creat the" << e.what();
    }
    
    Bureaucrat *first = new Bureaucrat("dib", 100); 
    
    std::cout << *first << std::endl;
    try
    {
        first->setGrade(100);
        first->IncrementGrade();
        first->IncrementGrade();
        first->IncrementGrade();
        first->IncrementGrade();
        first->IncrementGrade();
        first->DecrementGrade();
        first->DecrementGrade();
        first->DecrementGrade();
        first->DecrementGrade();
        first->DecrementGrade();
        first->DecrementGrade();
        first->DecrementGrade();
        first->DecrementGrade();
        first->DecrementGrade();
        first->DecrementGrade();
        first->DecrementGrade();
        first->DecrementGrade();
        first->DecrementGrade();
        first->DecrementGrade();
        first->DecrementGrade();
        first->DecrementGrade();
        first->DecrementGrade();
        first->DecrementGrade();
        first->DecrementGrade();
        first->DecrementGrade();
        first->DecrementGrade();
        first->DecrementGrade();
        first->DecrementGrade();
        first->DecrementGrade();
        first->DecrementGrade();
        first->DecrementGrade();

    }
    catch (std::exception &e)
    {

        std::cout << "errrror: "  << e.what() << std::endl;
    }

    delete first;
    return 0;
}

