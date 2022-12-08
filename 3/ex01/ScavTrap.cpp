#include "ScavTrap.hpp"

void  ScavTrap::guardGate( void )
{
   std::cout << _name << " entered in Gate keeper mode" << std::endl;
}
/*************************************************************/
/*                          CONSTRUCTOR                      */
/*************************************************************/
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
   std::cout << "Creating a new ScavTrap from a Claptrap" << std::endl;
   _hp = 100;
   _mp = 50;
   _ad = 20;
   _name = name;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
   std::cout << "ScavTrap copy constructor called" << std::endl;
   *this = src;
}
/*************************************************************/
/*                         DESTRUCTOR                        */
/*************************************************************/
ScavTrap::~ScavTrap()
{
}

ScavTrap &ScavTrap::operator=(ScavTrap const &src)
{
   std::cout << "ScavTrap copy assignment operator called" << std::endl;

   _name = src._name;
   _hp = src._hp;
   _mp = src._mp;
   _ad = src._ad;

   std::cout << "Creating a new copied ScavTrap called " << _name << std::endl;
   return *this;
}
