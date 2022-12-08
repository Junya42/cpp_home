#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
   public:
      ScavTrap(void);
      ScavTrap(ScavTrap const &src);
      ScavTrap(std::string name);
      ~ScavTrap();
      ScavTrap &operator=(ScavTrap const &src);
      void  guardGate( void );
   private:
   protected:
};

#endif

