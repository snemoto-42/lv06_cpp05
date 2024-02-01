#pragma once

#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define RED     "\033[31m"

#include <iostream>

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public:
		// AForm();
		// AForm(std::string, unsigned int, unsigned int);
		// AForm(AForm const&);
		// AForm & operator=(AForm const &);
		virtual ~AForm();

		std::string const& getName(void) const;
		bool const& getBeSigned(void) const;
		unsigned int const& getGradeForSign(void) const;
		unsigned int const& getGradeForExecute(void) const;

		void setName(std::string const&);
		void setBeSigned(bool);
		void setGradeForSign(unsigned int);
		void setGradeForExecute(unsigned int);

		void beSigned(Bureaucrat const&);
		void execute(Bureaucrat const&) const;
		virtual void createForm() const = 0;

		class GradeTooLowException : public std::exception
		{
			public :
				const char* what() const throw();
		};
		class NoSignedException : public std::exception
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

// std::ostream & operator<<(std::ostream &, AForm const&);
