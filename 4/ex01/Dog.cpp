#include "Dog.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

void  Dog::makeSound( void ) const
{
   std::cout << "Dog says : Wuf wuf" << std::endl;
}

void  Dog::setIdea(int index, std::string new_idea) {
   this->_brain->setIdea(index, new_idea);
}

std::string Dog::getIdea(int index) const {
   return this->_brain->getIdea(index);
}

std::string Dog::getIdea(int index) {
   return this->_brain->getIdea(index);
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

Dog::Dog(Dog const &src) : Animal()
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
