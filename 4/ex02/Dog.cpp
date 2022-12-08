#include "Dog.hpp"
#include "AAnimal.hpp"

void  Dog::makeSound( void ) const
{
   std::cout << "Dog says : Wuf wuf" << std::endl;
}

/*************************************************************/
/*                          CONSTRUCTOR                      */
/*************************************************************/
Dog::Dog()
{
   std::cout << "\033[1;38m" << "Default Dog constructor called" << "\033[0m" << std::endl;
   _type = "Dog";
   _brain = new Brain();
}

Dog::Dog(Dog const &src) : AAnimal()
{
   std::cout << "\033[1;38m" << "Copy Dog constructor called" << "\033[0m" << std::endl;
   *this = src;
}
/*************************************************************/
/*                         DESTRUCTOR                        */
/*************************************************************/
Dog::~Dog()
{
   std::cout << "\033[1;38m" << "Dog destructor called" << "\033[0m" << std::endl;
   delete _brain;
}

Dog &Dog::operator=(Dog const &src)
{
   std::cout << "\033[1;38m" << "Dog assignment operator called" << "\033[0m" << std::endl;
   _type = src._type;
   *_brain = *src._brain;
   return *this;
}
