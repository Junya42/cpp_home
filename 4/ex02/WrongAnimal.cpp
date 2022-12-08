#include "WrongAnimal.hpp"

void  WrongAnimal::makeSound( void ) const
{
   std::cout << "WrongAnimal says : ???" << std::endl;
}

std::string WrongAnimal::getType( void ) const
{
   return (_type);
}
/*************************************************************/
/*                          CONSTRUCTOR                      */
/*************************************************************/
WrongAnimal::WrongAnimal()
{
   std::cout << "Default WrongAnimal constructor called" << std::endl;
   _type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
   std::cout << "Default WrongAnimal constructor called" << std::endl;
   *this = src;
}
/*************************************************************/
/*                         DESTRUCTOR                        */
/*************************************************************/
WrongAnimal::~WrongAnimal()
{
   std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &src)
{
   std::cout << "WrongAnimal assignment operator called" << std::endl;
   _type = src._type;
   return *this;
}
