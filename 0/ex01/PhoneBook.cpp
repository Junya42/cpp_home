/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <anremiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 16:53:53 by anremiki          #+#    #+#             */
/*   Updated: 2022/06/20 13:31:52 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

PhoneBook::PhoneBook(void) : open(true), _index(0) {
}

PhoneBook::~PhoneBook(void){
}

bool	PhoneBook::Display()
{
	if (_contacts[0].defined == true)
	{
		std::cout << "Contact list :" << std::endl << std::endl;
		for (int i = 0; i < 8; i++)
		{
			if (_contacts[i].defined == true)
				_contacts[i].DisplaySearch(i);
			else
				break ;
		}
		std::cout << std::endl << "Please enter the contact's ID you're looking for :" << std::endl;
		return (true);
	}
	else
		std :: cout << "Please create a contact first before using SEARCH" << std :: endl;
	return (false);
}

void	PhoneBook::SetContact()
{
	_contacts[_index].SetName();
	_contacts[_index].SetLastName();
	_contacts[_index].SetNickName();
	_contacts[_index].SetNumber();
	_contacts[_index].SetSecret();
	_contacts[_index].defined = true;
}

void	PhoneBook::ADD()
{
	std :: cout << "\x1B[2J\x1B[H";
	if (_index > 7)
		_index = 0;
	SetContact();
	_index++;
}

void	PhoneBook::SEARCH()
{
	int			id;
	std::string	flusher;

	std :: cout << "\x1B[2J\x1B[H";
	if (Display() == false)
		return ;
	std::getline(std::cin, flusher);
	if (flusher.size() != 1 || !isdigit(flusher[0]))
	{
		std :: cout << "Invalid id" << std :: endl;
		return ;
	}
	id = atoi(flusher.c_str());
	if (id > 7)
	{
		std :: cout << "Invalid id" << std :: endl;
		return ;
	}
	if (_contacts[id].defined == false)
	{
		std :: cout << "Undefined contact" << std :: endl;
		return ;
	}
	_contacts[id].DisplayContact();
}

void	PhoneBook::EXIT(void)
{
	std :: cout << "\x1B[2J\x1B[H";
	open = false;
	std::cout << "Exiting Phonebook" << std::endl;
}
