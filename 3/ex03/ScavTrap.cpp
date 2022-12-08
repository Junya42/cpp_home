#include "ScavTrap.hpp"

void  ScavTrap::guardGate( void )
{
   std::cout << _name << " entered in Gate keeper mode" << std::endl;
}
/*************************************************************/
/*                          CONSTRUCTOR                      */
/*************************************************************/

ScavTrap::ScavTrap(void)
{
   std::cout << "Void ScavTrap constructor called" << std::endl;
   _hp = 100;
   _mp = 50;
   _ad = 20;
   _name = "ScavTrap";
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
   std::cout << "ScavTrap copy constructor called" << std::endl;
   *this = src;
   std::cout << "Creating a new ScavTrap named " << _name << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
   std::cout << "Creating a new ScavTrap from a Claptrap" << std::endl;
   _hp = 100;
   _mp = 50;
   _ad = 20;
   _name = name;
}

/*************************************************************/
/*                         DESTRUCTOR                        */
/*************************************************************/
ScavTrap::~ScavTrap()
{
   std::cout << "ScavTrap destructor" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &src)
{
   std::cout << "ScavTrap assignment operator called" << std::endl;
   _name = src._name;
   _hp = src._hp;
   _mp = src._mp;
   _ad = src._ad;
   return *this;
}
