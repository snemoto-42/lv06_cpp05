#include "AForm.hpp"

// AForm::AForm(std::string name, unsigned int gradeForSign, unsigned int gradeForExecute):_name(name) ,_signed(false) ,_gradeForSign(gradeForSign) ,_gradeForExecute(gradeForExecute)
// {
// 	std::cout << GREEN << "AForm :  Constructor called" << RESET << std::endl;
// }

// AForm::AForm():_name("42form") ,_signed(false) ,_gradeForSign(42) ,_gradeForExecute(21)
// {
// 	std::cout << GREEN << "AForm : Default constructor called" << RESET << std::endl;
// }

// AForm::AForm(AForm const& x)
// {
// 	std::cout << GREEN << "AForm : Copy constructor called" << RESET << std::endl;
// 	*this = x;
// }

// AForm& AForm::operator=(AForm const& x)
// {
// 	std::cout << GREEN << "AForm : Copy assignment operator called" << RESET << std::endl;
// 	if (this != &x)
// 	{
// 		_name = x._name;
// 		_signed = x._signed;
// 		_gradeForSign = x._gradeForSign;
// 		_gradeForExecute = x._gradeForExecute;
// 	}
// 	return (*this);		
// }

AForm::~AForm()
{
	std::cout << GREEN << "AForm : Destructor called" << RESET << std::endl;	
}

std::string const& AForm::getName(void) const
{
	return (_name);
}

bool const& AForm::getBeSigned(void) const
{
	return (_signed);
}

unsigned int const& AForm::getGradeForSign(void) const
{
	return (_gradeForSign);
}

unsigned int const& AForm::getGradeForExecute(void) const
{
	return (_gradeForExecute);
}

void AForm::setName(std::string const& name){_name = name;}

void AForm::setBeSigned(void){_signed = true;}

void AForm::setGradeForSign(unsigned int unum){_gradeForSign = unum;}

void AForm::setGradeForExecute(unsigned int unum){_gradeForExecute = unum;}

void AForm::beSigned(Bureaucrat const& b)
{
	if (b.getGrade() <= _gradeForSign)
		setBeSigned();
	else
		throw AForm::GradeTooLowException();
}

void AForm::execute(Bureaucrat const& executor) const
{
	if (getBeSigned() == false)
		throw NoSignedException();
	if (executor.getGrade() > _gradeForExecute)
		throw AForm::GradeTooLowException();
	else
		createForm();
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too low!");
}

const char* AForm::NoSignedException::what() const throw()
{
	return ("The form is not signed yet!");
}

// std::ostream& operator<<(std::ostream& os, AForm const& b)
// {
// 	os << ">>>" << std::endl;
// 	os << "These are " << b.getName() << " information." << std::endl;
// 	os << "Signed status : " << b.getBeSigned() << std::endl;
// 	os << "Required grade for sign : " << b.getGradeForSign() << std::endl;
// 	os << "Required grade for execute : " << b.getGradeForExecute() << std::endl;
// 	os << "<<<";
// 	return os;
// }
