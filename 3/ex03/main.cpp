/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 00:43:21 by anremiki          #+#    #+#             */
/*   Updated: 2022/08/04 04:16:37 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
   ClapTrap Random("Random");

   std::cout << std::endl;

   DiamondTrap Diamond("Diamond");

   Diamond.whoAmI();
   std::cout << std::endl;

   Random.attack("Diamond");
   Diamond.takeDamage(Random.getAttack());
   Random.attack("Diamond");
   Diamond.takeDamage(Random.getAttack());
   Diamond.beRepaired(1);
   Diamond.attack("Random");
   Random.takeDamage(Diamond.getAttack());

   std::cout << std::endl << "Canonical test" << std::endl << std::endl;
   DiamondTrap copy(Diamond);

   copy.whoAmI();
   std::cout << std::endl << std::endl;
}
