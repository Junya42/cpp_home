/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <anremiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 00:23:53 by anremiki          #+#    #+#             */
/*   Updated: 2022/06/20 01:42:51 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "header.hpp"

int main()
{
	Zombie		*heapZomb = NULL;
	std::string	input;

	std::cout << "Welcome to the zombie generator" << std::endl << std::endl
		<< "Type \"heap\" to create a heap Zombie" << std::endl
		<< "Otherwise, type \"stack\" to create a stack Zombie" << std::endl
		<< std::endl << "If you want your last heap Zombie to announce"
		<< " itself, type \"wake up\"" << std::endl;
	while (true)
	{
		std::cout << std::endl << "Please choose an option" << std::endl << std::endl;
		std::getline(std::cin, input);	
		if (!input.compare("heap"))
		{
			std::cout << std::endl << "You must give your new heap zombie a name"
				<< std::endl;
			std::getline(std::cin, input);
			if (input.length() > 0)
			{
				if (heapZomb)
					delete heapZomb;
				heapZomb = newZombie(input);
			}
			else
			{
				std::cout << "The Zombie must have a name for the process to work!"
					<< std::endl;
			}

		}
		else if (!input.compare("stack"))
		{
			std::cout << std::endl << "You must give your new stack zombie a name"
				<< std::endl;
			std::getline(std::cin, input);
			if (input.length() > 0)
				randomChump(input);
			else
			{
				std::cout << "The Zombie must have a name for the process to work!"
					<< std::endl;
			}
		}
		else if (!input.compare("wake up") && heapZomb)
			heapZomb->announce();
		else
		{
			std::cout << "Invalid option, this is strange..." << std::endl
				<< "It looks like a zombie is typing random options." << std::endl
				<< "Exiting the zombie generator for safety purpose." << std::endl;
			break ;
		}
	}
	if (heapZomb)
		delete heapZomb;
	return (0);
}
