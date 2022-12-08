#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

std::string Animal::getType( void ) const
{
   return (_type);
}

void  Animal::makeSound( void ) const
{
   std::cout << "Animal says : ???" << std::endl;
}

/*************************************************************/
/*                          CONSTRUCTOR                      */
/*************************************************************/
Animal::Animal()
{
   std::cout << "\033[1;31m" << "Default Animal constructor called" << "\033[0m" << std::endl;
   _type = "Animal";
}

Animal::Animal(Animal const &src)
{
   std::cout << "\033[1;31m" << "Copy Animal constructor called" << "\033[0m" << std::endl;
   *this = src;
}
/*************************************************************/
/*                         DESTRUCTOR                        */
/*************************************************************/
Animal::~Animal()
{
   std::cout << "\033[1;31m" << "Animal destructor called" << "\033[0m" << std::endl;
}

Animal &Animal::operator=(Animal const &src)
{
   std::cout << "Animal assignment operator called" << std::endl;
   _type = src._type;
   return *this;
}
