#include "Bureaucrat.hpp"

int main()
{
	std::cout << "\n<<< ex00 >>>" << std::endl;
	{
		std::cout << "\n--- start grade 1 ---" << std::endl;
		Bureaucrat b("snemoto", 1);
		std::cout << b << std::endl;

		std::cout << "\n--- decrement ---" << std::endl;
		b.decrementGrade();
		std::cout << b << std::endl;

		std::cout << "\n--- increment ---" << std::endl;
		b.incrementGrade();
		std::cout << b << std::endl;

		std::cout << "\n--- too high ---" << std::endl;
		b.incrementGrade();
		std::cout << b << std::endl;
	}
	{
		std::cout << "\n--- start grade 150 ---" << std::endl;
		Bureaucrat b("snemoto", 150);
		std::cout << b << std::endl;

		std::cout << "\n--- increment ---" << std::endl;
		b.incrementGrade();
		std::cout << b << std::endl;

		std::cout << "\n--- decrement ---" << std::endl;
		b.decrementGrade();
		std::cout << b << std::endl;

		std::cout << "\n--- too low ---" << std::endl;
		b.decrementGrade();
		std::cout << b << std::endl;
	}
	{
		std::cout << "\n--- exception ---" << std::endl;
		Bureaucrat b("snemoto", 0);
		std::cout << b << std::endl;
	}
	{
		std::cout << "\n--- exception ---" << std::endl;
		Bureaucrat b("snemoto", -100);
		std::cout << b << std::endl;
	}
	{
		std::cout << "\n--- exception ---" << std::endl;
		Bureaucrat b("", 1);
		std::cout << b << std::endl;
	}
	{
		std::cout << "\n--- exception ---" << std::endl;
		Bureaucrat b(" ", -100);
		std::cout << b << std::endl;
	}
	{
		std::cout << "\n--- copy assignment test ---" << std::endl;
		Bureaucrat b("original", 1);
		Bureaucrat c("copy", 100);
		std::cout << b << std::endl;
		std::cout << c << std::endl;
		c = b;
		std::cout << b << std::endl;
		std::cout << c << std::endl;
	}
	{
		std::cout << "\n--- copy constructor test ---" << std::endl;
		Bureaucrat b("original", 1);
		Bureaucrat c(b);
		std::cout << b << std::endl;
		std::cout << c << std::endl;
	}
	return 0;
}

// #include <libc.h>
// __attribute__((destructor))
// static void destructor() {
// std::cout << "\n";
// system("leaks -q bureaucrat");
// }
