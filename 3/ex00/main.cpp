/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 00:43:21 by anremiki          #+#    #+#             */
/*   Updated: 2022/08/31 16:44:46 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

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
   ClapTrap testcanon(NiceStud);
   testcanon.attack("Random");
   Random.takeDamage(testcanon.getAttack());
   testcanon.attack("Random");
   Random.takeDamage(testcanon.getAttack());
}
