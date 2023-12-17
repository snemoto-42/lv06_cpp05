/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snemoto <snemoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:48:30 by snemoto           #+#    #+#             */
/*   Updated: 2023/12/17 14:43:52 by snemoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	std::cout << "\n<<< ex00 >>>" << std::endl;
	{
		std::cout << "\n--- start grade 1 ---" << std::endl;
		Bureaucrat b("snemoto", 1);
		std::cout << b.getName() << std::endl;
		std::cout << b.getGrade() << std::endl;
		b.incrementGrade();
		std::cout << b.getGrade() << std::endl;

		b.decrementGrade();
		std::cout << b.getGrade() << std::endl;
		b.incrementGrade();
		std::cout << b.getGrade() << std::endl;
		b.incrementGrade();
		std::cout << b.getGrade() << std::endl;
	}
	{
		std::cout << "\n--- start grade 150 ---" << std::endl;
		Bureaucrat b("snemoto", 150);
		std::cout << b.getName() << std::endl;
		std::cout << b.getGrade() << std::endl;
		b.decrementGrade();
		std::cout << b.getGrade() << std::endl;

		b.incrementGrade();
		std::cout << b.getGrade() << std::endl;
		b.decrementGrade();
		std::cout << b.getGrade() << std::endl;
		b.decrementGrade();
		std::cout << b.getGrade() << std::endl;
	}
	{
		std::cout << "\n--- can not initialize ---" << std::endl;
		Bureaucrat b("snemoto", 0);
		std::cout << b.getName() << std::endl;
		std::cout << b.getGrade() << std::endl;
	}
	{
		std::cout << "\n--- can not initialize ---" << std::endl;
		Bureaucrat b("", 1);
		std::cout << b.getName() << std::endl;
		std::cout << b.getGrade() << std::endl;
	}
	return 0;
}

#include <libc.h>
__attribute__((destructor))
static void destructor() {
std::cout << "\n";
system("leaks -q bureaucrat");
}
