#include "Intern.hpp"

Form  *Intern::makeShrub(std::string target)
{
   return new ShrubberyCreationForm(target);
}

Form  *Intern::makeRobot(std::string target)
{
   return new RobotomyRequestForm(target);
}

Form *Intern::makePresident(std::string target)
{
   return new PresidentialPardonForm(target);
}

Form  *Intern::makeForm(std::string name, std::string target)
{
   for (int i = 0; i < 3; i++)
   {
      if (name.compare(_tabString[i]) == 0)
      {
         std::cout << "Intern creates " << name << std::endl;
         return ((this->*_tabFunc[i])(target));
      }
   }
   throw BadNameException();
}

/*************************************************************/
/*                          CONSTRUCTOR                      */
/*************************************************************/
Intern::Intern()
{
   std::cout << "Intern constructor called" << std::endl << std::endl;

   _tabString[0] = "ShrubberyCreationForm";
   _tabString[1] = "RobotomyRequestForm";
   _tabString[2] = "PresidentialPardonForm";

   _tabFunc[0] = &Intern::makeShrub;
   _tabFunc[1] = &Intern::makeRobot;
   _tabFunc[2] = &Intern::makePresident;
}

Intern::Intern(Intern const &src)
{
   std::cout << "Intern copy constructor called" << std::endl;
   *this = src;
}

/*************************************************************/
/*                         DESTRUCTOR                        */
/*************************************************************/
Intern::~Intern()
{
   std::cout << "Intern destructor called" << std::endl;
}

Intern &Intern::operator=(const Intern &src)
{
   std::cout << "Intern assignment operator called" << std::endl << std::endl;
   for (int i = 0; i < 3; i++)
   {
      _tabString[i] = src._tabString[i];
      _tabFunc[i] = src._tabFunc[i];
   }
   return *this;
}

const char* Intern::BadNameException::what()const throw(){
	return ("Wrong form name!");
}
