/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <anremiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 00:23:53 by anremiki          #+#    #+#             */
/*   Updated: 2022/06/20 13:36:35 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "header.hpp"
#include <cstdlib>

void	intro(void)
{
	std::cout << "Welcome to the zombie generator" << std::endl << std::endl
		<< "Type \"heap\" to create a heap Zombie" << std::endl
		<< "Otherwise, type \"stack\" to create a stack Zombie" << std::endl
		<< std::endl << "If you want your last heap Zombie to announce"
		<< " itself, type \"wake up\"" << std::endl
		<< "You can also create a horde of Zombies with \"horde\"" << std::endl
		<< "and announce them with \"wake up horde\"." << std::endl;
}

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*horde = NULL;

	horde = new Zombie[N];
	if (!horde)
		return (NULL);
	for (int i = 0; i < N; i++)
		horde[i].SetName(name);
	return (horde);
}

int main()
{
	Zombie		*heapZomb = NULL;
	Zombie		*horde = NULL;
	int			N;
	std::string	input;

	intro();
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
		else if (!input.compare("horde"))
		{
			std::cout << std::endl << "How many zombies are in your horde ?" << std::endl;
			std::getline(std::cin, input);
			N = atoi(input.c_str());
			std::cout << std::endl << "You must give your new horde a name"
				<< std::endl;
			std::getline(std::cin, input);
			if (input.length() > 0)
			{
				if (horde)
					delete[] horde;
				horde = zombieHorde(N, input);
			}
			else
			{
				std::cout << "The horde must have a name for the process to work!"
					<< std::endl;
			}
		}
		else if (!input.compare("wake up") && heapZomb)
			heapZomb->announce();
		else if (!input.compare("wake up horde") && horde)
		{
			for (int i = 0; i < N; i++)
				horde[i].announce();
		}
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
	if (horde)
		delete[] horde;
	return (0);
}
