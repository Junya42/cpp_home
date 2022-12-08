#include "PresidentialPardonForm.hpp"

void  PresidentialPardonForm::execute_( void ) const
{
   std::cout << _target << " have been forgiven by Zaphod Beeblebrox." << std::endl;
}

/*************************************************************/
/*                          CONSTRUCTOR                      */
/*************************************************************/
PresidentialPardonForm::PresidentialPardonForm(std::string name) : Form("PresidentialPardonForm", 25, 5), _target(name)
{
   std::cout << "Presidential constructor called" << std::endl << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : Form(src)
{
   std::cout << "Presidential copy constructor called" << std::endl;
   *this = src;
}

/*************************************************************/
/*                         DESTRUCTOR                        */
/*************************************************************/
PresidentialPardonForm::~PresidentialPardonForm()
{
   std::cout << "Presidential destructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &src)
{
   std::cout << "Presidential assignment operator called" << std::endl << std::endl;
   _target = src._target;
   return *this;
}
