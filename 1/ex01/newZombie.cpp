/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <anremiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 00:31:27 by anremiki          #+#    #+#             */
/*   Updated: 2022/06/20 13:07:25 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "header.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie	*newZomb = NULL;

	newZomb = new Zombie;
	if (!newZomb)
		return (NULL);
	newZomb->SetName(name);
	return (newZomb);
}
