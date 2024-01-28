#pragma once

#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define RED     "\033[31m"

#include <iostream>

#include "Bureaucrat.hpp"

class Form
{
	public:
		Form();
		~Form();
		Form(Form const&);
		Form & operator=(Form const &);

		std::string const& getName(void) const;
		bool const& getBeSigned(void) const;
		unsigned int const& getGrade(void) const;
		unsigned int const& getGradeForExecute(void) const;

		void besigned(Bureaucrat);

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
		std::string		_name;
		bool			_signed;
		unsigned int	_grade;
		unsigned int	_gradeForExecute;

};

std::ostream & operator<<(std::ostream &, Form const&);
