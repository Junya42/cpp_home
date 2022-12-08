#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
   public:
      RobotomyRequestForm(std::string name);
      RobotomyRequestForm(RobotomyRequestForm const &src);
      RobotomyRequestForm &operator=(RobotomyRequestForm const &src);
      virtual ~RobotomyRequestForm();
      std::string const &getName( void ) const;

      void  execute_(void) const;
   private:
      std::string _target;
   protected:
};

#endif
