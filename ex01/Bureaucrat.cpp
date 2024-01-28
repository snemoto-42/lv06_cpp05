#include "Bureaucrat.hpp"

void Bureaucrat::_setName(std::string const& name)
{
	if (name.empty())
	{
		_name = "Invalid name";
		throw std::runtime_error("Invalid name");
	}
	size_t pos = name.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
	if (pos == std::string::npos)
		_name = name;
	else
	{
		_name = "Invalid name";
		throw std::runtime_error("Invalid name");
	}
}

void Bureaucrat::_setGrade(unsigned int grade)
{
	if (grade < 1)
	{
		_grade = 0;
		throw GradeTooHighException();
	}
	else if (grade > 150)
	{
		_grade = 0;
		throw GradeTooLowException();
	}
	else
		_grade = grade;
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade)
{
	std::cout << GREEN << "Bureaucrat : Default constructor called" << RESET << std::endl;
	try
	{
		_setName(name);
	}
	catch(std::exception & e)
	{
		std::cerr << RED << "Exception: " << e.what() << RESET << std::endl;
	}	
	try
	{
		_setGrade(grade);
	}
	catch(Bureaucrat::GradeTooHighException const& e)
	{
		std::cerr << RED << "Exception: " << e.what() << RESET << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException const& e)
	{
		std::cerr << RED << "Exception: " << e.what() << RESET << std::endl;
	}
}

Bureaucrat::~Bureaucrat()
{
	std::cout << GREEN << "Bureaucrat : Destructor called" << RESET << std::endl;	
}

Bureaucrat::Bureaucrat(Bureaucrat const& x)
{
	std::cout << GREEN << "Bureaucrat : Copy constructor called" << RESET << std::endl;
	*this = x;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const& x)
{
	std::cout << GREEN << "Bureaucrat : Copy assignment operator called" << RESET << std::endl;
	if (this != &x)
	{
		_name = x._name;
		_grade = x._grade;
	}
	return (*this);		
}

std::string const& Bureaucrat::getName(void) const
{
	return (_name);
}

unsigned int const& Bureaucrat::getGrade(void) const
{
	return (_grade);
}

unsigned int Bureaucrat::incrementGrade(void)
{
	try
	{
		_setGrade(_grade - 1);
	}
	catch(Bureaucrat::GradeTooHighException const& e)
	{
		std::cerr << RED << "Exception: " << e.what() << RESET << std::endl;
	}
	return (_grade);
}

unsigned int Bureaucrat::decrementGrade(void)
{
	try
	{
		_setGrade(_grade + 1);
	}
	catch(Bureaucrat::GradeTooLowException const& e)
	{
		std::cerr << RED << "Exception: " << e.what() << RESET << std::endl;
	}
	return (_grade);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("[Bureaucrat]Grade is too high!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("[Bureaucrat]Grade is too low!");
}

std::ostream& operator<<(std::ostream& os, Bureaucrat const& b)
{
	return os << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
}

void Bureaucrat::signForm(Form & f) const
{
	try
	{
		f.beSigned(*this);
		std::cout  << _name << " signed " << f.getName() << std::endl;
	}
	catch (Form::GradeTooLowException const& e)
	{
		std::cout  << _name << " couldn't sign " << f.getName() << " because " << e.what() << "." << std::endl;
	}
}
