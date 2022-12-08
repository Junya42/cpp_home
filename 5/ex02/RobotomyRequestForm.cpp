#include "RobotomyRequestForm.hpp"
#include <time.h> 

void  RobotomyRequestForm::execute_( void ) const
{
   srand(time(0));
   if (rand() % 2 == 1)
      std::cout << _target << " successfully recovered from is robotomy" << std::endl;
   else
      std::cout << _target << " looks very alive, do not worry if he starts acting strange" << std::endl;
}
/*************************************************************/
/*                          CONSTRUCTOR                      */
/*************************************************************/
RobotomyRequestForm::RobotomyRequestForm(std::string name) : Form("RobotomyRequestForm", 72, 45), _target(name)
{
   std::cout << "Robotomy constructor called" << std::endl << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form(src)
{
   std::cout << "Robotomy copy constructor called" << std::endl;
   *this = src;
}

/*************************************************************/
/*                         DESTRUCTOR                        */
/*************************************************************/
RobotomyRequestForm::~RobotomyRequestForm()
{
   std::cout << "Robotomy destructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
   std::cout << "Robotomy assignment operator called" << std::endl << std::endl;
   _target = src._target;
   return *this;
}
