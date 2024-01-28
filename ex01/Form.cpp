#include "Form.hpp"

Form::Form():_signed(false) ,_gradeForExecute(10)
{
	std::cout << GREEN << "Bureaucrat : Default constructor called" << RESET << std::endl;
}

Form::~Form()
{
	std::cout << GREEN << "Form : Destructor called" << RESET << std::endl;	
}

Form::Form(Form const& x)
{
	std::cout << GREEN << "Form : Copy constructor called" << RESET << std::endl;
	*this = x;
}

Form& Form::operator=(Form const& x)
{
	std::cout << GREEN << "Form : Copy assignment operator called" << RESET << std::endl;
	if (this != &x)
	{
		_name = x._name;
		_signed = x._signed;
		_grade = x._grade;
		_gradeForExecute = x._gradeForExecute;
	}
	return (*this);		
}

std::string const& Form::getName(void) const
{
	return (_name);
}

bool const& Form::getBeSigned(void) const
{
	return (_signed);
}

unsigned int const& Form::getGrade(void) const
{
	return (_grade);
}

unsigned int const& Form::getGradeForExecute(void) const
{
	return (_gradeForExecute);
}

void Form::besigned(Bureaucrat obj)
{
	if (obj.getGrade() <= _gradeForExecute)
		_signed = true;
	else
		throw GradeTooLowException();

}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high!");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low!");
}

std::ostream& operator<<(std::ostream& os, Form const& b)
{
	os << b.getName() << std::endl;
	os << b.getBeSigned() << std::endl;
	os << b.getGrade() << std::endl;
	os << b.getGradeForExecute() << std::endl;
	return os;
}
