#include "Dog.hpp"

void  Dog::makeSound( void ) const
{
   std::cout << "Dog says : Wuf wuf" << std::endl;
}

/*************************************************************/
/*                          CONSTRUCTOR                      */
/*************************************************************/
Dog::Dog() : Animal()
{
   std::cout << "Default Dog constructor called" << std::endl;
   _type = "Dog";
}

Dog::Dog(Dog const &src) : Animal()
{
   std::cout << "Copy Dog constructor called" << std::endl;
   *this = src;
}

/*************************************************************/
/*                         DESTRUCTOR                        */
/*************************************************************/
Dog::~Dog()
{
   std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &src)
{
   std::cout << "Dog assignment operator called" << std::endl;
   _type = src._type;
   return *this;
}
