#pragma once

#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define RED     "\033[31m"

#include <iostream>
#include <fstream>
#include <cstdlib>

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm(std::string);
		virtual ~PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm const&);
		PresidentialPardonForm & operator=(PresidentialPardonForm const&);

		void createForm() const;

	private:
		std::string _target;

};

std::ostream & operator<<(std::ostream &, PresidentialPardonForm const&);
