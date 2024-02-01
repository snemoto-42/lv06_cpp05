#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
{
	std::cout << GREEN << "PresidentialPardonForm : Default constructor called" << RESET << std::endl;
	setName("PresidentialPardonForm");
	setBeSigned(false);
	setGradeForSign(25);
	setGradeForExecute(5);
	_target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << GREEN << "PresidentialPardonForm : Destructor called" << RESET << std::endl;	
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& x)
{
	std::cout << GREEN << "PresidentialPardonForm : Copy constructor called" << RESET << std::endl;
	*this = x;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const& x)
{
	std::cout << GREEN << "PresidentialPardonForm : Copy assignment operator called" << RESET << std::endl;
	if (this != &x)
	{
		AForm::operator=(x);
	}
	return (*this);		
}

void PresidentialPardonForm::createForm() const
{
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

std::ostream& operator<<(std::ostream& os, PresidentialPardonForm const& b)
{
	os << ">>>" << std::endl;
	os << "These are " << b.getName() << " information." << std::endl;
	os << "Signed status : " << b.getBeSigned() << std::endl;
	os << "Required grade for sign : " << b.getGradeForSign() << std::endl;
	os << "Required grade for execute : " << b.getGradeForExecute() << std::endl;
	os << "<<<";
	return os;
}
