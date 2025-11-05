
#include "iostream"
#pragma once


class Bureaucrat
{
    private:
        std::string  name;
        unsigned int grade;
    
    public:
        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat &operator=(const Bureaucrat &other);
        Bureaucrat(const Bureaucrat &other);

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

        int getGrade() const;
        void setName(std::string name );

        void setGrade(unsigned int grade);
        std::string getName() const;
        
        void IncrementGrade();
        void DecrementGrade();
        
};


std::ostream& operator<<(std::ostream& os, Bureaucrat const &oter);


