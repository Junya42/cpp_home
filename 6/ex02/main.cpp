#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <exception>

Base	*generate( void )
{
	Base	*ptr;
	int		i;

	srand((unsigned)time(NULL));
	i = rand() % 3;

	switch(i)
	{
		case 0:
			ptr = new A;
			std::cout << "Generating a Class A pointer" << std::endl;
			break ;
		case 1:
			ptr = new B;
			std::cout << "Generating a Class B pointer" << std::endl;
			break ;
		case 2:
			ptr = new C;
			std::cout << "Generating a Class C pointer" << std::endl;
			break;
	}
	return (ptr);
}

void	identify(Base *p)
{
	std::cout << "Identify pointer" << std::endl;
	if (dynamic_cast<A *>(p))
		std::cout << "p type is A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "p type is B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "p type is C" << std::endl;
	else
		std::cout << "p is neither of type A, B or C" << std::endl;
}

void	identify(Base &p)
{
	Base	test;
	std::cout << "Identify reference" << std::endl;
	try
	{
		test = dynamic_cast<A &>(p);
		std::cout << "p type is A" << std::endl;
	}
	catch (std::exception &bc)
	{
		try
		{
			test = dynamic_cast<B &>(p);
			std::cout << "p type is B" << std::endl;
		}
		catch (std::exception &bc)
		{
			try
			{
				test = dynamic_cast<C &>(p);
				std::cout << "p type is C" << std::endl;
			}
			catch (std::exception &bc)
			{
				std::cout << "p is neither of type A, B or C" << std::endl;
			}
		}
	}
	(void)test;
}

int main(void)
{
	Base *p;

	p = generate();
	identify(p);
	identify(*p);

	delete p;
	return (0);
}
