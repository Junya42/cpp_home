#include "Bureaucrat.hpp"

std::string Bureaucrat::getName( void ) const {
   return (_name);
}

int   Bureaucrat::getGrade( void ) const {
   return (_grade);
}

void  Bureaucrat::upgrade( void )
{
   std::cout << "Upgrading " << getName() << " from grade "
      << getGrade() << " to " << getGrade() - 1 << std::endl;
   _grade--;
   if (_grade < 1)
      throw GradeTooHighException();
}

void  Bureaucrat::downgrade( void )
{
   std::cout << "Downgrading " << getName() << " from grade "
      << getGrade() << " to " << getGrade() + 1 << std::endl;
   _grade++;
   if (_grade > 150)
      throw GradeTooLowException();
}

void  Bureaucrat::signForm(Form &form)
{
   if (_grade > form.getSignGrade())
   {
      std::cout << "Bureaucrat " << getName() << " couldn't sign "
         << form.getName() << " because grade is too low" << std::endl;
      throw GradeTooLowException();
   }
   form.changeStatus();
   std::cout << "Bureaucrat " << getName() << " signed " << form.getName() << std::endl;
}

/*************************************************************/
/*                          CONSTRUCTOR                      */
/*************************************************************/
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
   std::cout << "Bureaucrat constructor called" << std::endl;
   if (grade < 1)
      throw GradeTooHighException();
   if (grade > 150)
      throw GradeTooLowException();
   _grade = grade;
   std::cout << "Bureaucrat constructor complete" << std::endl << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : _name(src._name)
{
   std::cout << "Bureaucrat copy constructor called" << std::endl;
   *this = src;
}
/*************************************************************/
/*                         DESTRUCTOR                        */
/*************************************************************/
Bureaucrat::~Bureaucrat()
{
   std::cout << "Bureaucrat destructor called" << std::endl << std::endl;
}

/*************************************************************/
/*                         OPERATOR                          */
/*************************************************************/

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &src)
{
   std::cout << "Bureaucrat assignment operator called" << std::endl;
   _grade = src._grade;
   return *this;
}

std::ostream &operator<<(std::ostream &nstream, Bureaucrat &bureau)
{
   nstream << bureau.getName() << ", bureaucrat grade " << bureau.getGrade() << ".";
   return (nstream);
}
