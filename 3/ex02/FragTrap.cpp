#include "FragTrap.hpp"

void  FragTrap::highFivesGuys( void )
{
   std::cout << "Please give me a high five !" << std::endl;
}

/*************************************************************/
/*                          CONSTRUCTOR                      */
/*************************************************************/

FragTrap::FragTrap(void) : ClapTrap("FragTrap")
{
   std::cout << "Void FragTrap constructor called" << std::endl;
   _hp = 100;
   _mp = 100;
   _ad = 30;
   _name = "FragTrap";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
   std::cout << "Creating a new Fragtrap from a Claptrap" << std::endl;
   _hp = 100;
   _mp = 100;
   _ad = 30;
   _name = name;
}

FragTrap::FragTrap(FragTrap const &src)
{
   std::cout << "FragTrap copy constructor called" << std::endl;
   *this = src;
   std::cout << "Creating a new copied FragTrap named " << _name << std::endl;
}

/*************************************************************/
/*                         DESTRUCTOR                        */
/*************************************************************/
FragTrap::~FragTrap()
{
}

FragTrap &FragTrap::operator=(FragTrap const &src)
{
   std::cout << "FragTrap assignment operator called" << std::endl;
   _name = src._name;
   _hp = src._hp;
   _mp = src._mp;
   _ad = src._ad;
   return *this;
}
