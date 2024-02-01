#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
{
	std::cout << GREEN << "ShrubberyCreationForm : Default constructor called" << RESET << std::endl;
	setName("ShrubberyCreationForm");
	setBeSigned(false);
	setGradeForSign(145);
	setGradeForExecute(137);
	_target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << GREEN << "ShrubberyCreationForm : Destructor called" << RESET << std::endl;	
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& x)
{
	std::cout << GREEN << "ShrubberyCreationForm : Copy constructor called" << RESET << std::endl;
	*this = x;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const& x)
{
	std::cout << GREEN << "ShrubberyCreationForm : Copy assignment operator called" << RESET << std::endl;
	if (this != &x)
	{
		AForm::operator=(x);
	}
	return (*this);		
}

void ShrubberyCreationForm::createForm() const
{
	std::string fileName = _target + "_shrubbery";
	std::ofstream outputFile(fileName);

	if (outputFile.is_open())
	{
		outputFile << "    ccee88oo" << std::endl;
        outputFile << " C8O8O8Q8PoOb o8oo" << std::endl;
        outputFile << "dOB69QO8PdUOpugoO9bD" << std::endl;
        outputFile << "CgggbU8OU qOpugoO8buU8Pd" << std::endl;
        outputFile << "   6OuU 7P U O8PdU7 7bU" << std::endl;
        outputFile << " 77U 78 7P 8 O8P 8 7b" << std::endl;

		outputFile.close();
		std::cout << fileName << " is created successfully!" << std::endl;
	}
	else
	{
		std::cerr << "Unable to open " << fileName << std::endl;
	}
}

std::ostream& operator<<(std::ostream& os, ShrubberyCreationForm const& b)
{
	os << ">>>" << std::endl;
	os << "These are " << b.getName() << " information." << std::endl;
	os << "Signed status : " << b.getBeSigned() << std::endl;
	os << "Required grade for sign : " << b.getGradeForSign() << std::endl;
	os << "Required grade for execute : " << b.getGradeForExecute() << std::endl;
	os << "<<<";
	return os;
}
