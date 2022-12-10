#include "Array.hpp"
#include <exception>
#include <string>

#define MAX_VAL 750

	template< typename T>
std::ostream &operator<<(std::ostream &nstream, Array<T> &src)
{
	if (src.size() > 0)
		for (unsigned int i = 0; i < src.size(); i++)
			nstream << src[i] << " ";
	else
		nstream << "Empty array";
	nstream << std::endl;

	return nstream;
}

int main(void)
{
	srand(time(NULL));
	{
		std::cout << "\033[1;44mDefault template <int> test\033[0m" << std::endl;
		Array<int> tab(10);
		for (unsigned int i = 0; i < tab.size(); i++)
			tab[i] = rand() % 100;
		try {
			std::cout << "Trying to print tab[2] value with size of tab equal " << tab.size() << std::endl;
			std::cout << tab[2] << std::endl << std::endl;

			std::cout << "Trying to print tab[15] value with size of tab equal " << tab.size() << std::endl;
			std::cout << tab[15] << std::endl;
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}

		Array<int> tabvoid;
		try {
			std::cout << "Trying to print tabvoid[0] value while tabvoid is still NULL" << std::endl;
			std::cout << tabvoid[0] << std::endl;
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
		tabvoid = tab;

		Array<int> tabcopy(tabvoid);

		std::cout << "Tab(10): " << std::endl << tab << std::endl;
		std::cout << "Tabvoid = Tab: " << std::endl << tabvoid << std::endl;
		std::cout << "Tabcopy(Tabvoid): " << std::endl << tabcopy << std::endl;
		std::cout << "______________________________" << std::endl;
	}
	{
		std::cout << "\033[1;44mstd::string template test\033[0m" << std::endl;
		Array<std::string> tab(3);
		tab[0] = "hello";
		tab[1] = "world";
		tab[2] = ":) !";
		try {
			std::cout << "Trying to print tab[2] value with size of tab equal " << tab.size() << std::endl;
			std::cout << tab[2] << std::endl << std::endl;
			std::cout << "Trying to print tab[15] value with size of tab equal " << tab.size() << std::endl;
			std::cout << tab[15] << std::endl;
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}

		Array<std::string> tabvoid;
		try {
			std::cout << "Trying to print tabvoid[0] value while tabvoid is still NULL" << std::endl;
			std::cout << tabvoid[0] << std::endl;
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
		tabvoid = tab;

		Array<std::string> tabcopy(tabvoid);
		std::cout << "Tab(3): " << std::endl << tab << std::endl;
		std::cout << "Tabvoid = Tab: " << std::endl << tabvoid << std::endl;
		std::cout << "Tabcopy(Tabvoid): " << std::endl << tabcopy << std::endl;
		std::cout << "______________________________" << std::endl;
	}
}
