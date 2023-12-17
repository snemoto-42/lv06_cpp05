/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snemoto <snemoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:48:30 by snemoto           #+#    #+#             */
/*   Updated: 2023/12/17 14:44:18 by snemoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __BUREAUCRAT_HPP__
#define __BUREAUCRAT_HPP__

#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define RED     "\033[31m"

#include <iostream>

class Bureaucrat
{
	public:
		Bureaucrat( const std::string&, unsigned int );
		~Bureaucrat();
		Bureaucrat( const Bureaucrat& );
		Bureaucrat& operator=( const Bureaucrat& );
		const std::string& getName( void ) const;
		const unsigned int& getGrade( void ) const;
		unsigned int incrementGrade( void );
		unsigned int decrementGrade( void );

		class GradeTooHighException : public std::exception	{
			public :
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public :
				const char* what() const throw();
		};

	private:
		const std::string	_name;
		unsigned int		_grade;
		void _setGrade( unsigned int );
};

std::ostream& operator<<( std::ostream&, const Bureaucrat& );

#endif /* __BUREAUCRAT_HPP__ */
