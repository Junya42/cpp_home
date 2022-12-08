#include "Brain.hpp"

void  Brain::setIdea(int index, std::string new_idea) {
   if (index >= 0 && index < 100)
      _ideas[index] = new_idea;
}

std::string Brain::getIdea(int index) const {
   if (index >= 0 && index < 100)
      return _ideas[index];
   return _ideas[0];
}

std::string Brain::getIdea(int index) {
   if (index >= 0 && index < 100)
      return _ideas[index];
   return _ideas[0];
}

/*************************************************************/
/*                          CONSTRUCTOR                      */
/*************************************************************/
Brain::Brain()
{
   std::cout << "Default brain constructor called" << std::endl;
   for (int i = 0; i < 100; i++)
      _ideas[i] = "Empty";
}

Brain::Brain(Brain const &src)
{
   std::cout << "Copy brain constructor called" << std::endl;
   *this = src;
}

/*************************************************************/
/*                         DESTRUCTOR                        */
/*************************************************************/
Brain::~Brain()
{
   std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=(Brain const &src)
{
   std::cout << "Brain assignment operator called" << std::endl;
   for (int i = 0; i < 100; i++)
      this->_ideas[i].assign(src._ideas[i]);
   return *this;
}
