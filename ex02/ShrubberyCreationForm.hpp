

#include "AForm.hpp"
#include <fstream>
#include <iostream>

class ShrubberyCreationForm : public AForm
{
public:
    ShrubberyCreationForm();
    ~ShrubberyCreationForm();


    beSigned(Bureaucrat &other);
    


private:
    const std::string  Name;
    bool         Flag;
    const unsigned int GradeToSign;
    const unsigned int GradeToExecute;




}