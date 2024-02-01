#include "Bureaucrat.hpp"
// #include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include "Intern.hpp"

int main()
{
	std::cout << "\n<<< ex03 >>>" << std::endl;
	std::cout << "\n<<< ShrubberyCreationForm >>>" << std::endl;
	{
		std::cout << "\n--- Intern makes the form successfully ---" << std::endl;
		Bureaucrat b("snemoto", 1);
		std::cout << b << std::endl;
		Intern i;
		AForm * f = i.makeForm("ShrubberyCreationForm", "TEST");
		if (f)
		{
			std::cout << *f << std::endl;
			b.signForm(*f);
			b.executeForm(*f);
			std::cout << *f << std::endl;
			delete f;
		}
	}
	{
		std::cout << "\n--- Intern makes the form unsuccessfully ---" << std::endl;
		Bureaucrat b("snemoto", 1);
		std::cout << b << std::endl;
		Intern i;
		AForm * f = i.makeForm("ShrubberyCreation", "TEST");
		if (f)
		{
			std::cout << *f << std::endl;
			b.signForm(*f);
			b.executeForm(*f);
			std::cout << *f << std::endl;
			delete f;
		}
	}
	std::cout << "\n<<< RobotomyRequestForm >>>" << std::endl;
	{
		std::cout << "\n--- Intern makes the form successfully ---" << std::endl;
		Bureaucrat b("snemoto", 1);
		std::cout << b << std::endl;
		Intern i;
		AForm * f = i.makeForm("RobotomyRequestForm", "TEST");
		if (f)
		{
			std::cout << *f << std::endl;
			b.signForm(*f);
			b.executeForm(*f);
			std::cout << *f << std::endl;
			delete f;
		}
	}
	{
		std::cout << "\n--- Intern makes the form unsuccessfully ---" << std::endl;
		Bureaucrat b("snemoto", 1);
		std::cout << b << std::endl;
		Intern i;
		AForm * f = i.makeForm("RobotomyRequest", "TEST");
		if (f)
		{
			std::cout << *f << std::endl;
			b.signForm(*f);
			b.executeForm(*f);
			std::cout << *f << std::endl;
			delete f;
		}
	}
	std::cout << "\n<<< PresidentialPardonForm >>>" << std::endl;
	{
		std::cout << "\n--- Intern makes the form successfully ---" << std::endl;
		Bureaucrat b("snemoto", 1);
		std::cout << b << std::endl;
		Intern i;
		AForm * f = i.makeForm("PresidentialPardonForm", "TEST");
		if (f)
		{
			std::cout << *f << std::endl;
			b.signForm(*f);
			b.executeForm(*f);
			std::cout << *f << std::endl;
			delete f;
		}
	}
	{
		std::cout << "\n--- Intern makes the form unsuccessfully ---" << std::endl;
		Bureaucrat b("snemoto", 1);
		std::cout << b << std::endl;
		Intern i;
		AForm * f = i.makeForm("PresidentialPardon", "TEST");
		if (f)
		{
			std::cout << *f << std::endl;
			b.signForm(*f);
			b.executeForm(*f);
			std::cout << *f << std::endl;
			delete f;
		}
	}
	// std::cout << "\n<<< ex02 >>>" << std::endl;
	// std::cout << "\n<<< ShrubberyCreationForm >>>" << std::endl;
	// {
	// 	std::cout << "\n--- sign & execute ---" << std::endl;
	// 	Bureaucrat b("snemoto", 1);
	// 	std::cout << b << std::endl;
	// 	ShrubberyCreationForm f("TEST");
	// 	std::cout << f << std::endl;
	// 	b.signForm(f);
	// 	b.executeForm(f);
	// 	std::cout << f << std::endl;
	// }
	// {
	// 	std::cout << "\n--- only sign ---" << std::endl;
	// 	Bureaucrat b("snemoto", 140);
	// 	std::cout << b << std::endl;
	// 	ShrubberyCreationForm f("TEST");
	// 	std::cout << f << std::endl;
	// 	b.signForm(f);
	// 	b.executeForm(f);
	// 	std::cout << f << std::endl;
	// }
	// {
	// 	std::cout << "\n--- notihing ---" << std::endl;
	// 	Bureaucrat b("snemoto", 150);
	// 	std::cout << b << std::endl;
	// 	ShrubberyCreationForm f("TEST");
	// 	std::cout << f << std::endl;
	// 	b.signForm(f);
	// 	b.executeForm(f);
	// 	std::cout << f << std::endl;
	// }
	// std::cout << "\n<<< RobotomyRequestForm >>>" << std::endl;
	// {
	// 	std::cout << "\n--- sign & execute ---" << std::endl;
	// 	Bureaucrat b("snemoto", 1);
	// 	std::cout << b << std::endl;
	// 	RobotomyRequestForm f("TEST");
	// 	std::cout << f << std::endl;
	// 	b.signForm(f);
	// 	b.executeForm(f);
	// 	std::cout << f << std::endl;
	// }
	// {
	// 	std::cout << "\n--- only sign ---" << std::endl;
	// 	Bureaucrat b("snemoto", 70);
	// 	std::cout << b << std::endl;
	// 	RobotomyRequestForm f("TEST");
	// 	std::cout << f << std::endl;
	// 	b.signForm(f);
	// 	b.executeForm(f);
	// 	std::cout << f << std::endl;
	// }
	// {
	// 	std::cout << "\n--- notihing ---" << std::endl;
	// 	Bureaucrat b("snemoto", 80);
	// 	std::cout << b << std::endl;
	// 	RobotomyRequestForm f("TEST");
	// 	std::cout << f << std::endl;
	// 	b.signForm(f);
	// 	b.executeForm(f);
	// 	std::cout << f << std::endl;
	// }
	// std::cout << "\n<<< PresidentialPardonForm >>>" << std::endl;
	// {
	// 	std::cout << "\n--- sign & execute ---" << std::endl;
	// 	Bureaucrat b("snemoto", 1);
	// 	std::cout << b << std::endl;
	// 	PresidentialPardonForm f("TEST");
	// 	std::cout << f << std::endl;
	// 	b.signForm(f);
	// 	b.executeForm(f);
	// 	std::cout << f << std::endl;
	// }
	// {
	// 	std::cout << "\n--- only sign ---" << std::endl;
	// 	Bureaucrat b("snemoto", 20);
	// 	std::cout << b << std::endl;
	// 	PresidentialPardonForm f("TEST");
	// 	std::cout << f << std::endl;
	// 	b.signForm(f);
	// 	b.executeForm(f);
	// 	std::cout << f << std::endl;
	// }
	// {
	// 	std::cout << "\n--- notihing ---" << std::endl;
	// 	Bureaucrat b("snemoto", 30);
	// 	std::cout << b << std::endl;
	// 	PresidentialPardonForm f("TEST");
	// 	std::cout << f << std::endl;
	// 	b.signForm(f);
	// 	b.executeForm(f);
	// 	std::cout << f << std::endl;
	// }
	// std::cout << "\n<<< ex01 >>>" << std::endl;
	// {
	// 	std::cout << "\n--- signed test ---" << std::endl;
	// 	Bureaucrat b("snemoto", 1);
	// 	std::cout << b << std::endl;
	// 	Form f;
	// 	std::cout << f << std::endl;
	// 	b.signForm(f);
	// }
	// {
	// 	std::cout << "\n--- Non-signed test ---" << std::endl;
	// 	Bureaucrat b("snemoto", 43);
	// 	std::cout << b << std::endl;
	// 	Form f;
	// 	std::cout << f << std::endl;
	// 	b.signForm(f);
		
	// 	std::cout << "\n--- after grade up ---" << std::endl;
	// 	b.incrementGrade();
	// 	std::cout << b << std::endl;
	// 	b.signForm(f);
	// }
	// std::cout << "\n<<< ex00 >>>" << std::endl;
	// {
	// 	std::cout << "\n--- start grade 1 ---" << std::endl;
	// 	Bureaucrat b("snemoto", 1);
	// 	std::cout << b << std::endl;

	// 	std::cout << "\n--- decrement ---" << std::endl;
	// 	b.decrementGrade();
	// 	std::cout << b << std::endl;

	// 	std::cout << "\n--- increment ---" << std::endl;
	// 	b.incrementGrade();
	// 	std::cout << b << std::endl;

	// 	std::cout << "\n--- too high ---" << std::endl;
	// 	b.incrementGrade();
	// 	std::cout << b << std::endl;
	// }
	// {
	// 	std::cout << "\n--- start grade 150 ---" << std::endl;
	// 	Bureaucrat b("snemoto", 150);
	// 	std::cout << b << std::endl;

	// 	std::cout << "\n--- increment ---" << std::endl;
	// 	b.incrementGrade();
	// 	std::cout << b << std::endl;

	// 	std::cout << "\n--- decrement ---" << std::endl;
	// 	b.decrementGrade();
	// 	std::cout << b << std::endl;

	// 	std::cout << "\n--- too low ---" << std::endl;
	// 	b.decrementGrade();
	// 	std::cout << b << std::endl;
	// }
	// {
	// 	std::cout << "\n--- exception ---" << std::endl;
	// 	Bureaucrat b("snemoto", 0);
	// 	std::cout << b << std::endl;
	// }
	// {
	// 	std::cout << "\n--- exception ---" << std::endl;
	// 	Bureaucrat b("snemoto", -100);
	// 	std::cout << b << std::endl;
	// }
	// {
	// 	std::cout << "\n--- exception ---" << std::endl;
	// 	Bureaucrat b("", 1);
	// 	std::cout << b << std::endl;
	// }
	// {
	// 	std::cout << "\n--- exception ---" << std::endl;
	// 	Bureaucrat b(" ", -100);
	// 	std::cout << b << std::endl;
	// }
	// {
	// 	std::cout << "\n--- copy assignment test ---" << std::endl;
	// 	Bureaucrat b("original", 1);
	// 	Bureaucrat c("copy", 100);
	// 	std::cout << b << std::endl;
	// 	std::cout << c << std::endl;
	// 	c = b;
	// 	std::cout << b << std::endl;
	// 	std::cout << c << std::endl;
	// }
	// {
	// 	std::cout << "\n--- copy constructor test ---" << std::endl;
	// 	Bureaucrat b("original", 1);
	// 	Bureaucrat c(b);
	// 	std::cout << b << std::endl;
	// 	std::cout << c << std::endl;
	// }
	return 0;
}

#include <libc.h>
__attribute__((destructor))
static void destructor() {
std::cout << "\n";
system("leaks -q bureaucrat");
}
