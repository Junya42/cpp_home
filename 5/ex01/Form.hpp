#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
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
      Form(std::string name, int sign, int exec);
      Form(Form const &src);
      Form &operator=(Form const &src);
      ~Form();

      std::string const &getName( void ) const;
      int   getSignGrade( void ) const;
      int   getExecGrade( void ) const;
      bool  getStatus( void ) const;
      void  changeStatus( void );

      void  beSigned(Bureaucrat &bureau);
   private:
      std::string const _name;
      bool  _status;
      int const   _sign;
      int const   _exec;
   protected:
};

std::ostream &operator<<(std::ostream &nstream, Form &form);

#endif
