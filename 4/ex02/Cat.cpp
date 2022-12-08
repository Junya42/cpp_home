#include "Cat.hpp"
#include "AAnimal.hpp"

void  Cat::makeSound( void ) const
{
   std::cout << "Cat says : Purrrr purrrrrr meoww" << std::endl;
}

/*************************************************************/
/*                          CONSTRUCTOR                      */
/*************************************************************/
Cat::Cat()
{
   std::cout << "\033[1;33m" << "Default Cat constructor called" << "\033[0m" << std::endl;
   _type = "Cat";
   _brain = new Brain();
}

Cat::Cat(Cat const &src) : AAnimal()
{
   std::cout << "\033[1;33m" << "Copy Cat constructor called" << "\033[0m" << std::endl;
   *this = src;
}
/*************************************************************/
/*                         DESTRUCTOR                        */
/*************************************************************/
Cat::~Cat()
{
   std::cout << "\033[1;33m" << "Cat destructor called" << "\033[0m" << std::endl;
   delete _brain;
}

Cat &Cat::operator=(Cat const &src)
{
   std::cout << "\033[1;33m" << "Cat assignment operator called" << "\033[0m" << std::endl;
   _type = src._type;
   *_brain = *src._brain;
   return *this;
}
