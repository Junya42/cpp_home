/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <anremiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 19:25:52 by anremiki          #+#    #+#             */
/*   Updated: 2022/06/20 13:23:47 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void	FormatDisplay(std :: string str)
{
	std::ios init(NULL);

	init.copyfmt(std::cout);
	if (str.length() < 10)
	{
		std::cout << std::setw(10);
		std::cout << str.substr(0, 10);
	}
	else
	{
		std::cout << std::left << std::setfill ('.') << std::setw(10);
		std::cout << str.substr(0, 9) << std::setfill (' ');
	}
	std::cout.copyfmt(init);
}

int main()
{
	PhoneBook	book;
	std::string	input;

	std::cout << "Welcome to Phonebook" << std::endl << std::endl;
	while (book.open)
	{
		std::cout << "Please use the following options :" << std :: endl
			<< "- ADD" << std::endl << "- SEARCH" << std::endl << "- EXIT"
			<< std :: endl;
		std::getline(std::cin, input);
		std::cout << std::endl;
		if (!input.compare("ADD"))
			book.ADD();
		else if (!input.compare("SEARCH"))
			book.SEARCH();
		else if (!input.compare("EXIT"))
			book.EXIT();
		else
			std::cout << "\x1B[2J\x1b[H" << "Invalid input." << std::endl;
	}
	return (0);
}
