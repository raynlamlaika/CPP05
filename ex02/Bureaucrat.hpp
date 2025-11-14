
//includes
#pragma once
#include "iostream"
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
    private:
        std::string name;
        unsigned int grade;
    
    public:
        //orthodox form
        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat &operator=(const Bureaucrat &other);
        Bureaucrat(const Bureaucrat &other);


        // exceptions part
        class GradeTooHighException : public std::exception // implemetntaion forbiden
        {
            public:
                const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw();
        };

        //getters and setters
        unsigned int getGrade() const;
        void setGrade(unsigned int grade);
        std::string getName() const;
        void setName(std::string name );

        //functions
        void IncrementGrade();
        void DecrementGrade();
        void executeForm(AForm  & form) const;

        //added
        void signForm(AForm& other) ;
};


std::ostream& operator<<(std::ostream& os, Bureaucrat const &oter);


