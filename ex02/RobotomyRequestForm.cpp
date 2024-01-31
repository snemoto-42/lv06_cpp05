#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target)
{
	std::cout << GREEN << "RobotomyRequestForm : Default constructor called" << RESET << std::endl;
	setName("RobotomyRequestForm");
	setGradeForSign(72);
	setGradeForExecute(45);
	_target = target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << GREEN << "ShrubberyCreationForm : Destructor called" << RESET << std::endl;	
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& x)
{
	std::cout << GREEN << "RobotomyRequestForm : Copy constructor called" << RESET << std::endl;
	*this = x;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const& x)
{
	std::cout << GREEN << "RobotomyRequestForm : Copy assignment operator called" << RESET << std::endl;
	if (this != &x)
	{
		AForm::operator=(x);
	}
	return (*this);		
}

void RobotomyRequestForm::createForm() const
{
	std::time_t currentTime = std::time(NULL);
	std::srand(static_cast<unsigned int>(currentTime));
	unsigned int rnum = std::rand();
	// std::cout << "rnum : " << rnum << std::endl;
	if (rnum % 2 == 0)
		std::cout << _target << " has been robotomized successfully!" << std::endl;
	else
		std::cout << "the robotomy failed." << std::endl;
}

std::ostream& operator<<(std::ostream& os, RobotomyRequestForm const& b)
{
	os << ">>>" << std::endl;
	os << "These are " << b.getName() << " information." << std::endl;
	os << "Signed status : " << b.getBeSigned() << std::endl;
	os << "Required grade for sign : " << b.getGradeForSign() << std::endl;
	os << "Required grade for execute : " << b.getGradeForExecute() << std::endl;
	os << "<<<";
	return os;
}
