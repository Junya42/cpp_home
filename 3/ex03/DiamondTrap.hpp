#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
   public:
      //DiamondTrap(void);
      DiamondTrap(DiamondTrap const &src);
      DiamondTrap(std::string name);
      ~DiamondTrap();
      DiamondTrap &operator=(DiamondTrap const &src);
      void  whoAmI( void );
   private:
   protected:
};

#endif

