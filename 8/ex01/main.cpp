#include "Span.hpp"
#include <exception>

void    printvec(Span &src)
{
    std::cout << std::endl << "Vector values: " << std::endl << std::endl;
    std::vector<int>::iterator it;

    if (src.size() < 1)
    {
        std::cout << "Vector is empty" << std::endl << std::endl;
        return ;
    }
    for (it = src.begin(); it != src.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl << std::endl;
}

int main(int ac, char **av)
{
    if (ac != 2)
        return 0;
    srand(time(NULL));

    const unsigned int size = atoi(av[1]);
    Span    test(size);

    try
    {
        std::cout << test.shortestSpan() << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl << std::endl;
        try
        {
            std::cout << test.longestSpan() << std::endl;
        }
        catch (std::exception & e)
        {
            std::cout << e.what() << std::endl << std::endl;
            try
            {
                for (unsigned int i = 0; i < size; i++)
                    test.addNumber(rand() % 100);
                printvec(test);
                std::cout << test.shortestSpan() << std::endl;
                std::cout << test.longestSpan() << std::endl;

                Span test_it(size);

                test_it.addNumber(test.begin(), test.end());
                printvec(test_it);

                test.addNumber(42);
            }
            catch (std::exception & e)
            {
                std::cout << e.what() << std::endl;
                return 0;
            }
        }
    }
    return 0;
}
