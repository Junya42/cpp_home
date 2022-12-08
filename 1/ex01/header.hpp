/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <anremiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 01:27:10 by anremiki          #+#    #+#             */
/*   Updated: 2022/06/20 01:33:23 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP
# define HEADER_HPP

#include "Zombie.hpp"
class Zombie;

Zombie	*newZombie(std::string);
void	randomChump(std::string);

#endif
