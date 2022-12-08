#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class Form;

class ShrubberyCreationForm : public Form
{
   public:
      ShrubberyCreationForm(std::string name);
      ShrubberyCreationForm(ShrubberyCreationForm const &src);
      ShrubberyCreationForm &operator=(ShrubberyCreationForm const &src);
      virtual ~ShrubberyCreationForm();
      std::string const &getName( void ) const;
      
      void  execute_( void ) const;
   private:
      std::string _target;
   protected:
};

#endif

