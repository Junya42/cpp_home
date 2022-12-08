#include "DiamondTrap.hpp"

void  DiamondTrap::whoAmI ( void )
{
   std::cout << "DiamondTrap name : " << _name << std::endl;
   std::cout << "Sub-object DiamondTrap name : " << this->ClapTrap::_name << std::endl;
}
/*************************************************************/
/*                          CONSTRUCTOR                      */
/*************************************************************/

/*DiamondTrap::DiamondTrap(void)
{
   std::cout << "Void DiamondTrap constructor" << std::endl;
   _name = "Diamond_clap_name";
   _hp = this->
}*/

DiamondTrap::DiamondTrap(DiamondTrap const &src)
{
   std::cout << "DiamondTrap copy constructor called" << std::endl;
   *this = src;
   std::cout << "Creating a new copied DiamondTrap named " << _name << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name")
{
   std::cout << "Creating a new DiamondTrap heritating from ScavTrap and FragTrap" << std::endl << std::endl;
   _name = name + "_clap_name";
   _hp = this->FragTrap::_hp;
   _mp = this->ScavTrap::_mp;
   _ad = this->FragTrap::_ad;
}

/*************************************************************/
/*                         DESTRUCTOR                        */
/*************************************************************/
DiamondTrap::~DiamondTrap()
{
   std::cout << std::endl << "DiamondTrap destructor" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &src)
{
   std::cout << "DiamondTrap assignment operator called" << std::endl;
   _name = src._name;
   _hp = src._hp;
   _mp = src._mp;
   _ad = src._ad;
   return *this;
}
