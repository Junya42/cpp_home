#include "Cat.hpp"
#include "Animal.hpp"

void  Cat::makeSound( void ) const
{
   std::cout << "Cat says : Purrrr purrrrrr meoww" << std::endl;
}

void  Cat::setIdea(int index, std::string new_idea) {
   this->_brain->setIdea(index, new_idea);
}

std::string Cat::getIdea(int index) const {
   return this->_brain->getIdea(index);
}

std::string Cat::getIdea(int index) {
   return this->_brain->getIdea(index);
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

Cat::Cat(Cat const &src) : Animal()
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
