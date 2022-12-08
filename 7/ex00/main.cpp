#include "whatever.hpp"

int main()
{
	{
		char x = 'a';
		char y = 'c';

		std::cout << "\033[1;31m char test \033[0m" << std::endl;
		std::cout << "x equals: " << x << std::endl;
		std::cout << "y equals: " << y << std::endl << std::endl;

		std::cout << "min: " << ::min(x, y) << std::endl;
		std::cout << "max: " << ::max(x, y) << std::endl;
		std::cout << "After swaping" << std::endl;
		::swap(x, y);
		std::cout << "x equals: " << x << std::endl;
		std::cout << "y equals: " << y << std::endl << std::endl << std::endl;
	}
	{
		int x = 21;
		int y = 42;

		std::cout << "\033[1;31m int test \033[0m" << std::endl;
		std::cout << "x equals: " << x << std::endl;
		std::cout << "y equals: " << y << std::endl << std::endl;

		std::cout << "min: " << ::min(x, y) << std::endl;
		std::cout << "max: " << ::max(x, y) << std::endl;
		std::cout << "After swaping" << std::endl;
		::swap(x, y);
		std::cout << "x equals: " << x << std::endl;
		std::cout << "y equals: " << y << std::endl << std::endl << std::endl;
	}
	{
		float x = 3.5f;
		float y = 6.2f;

		std::cout << "\033[1;31m float test \033[0m" << std::endl;
		std::cout << "x equals: " << x << std::endl;
		std::cout << "y equals: " << y << std::endl << std::endl;

		std::cout << "min: " << ::min(x, y) << std::endl;
		std::cout << "max: " << ::max(x, y) << std::endl;
		std::cout << "After swaping" << std::endl;
		::swap(x, y);
		std::cout << "x equals: " << x << std::endl;
		std::cout << "y equals: " << y << std::endl << std::endl << std::endl;
	}
	{
		std::string x = "hello";
		std::string y = "world";

		std::cout << "\033[1;31m string test \033[0m" << std::endl;
		std::cout << "x equals: " << x << std::endl;
		std::cout << "y equals: " << y << std::endl << std::endl;

		std::cout << "min: " << ::min(x, y) << std::endl;
		std::cout << "max: " << ::max(x, y) << std::endl;
		std::cout << "After swaping" << std::endl;
		::swap(x, y);
		std::cout << "x equals: " << x << std::endl;
		std::cout << "y equals: " << y << std::endl << std::endl << std::endl;
	}
}
