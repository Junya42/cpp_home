#ifndef INTERN_HPP
# define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class ShrubberyCreationForm;
class RobotomyRequestForm;
class PresidentialPardonForm;
class Form;

class Intern
{
   public:
      Intern();
      Intern(Intern const &src);
      Intern &operator=(Intern const &src);
      ~Intern();
      Form  *makeForm(std::string name, std::string target);

      Form  *makeShrub(std::string target);
      Form  *makeRobot(std::string target);
      Form  *makePresident(std::string target);
      class BadNameException : public std::exception
      {
		public:
			virtual const char* what()const throw();
	  };
   private:
      std::string _tabString[3];
      Form *(Intern::*_tabFunc[3])(std::string target);
   protected:
};

#endif

