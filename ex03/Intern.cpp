#include "Intern.hpp"

Intern::Intern()
{
	std::cout << GREEN << "Intern : Default constructor called" << RESET << std::endl;
}

Intern::~Intern()
{
	std::cout << GREEN << "Intern : Destructor called" << RESET << std::endl;	
}

Intern::Intern(Intern const& x)
{
	std::cout << GREEN << "Intern : Copy constructor called" << RESET << std::endl;
	*this = x;
}

Intern& Intern::operator=(Intern const& x)
{
	std::cout << GREEN << "Intern : Copy assignment operator called" << RESET << std::endl;
	if (this != &x)
	{
		*this = x;
	}
	return (*this);		
}

AForm * Intern::makeForm(std::string formName, std::string target)
{
	const char * const formArray[] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	size_t idx;

	for (idx = 0; idx < sizeof(formArray) / sizeof(*formArray); ++idx)
		if (formName.compare(formArray[idx]) == 0)
			break ;

	AForm * form = NULL;
	try
	{
		switch (idx)
		{
			case 0:
				form = new ShrubberyCreationForm(target);
				break ;
			case 1:
				form = new RobotomyRequestForm(target);
				break ;
			case 2:
				form = new PresidentialPardonForm(target);
				break ;
			default:
				std::cerr << "Intern makes the form unsuccessfully." << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (form);
}
