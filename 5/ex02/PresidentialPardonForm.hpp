#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class Form;

class PresidentialPardonForm : public Form
{
   public:
      PresidentialPardonForm(std::string name);
      PresidentialPardonForm(PresidentialPardonForm const &src);
      PresidentialPardonForm &operator=(PresidentialPardonForm const &src);
      virtual ~PresidentialPardonForm();
      //virtual std::string const &getName( void ) const;
      
      void  execute_( void ) const;
   private:
      std::string _target;
   protected:
};

#endif

