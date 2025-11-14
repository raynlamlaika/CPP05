#include "Bureaucrat.hpp"





int main()
{
    Bureaucrat *first = new Bureaucrat("dib", 3); 
    // first->setName("rayane");
    
    
    // first->IncrementGrade();
    // first->IncrementGrade();
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