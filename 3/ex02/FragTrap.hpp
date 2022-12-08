#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
   public:
      FragTrap(void);
      FragTrap(std::string name);
      FragTrap(FragTrap const & src);
      ~FragTrap();
      FragTrap &operator=(FragTrap const & src);
      void  highFivesGuys( void );
   private:
   protected:
};

#endif

