#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <vector>
#include <deque>
#include <list>
#include <exception>
#include <iostream>

template<typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	public:
		MutantStack(void){
			std::cout << std::endl << "\033[1;40mMutantStack <void> constructor called\033[0m" << std::endl << std::endl;
		};
		MutantStack(MutantStack const &src) : std::stack<T, Container>() {
			std::cout << "\033[1;45mMutantStack <copy> constructor called\033[0m" << std::endl;
			*this = src;
		}
		~MutantStack(void){
			std::cout << "\033[1;100mMutantStack destructor called\033[0m" << std::endl << std::endl;
		};
		MutantStack &operator=(MutantStack const &src){
			std::cout << "\033[1;45mMutantStack assignment operator called\033[0m" << std::endl << std::endl;
			this->c = src.c;
			return *this;
		}

		typedef typename std::stack<T, Container>::container_type::iterator iterator;

		iterator begin(void) {
			return (this->c.begin());
		}
		iterator end(void) {
			return (this->c.end());
		}
};

#endif
