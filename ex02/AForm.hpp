

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
    const std::string  Name;
    bool               Flag;
    const unsigned int GradeToSign;
    const unsigned int GradeToExecute;
    // bool               ExecutedForm;
public:
    //orthodox Aform
    AForm();
    AForm(const AForm &other);
    AForm &operator=(const AForm &other);
    AForm(std::string name , bool flag, unsigned int GradeToSign,unsigned int GradeToExecute);
    virtual  ~AForm();



    // exception part 
    class GradeTooHighException : public std::exception
    {
        public:
            const char* what() const throw()
            {
                return "Grade Too High Exception, can't pass the action\n";
            }
    };
    class GradeTooLowException : public std::exception
    {
        public:
            const char* what() const throw()
            {
                return "Grade Too Low Exception, can't pass the action\n";
            }
    };
    
    // getters part
    virtual std::string  GetName()const;
    virtual bool         GetFlag()const;
    virtual unsigned int GetGradeToSign()const;
    virtual unsigned int GetGradeToExecute()const;

    // setters
    void SetFlag(bool flaged);

    
    //function to immplemment
    void beSigned(Bureaucrat &other);
    virtual int execute(Bureaucrat const & executor) = 0;
};


std::ostream  &operator<<(std::ostream &os,const AForm & other);
