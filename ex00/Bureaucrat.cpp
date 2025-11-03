
#include "iostream"


class Bureaucrat
{
    private:
        std::string name;
        int grade;
    
    public:
        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat &operator=(const Bureaucrat &other);
        Bureaucrat(const Bureaucrat &other);



        void GradeTooHighException();
        void GradeTooLowException();
        int getGrade() const;
        void setGrade();
        std::string getName() const;
        void setGrade();
        void IncrementGrade();
        void DecrementGrade();
}