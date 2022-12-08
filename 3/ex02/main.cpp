/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 00:43:21 by anremiki          #+#    #+#             */
/*   Updated: 2022/08/04 01:35:35 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
   ClapTrap NiceStud("NiceStud");
   ClapTrap Random("Random");

   NiceStud.attack("Random");
   Random.takeDamage(NiceStud.getAttack());
   NiceStud.attack("Random");
   Random.takeDamage(NiceStud.getAttack());
   Random.beRepaired(1);
   NiceStud.attack("Random");
   Random.takeDamage(NiceStud.getAttack());
   NiceStud.attack("Random");
   Random.takeDamage(NiceStud.getAttack());
   NiceStud.attack("Random");
   Random.takeDamage(NiceStud.getAttack());

   ScavTrap Bocal("Bocal");
   NiceStud.attack("Bocal");
   Bocal.takeDamage(NiceStud.getAttack());
   Bocal.guardGate();
   Bocal.attack("NiceStud");
   NiceStud.takeDamage(Bocal.getAttack());

   FragTrap Coolguy("Coolguy");
   Coolguy.highFivesGuys();
}
