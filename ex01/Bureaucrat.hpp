
//includes
#pragma once
#include "iostream"
#include "Form.hpp"

class Form;

class Bureaucrat
{
    private:
        const std::string name;
        unsigned int grade;
    
    public:
        //orthodox form
        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat &operator=(const Bureaucrat &other);
        Bureaucrat(std::string name, unsigned int garde);
        Bureaucrat(const Bureaucrat &other);


        // exceptions part
        class GradeTooHighException : public std::exception
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

        //functions
        void IncrementGrade();
        void DecrementGrade();

        //added
        void signForm(Form& other) ;
};


std::ostream& operator<<(std::ostream& os, Bureaucrat const &oter);


