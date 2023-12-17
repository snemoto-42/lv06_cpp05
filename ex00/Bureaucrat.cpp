/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snemoto <snemoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:48:30 by snemoto           #+#    #+#             */
/*   Updated: 2023/12/17 14:39:52 by snemoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void Bureaucrat::_setGrade(unsigned int grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		_grade = grade;
}

Bureaucrat::Bureaucrat(const std::string& name, unsigned int grade) : _name(name)
{
	try
	{
		_setGrade(grade);
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << RED << "Exception: " << e.what() << RESET << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << RED << "Exception: " << e.what() << RESET << std::endl;
	}
	std::cout << GREEN << "Bureaucrat : Default constructor called" << RESET << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << GREEN << "Bureaucrat : Destructor called" << RESET << std::endl;	
}

Bureaucrat::Bureaucrat(const Bureaucrat& x)
{
	std::cout << GREEN << "Bureaucrat : Copy constructor called" << RESET << std::endl;
	*this = x;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& x)
{
	std::cout << GREEN << "Bureaucrat : Copy assignment operator called" << RESET << std::endl;
	if (this != &x)
		;
	return (*this);		
}

const std::string& Bureaucrat::getName(void) const
{
	return (_name);
}

const unsigned int& Bureaucrat::getGrade(void) const
{
	return (_grade);
}

unsigned int Bureaucrat::incrementGrade(void)
{
	try
	{
		_setGrade(_grade - 1);
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << RED << "Exception: " << e.what() << RESET << std::endl;
	}
	return (_grade);
}

unsigned int Bureaucrat::decrementGrade(void)
{
	try
	{
		_setGrade(_grade + 1);
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << RED << "Exception: " << e.what() << RESET << std::endl;
	}
	return (_grade);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low!");
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b)
{
	return os << GREEN << b.getName() << ", bureaucrat grade " << b.getGrade() << RESET;
}
