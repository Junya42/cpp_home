#include "Span.hpp"

std::vector<int>::iterator Span::begin(void) {
    return _v.begin();
}

std::vector<int>::iterator Span::end(void) {
    return _v.end();
}

unsigned int   Span::size(void) {
    return _v.size();
}

void    Span::addNumber(int num)
{
    std::cout << "\033[1;34mSpan::addNumber <num> called, adding: \033[0m" << num << std::endl;
    if (_v.size() < _size)
    {
        _v.push_back(num);
        std::cout << "Current size: " << _v.size() << std::endl;
    }
    else {
        throw FullVector();
    }
}

void    Span::addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
    std::cout << "\033[1;34mSpan::addNumber <range> called\033[0m" << std::endl;
    std::cout << "Total size: " << _size << std::endl;
    std::cout << "Number of value you are trying to add: " << static_cast<int>(end - start) << std::endl;
    if ((_v.size() + static_cast<int>(end - start)) < _size + 1)
    {
        _v.insert(_v.end(), start, end);
        std::cout << "Current size: " << _v.size() << std::endl;
    }
    else {
        throw FullVector();
    }
}

int Span::shortestSpan()
{
    std::cout << "\033[1;34mSpan::shortestSpan called\033[0m" << std::endl;
    if (_v.size() < 2)
        throw EmptyVector();
    std::vector<int> v(_v);
    std::vector<int>::iterator it;

    std::sort(v.begin(), v.end());

    int count = 0;
    int save = *(v.end() - 1);
    for (it = v.begin(); it != v.end(); it++)
    {
        if (it != v.begin() && ((*it - count) < save))
            save = *it - count;
        count = *it;
    }
    return (save);
}

int Span::longestSpan()
{
    std::cout << "\033[1;34mSpan::longestSpan called\033[0m" << std::endl;
    if (_v.size() < 2)
        throw EmptyVector();
    std::vector<int> v(_v);
    std::vector<int>::iterator it;

    std::sort(v.begin(), v.end());

    return ((*(v.end() - 1) - *(v.begin())));
}

/*************************************************************/
/*                          CONSTRUCTOR                      */
/*************************************************************/
Span::Span( void ) : _v(0), _size(0)
{
    std::cout << std::endl << "Span <void> constructor called" << std::endl;
}

Span::Span(unsigned int N) : _v(0), _size(N)
{
    std::cout << std::endl << "Span <unsigned int> constructor called" << std::endl;
    std::cout << "   Vector defined max size: " << N << std::endl;
    _v.reserve(N);
}

Span::Span( Span const & src )
{
    std::cout << "Span <copy> constructor called" << std::endl;
    *this = src;
}

/*************************************************************/
/*                         DESTRUCTOR                        */
/*************************************************************/
Span::~Span( void )
{
}

/*************************************************************/
/*                      ASSIGNMENT OPERATOR                  */
/*************************************************************/
Span & Span::operator=( Span const & src )
{
    std::cout << "Span assignment operator called" << std::endl;
    _v = src._v;
    _size = src._size;
    return (*this);
}

