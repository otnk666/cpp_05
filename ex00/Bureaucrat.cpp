#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, const int &grade) : _name(name), _grade(grade)
{
    std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
{
    std::cout << "Bureaucrat copy constructor called" << std::endl;
    if (this != &other)
    {
        this->_name = other._name;
        this->_grade = other._grade;
    }
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
    std::cout << "Bureaucrat copy assigment operator called" << std::endl;
    if (this != &other)
    {
        this->_name = other._name;
        this->_grade = other._grade;
    }
    return *this;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor called" << std::endl;
}

std::string Bureaucrat::getName() const
{
    return this->_name;
}

int Bureaucrat::getGrade() const
{
    return this->_grade;
}

void Bureaucrat::incrementGrade()
{
    if (_grade <= 1) {
        throw GradeTooHighExeption();
    }
    --_grade;
}

void Bureaucrat::decrementGrade()
{
    if (_grade >= 150) {
        throw GradeTooLowExeption();
    }
    ++_grade;
}

const char* Bureaucrat::GradeTooHighExeption::what() const throw() {
    return "Grade is too high";
}

const char* Bureaucrat::GradeTooLowExeption::what() const throw() {
    return "Grade is too low";
}
