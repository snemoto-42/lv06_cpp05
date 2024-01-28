#pragma once

#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define RED     "\033[31m"

#include <iostream>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form();
		~Form();
		Form(Form const&);
		Form & operator=(Form const &);

		std::string const& getName(void) const;
		bool const& getBeSigned(void) const;
		unsigned int const& getGradeForSign(void) const;
		unsigned int const& getGradeForExecute(void) const;

		void beSigned(Bureaucrat const&);

		class GradeTooLowException : public std::exception
		{
			public :
				const char* what() const throw();
		};

	private:
		std::string		_name;
		bool			_signed;
		unsigned int	_gradeForSign;
		unsigned int	_gradeForExecute;

};

std::ostream & operator<<(std::ostream &, Form const&);
