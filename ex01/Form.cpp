#include "Form.hpp"

Form::Form():_name("42form") ,_signed(false) ,_gradeForSign(42) ,_gradeForExecute(21)
{
	std::cout << GREEN << "Form : Default constructor called" << RESET << std::endl;
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
		_gradeForSign = x._gradeForSign;
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

unsigned int const& Form::getGradeForSign(void) const
{
	return (_gradeForSign);
}

unsigned int const& Form::getGradeForExecute(void) const
{
	return (_gradeForExecute);
}

void Form::beSigned(Bureaucrat const& b)
{
	if (b.getGrade() <= _gradeForSign)
		_signed = true;
	else
		throw Form::GradeTooLowException();
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("[Form]Grade is too low!");
}

std::ostream& operator<<(std::ostream& os, Form const& b)
{
	os << ">>>" << std::endl;
	os << "These are " << b.getName() << " information." << std::endl;
	os << "Signed status : " << b.getBeSigned() << std::endl;
	os << "Required grade for sign : " << b.getGradeForSign() << std::endl;
	os << "Required grade for execute : " << b.getGradeForExecute() << std::endl;
	os << "<<<";
	return os;
}
