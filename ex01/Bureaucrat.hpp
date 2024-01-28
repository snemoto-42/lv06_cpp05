#pragma once

#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define RED     "\033[31m"

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	public:
		Bureaucrat(std::string const, unsigned int);
		~Bureaucrat();

		Bureaucrat(Bureaucrat const&);
		Bureaucrat & operator=(Bureaucrat const&);

		std::string const& getName(void) const;
		unsigned int const& getGrade(void) const;
		unsigned int incrementGrade(void);
		unsigned int decrementGrade(void);

		void signForm(Form &) const;

		class GradeTooHighException : public std::exception
		{
			public :
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public :
				const char* what() const throw();
		};

	private:
		std::string			_name;
		unsigned int		_grade;

		void _setGrade(unsigned int);
		void _setName(std::string const&);

		Bureaucrat();
};

std::ostream & operator<<(std::ostream &, Bureaucrat const&);
