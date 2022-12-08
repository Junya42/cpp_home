/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <anremiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 00:34:13 by anremiki          #+#    #+#             */
/*   Updated: 2022/06/20 13:05:57 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "header.hpp"

void	randomChump(std::string name)
{
	Zombie	randomzomb;

	randomzomb.SetName(name);
	randomzomb.announce();
}
