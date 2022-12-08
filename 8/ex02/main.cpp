#include "MutantStack.hpp"
#include <ios>

int main(int ac, char **av)
{
	std::string str;

	if (ac > 1)
		str = av[1];
	else
	{
		std::cout << "Usage: " << std::endl << std::endl <<
			"./Mutant" << std::endl <<
			"./Mutant deque" << std::endl <<
			"./Mutant vector" << std::endl <<
			"./Mutant list" << std::endl << std::endl;
	}

	if (ac == 1 || str == "deque")
	{
		std::cout << "DEQUE TEST" << std::endl;
		MutantStack<int> mstack;

		std::cout << std::boolalpha;
		std::cout << "\033[1;32mmstack.empty(): \033[0m" << mstack.empty() << std::endl;

		std::cout << "\033[1;34mPushing: \033[0m" << 5 << std::endl;
		mstack.push(5);

		std::cout << "\033[1;32mmstack.empty(): \033[0m" << mstack.empty() << std::endl;

		std::cout << "\033[1;34mPushing: \033[0m" << 17 << std::endl;
		mstack.push(17);

		std::cout << "\033[1;31mPopping top value: \033[0m" << mstack.top() << std::endl;
		mstack.pop();

		std::cout << "\033[1;33mmstack.size(): \033[0m" << mstack.size() << std::endl;

		std::cout << "\033[1;34mPushing: \033[0m" << 3 << std::endl;
		mstack.push(3);
		std::cout << "\033[1;34mPushing: \033[0m" << 5 << std::endl;
		mstack.push(5);
		std::cout << "\033[1;34mPushing: \033[0m" << 737 << std::endl;
		mstack.push(737);
		std::cout << "\033[1;34mPushing: \033[0m" << 0 << std::endl << std::endl;
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;
		std::cout << "Printing default stack values: " << std::endl;
		while (it != ite)
		{
			--ite;
			std::cout << " ● " << *ite << std::endl;
		}
		std::cout << std::endl;

		MutantStack<int> copystack(mstack);

		MutantStack<int>::iterator cit = copystack.begin();
		MutantStack<int>::iterator cite = copystack.end();

		std::cout << "Printing copied stack values: " << std::endl;
		while (cit != cite)
		{
			--cite;
			std::cout << " ● " << *cite << std::endl;
		}
		std::cout << std::endl << std::endl;
		std::stack<int> s(mstack);
	}
	else if (str == "vector")
	{
		std::cout << "VECTOR TEST" << std::endl;
		MutantStack<int> mstack;

		std::cout << std::boolalpha;
		std::cout << "\033[1;32mmstack.empty(): \033[0m" << mstack.empty() << std::endl;

		std::cout << "\033[1;34mPushing: \033[0m" << 5 << std::endl;
		mstack.push(5);

		std::cout << "\033[1;32mmstack.empty(): \033[0m" << mstack.empty() << std::endl;

		std::cout << "\033[1;34mPushing: \033[0m" << 17 << std::endl;
		mstack.push(17);

		std::cout << "\033[1;31mPopping top value: \033[0m" << mstack.top() << std::endl;
		mstack.pop();

		std::cout << "\033[1;33mmstack.size(): \033[0m" << mstack.size() << std::endl;

		std::cout << "\033[1;34mPushing: \033[0m" << 3 << std::endl;
		mstack.push(3);
		std::cout << "\033[1;34mPushing: \033[0m" << 5 << std::endl;
		mstack.push(5);
		std::cout << "\033[1;34mPushing: \033[0m" << 737 << std::endl;
		mstack.push(737);
		std::cout << "\033[1;34mPushing: \033[0m" << 0 << std::endl << std::endl;
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;
		std::cout << "Printing default stack values: " << std::endl;
		while (it != ite)
		{
			--ite;
			std::cout << " ● " << *ite << std::endl;
		}
		std::cout << std::endl;

		MutantStack<int> copystack(mstack);

		MutantStack<int>::iterator cit = copystack.begin();
		MutantStack<int>::iterator cite = copystack.end();

		std::cout << "Printing copied stack values: " << std::endl;
		while (cit != cite)
		{
			--cite;
			std::cout << " ● " << *cite << std::endl;
		}
		std::cout << std::endl << std::endl;
		std::stack<int> s(mstack);
	}
	else if (str == "list")
	{
		std::cout << "LIST TEST" << std::endl;
		MutantStack<int> mstack;

		std::cout << std::boolalpha;
		std::cout << "\033[1;32mmstack.empty(): \033[0m" << mstack.empty() << std::endl;

		std::cout << "\033[1;34mPushing: \033[0m" << 5 << std::endl;
		mstack.push(5);

		std::cout << "\033[1;32mmstack.empty(): \033[0m" << mstack.empty() << std::endl;

		std::cout << "\033[1;34mPushing: \033[0m" << 17 << std::endl;
		mstack.push(17);

		std::cout << "\033[1;31mPopping top value: \033[0m" << mstack.top() << std::endl;
		mstack.pop();

		std::cout << "\033[1;33mmstack.size(): \033[0m" << mstack.size() << std::endl;

		std::cout << "\033[1;34mPushing: \033[0m" << 3 << std::endl;
		mstack.push(3);
		std::cout << "\033[1;34mPushing: \033[0m" << 5 << std::endl;
		mstack.push(5);
		std::cout << "\033[1;34mPushing: \033[0m" << 737 << std::endl;
		mstack.push(737);
		std::cout << "\033[1;34mPushing: \033[0m" << 0 << std::endl << std::endl;
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;
		std::cout << "Printing default stack values: " << std::endl;
		while (it != ite)
		{
			--ite;
			std::cout << " ● " << *ite << std::endl;
		}
		std::cout << std::endl;

		MutantStack<int> copystack(mstack);

		MutantStack<int>::iterator cit = copystack.begin();
		MutantStack<int>::iterator cite = copystack.end();

		std::cout << "Printing copied stack values: " << std::endl;
		while (cit != cite)
		{
			--cite;
			std::cout << " ● " << *cite << std::endl;
		}
		std::cout << std::endl << std::endl;
		std::stack<int> s(mstack);
	}
	return 0;
}
