#include "WrongCat.hpp"
#include "WrongAnimal.hpp"


void  WrongCat::makeSound( void ) const
{
   std::cout << "WrongCat says : wwoem rrrrrup rrrrruP" << std::endl;
}
/*************************************************************/
/*                          CONSTRUCTOR                      */
/*************************************************************/
WrongCat::WrongCat()
{
   std::cout << "Default WrongCat constructor called" << std::endl;
   _type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal()
{
   std::cout << "Copy WrongCat constructor called" << std::endl;
   *this = src;
}
/*************************************************************/
/*                         DESTRUCTOR                        */
/*************************************************************/
WrongCat::~WrongCat()
{
   std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &src)
{
   std::cout << "WrongCat assignment operator called" << std::endl;
   _type = src._type;
   return *this;
}
