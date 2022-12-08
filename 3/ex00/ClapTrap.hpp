#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
   public:
      ClapTrap(std::string new_name);
      ClapTrap(ClapTrap const & src);
      ~ClapTrap();
      ClapTrap &operator=(ClapTrap const & src);
      void  attack(const std::string &target);
      void  takeDamage(unsigned int amount);
      void  beRepaired(unsigned int amount);
      unsigned int   getAttack( void );
   private:
      std::string _name;
      int   _hp;
      int   _mp;
      int   _ad;
};

#endif

