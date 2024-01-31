#pragma once

#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define RED     "\033[31m"

#include <iostream>
#include <fstream>

#include "AForm.hpp"

class ShrubberyCreationForm : AForm
{
	public:
		ShrubberyCreationForm(std::string);
		virtual ~ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm const&);
		ShrubberyCreationForm & operator=(ShrubberyCreationForm const&);

		void createForm() const;

	private:
		std::string _target;

};
