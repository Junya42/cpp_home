#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <map>
#include <string>
#include <exception>
#include <algorithm>

class NoMatch : public std::exception
{
    public:
        virtual const char* what() const throw();
};

template< typename T >
typename T::iterator    easyfind(T & src, int occurence)
{
    typename T::iterator it;
    return it = std::find(src.begin(), src.end(), occurence), it != src.end() ? it : throw NoMatch();
}

#endif
