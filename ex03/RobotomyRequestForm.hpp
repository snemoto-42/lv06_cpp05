#pragma once

#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define RED     "\033[31m"

#include <iostream>
#include <fstream>
#include <cstdlib>

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm(std::string);
		virtual ~RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm const&);
		RobotomyRequestForm & operator=(RobotomyRequestForm const&);

		void createForm() const;

	private:
		std::string _target;

};

std::ostream & operator<<(std::ostream &, RobotomyRequestForm const&);
