
#include "iostream"
#pragma once


class Bureaucrat
{
    private:
        const std::string  name;
        unsigned int grade;
    
    public:
        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat(std::string name, unsigned int garde);
        Bureaucrat &operator=(const Bureaucrat &other);
        Bureaucrat(const Bureaucrat &other);

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

        unsigned int getGrade() const;

        void setGrade(unsigned int grade);
        std::string getName() const;
        
        void IncrementGrade();
        void DecrementGrade();

};


std::ostream& operator<<(std::ostream& os, Bureaucrat const &oter);


