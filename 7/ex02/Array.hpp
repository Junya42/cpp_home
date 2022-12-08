#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>
#include <stdlib.h>

template<typename T = int>
class Array
{
	public:
		Array(void){
			std::cout << "Array <Void> constructor called" << std::endl;
			_array = NULL;
			_size = 0;
		}

		Array(unsigned int n){
			std::cout << "Array <unsigned int> constructor called" << std::endl << std::endl;
			if (n > 0)
			{
				_array = new T[n];
				_size = n;
			}
			else
			{
				_array = NULL;
				_size = 0;
			}
		}

		Array(Array const &src){
			std::cout << "Array <Copy> constructor called" << std::endl;
			_array = NULL;
			_size = 0;
			*this = src;
		}

		~Array(void){
			if (_size)
				delete [] _array;
		}

		unsigned int size( void ){
			return _size;
		}

		class Overflow : public std::exception{
			public:
				virtual const char *what() const throw(){
					return "\033[1;31m Possible buffer overflow\033[0m";
				}
		};

		Array &operator=(Array const &src)
		{
			std::cout << "Array assignment operator called" << std::endl << std::endl;
			if (_size > 0)
				delete [] _array;
			if (src._size > 0)
			{
				_array = new T[src._size];
				for (unsigned int i = 0; i < src._size; i++)
					_array[i] = src._array[i];
			}
			else 
				_array = NULL;
			_size = src._size;
			return *this;
		}

		T & operator[]( unsigned int index ){
			if (_size < 1 || index >= _size)
				throw(Overflow());
			else
				return _array[index];
		}

	private:
		T	*_array;
		unsigned int	_size;
};

#endif
