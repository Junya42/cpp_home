#include "Cat.hpp"

void  Cat::makeSound( void ) const
{
   std::cout << "Cat says : Purrrr purrrrrr meoww" << std::endl;
}

/*************************************************************/
/*                          CONSTRUCTOR                      */
/*************************************************************/
Cat::Cat() : Animal()
{
   std::cout << "Default Cat constructor called" << std::endl;
   _type = "Cat";
}

Cat::Cat(Cat const &src) : Animal()
{
   std::cout << "Copy Cat constructor called" << std::endl;
   *this = src;
}

/*************************************************************/
/*                         DESTRUCTOR                        */
/*************************************************************/
Cat::~Cat()
{
   std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &src)
{
   std::cout << "Cat assignment operator called" << std::endl;
   _type = src._type;
   return *this;
}
