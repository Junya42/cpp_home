#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <stdexcept>
#include "Form.hpp"

class Form;

class Bureaucrat
{
   class GradeTooHighException : public std::exception
   {
         public:
            virtual const char* what() const throw()
            {
                return ("Grade is too high");
            }
   };
   class GradeTooLowException : public std::exception
   {
       public:
           virtual const char* what() const throw()
           {
               return ("Grade is too low");
           }
   };
   public:
       Bureaucrat(std::string name, int grade);
       Bureaucrat(Bureaucrat const &src);
       Bureaucrat &operator=(Bureaucrat const &src);
       ~Bureaucrat();

      std::string getName( void ) const;
      int   getGrade( void ) const;

      void  upgrade( void );
      void  downgrade( void );

      void  signForm(Form &form);
   private:
      std::string const _name;
      int   _grade;
   protected:
};

std::ostream &operator<<(std::ostream &nstream, Bureaucrat &bureau);
#endif

