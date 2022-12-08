#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
   public:
      FragTrap(void);
      FragTrap(FragTrap const &src);
      FragTrap(std::string name);
      ~FragTrap();
      FragTrap &operator=(FragTrap const &src);
      void  highFivesGuys( void );
   private:
   protected:
};

#endif

