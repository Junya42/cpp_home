#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

std::string AAnimal::getType( void ) const
{
   return (_type);
}

void  AAnimal::makeSound( void ) const
{
   std::cout << "AAnimal says : ???" << std::endl;
}

/*************************************************************/
/*                          CONSTRUCTOR                      */
/*************************************************************/
AAnimal::AAnimal()
{
   std::cout << "\033[1;31m" << "Default AAnimal constructor called" << "\033[0m" << std::endl;
   _type = "AAnimal";
}

AAnimal::AAnimal(AAnimal const &src)
{
   std::cout << "\033[1;31m" << "Copy AAnimal constructor called" << "\033[0m" << std::endl;
   *this = src;
}

/*************************************************************/
/*                         DESTRUCTOR                        */
/*************************************************************/
AAnimal::~AAnimal()
{
   std::cout << "\033[1;31m" << "AAnimal destructor called" << "\033[0m" << std::endl;
}

AAnimal &AAnimal::operator=(AAnimal const &src)
{
   std::cout << "\033[1;31m" << "AAnimal assignment operator called" << "\033[0m" << std::endl;
   _type = src._type;
   return *this;
}
