/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <anremiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 17:55:33 by anremiki          #+#    #+#             */
/*   Updated: 2022/06/19 21:05:33 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void	Contact::DisplaySearch(int i)
{
	std :: cout << "         " << i;
	std :: cout << "|";
	FormatDisplay(_name);
	std :: cout << "|";
	FormatDisplay(_last_name);
	std :: cout << "|";
	FormatDisplay(_nickname);
	std :: cout << std :: endl;
}

void	Contact::DisplayContact()
{
	std :: cout << std :: endl;
	std :: cout << _name << std :: endl;
	std :: cout << _last_name << std :: endl;
	std :: cout << _nickname << std :: endl;
	std :: cout << _number << std :: endl;
	std :: cout << _secret << std :: endl
	<< std :: endl;
}

void	Contact::SetName()
{
	std :: cout << "Please type the contact's name :" << std :: endl;
	std :: getline(std::cin, _name);
	if (_name.size() < 1)
	{
		std :: cout << "Invalid name" << std :: endl;
		std :: cout << "Try again." << std :: endl;
		return (SetName());
	}
	std :: cout << "Registered name : " << _name << std :: endl
	<< std :: endl;
}

void	Contact::SetLastName()
{
	std :: cout << "Please type the contact's last name :" << std :: endl;
	std :: getline(std::cin, _last_name);
	if (_last_name.size() < 1)
	{
		std :: cout << "Invalid last name" << std :: endl;
		std :: cout << "Try again." << std :: endl;
		return (SetLastName());
	}
	std :: cout << "Registered last name : " << _last_name << std :: endl
	<< std :: endl;
}

void	Contact::SetNickName()
{
	std :: cout << "Please type the contact's nickname :" << std :: endl;
	std :: getline(std::cin, _nickname);
	if (_nickname.size() < 1)
	{
		std :: cout << "Invalid nickname" << std :: endl;
		std :: cout << "Try again." << std :: endl;
		return (SetNickName());
	}
	std :: cout << "Registered nickname : " << _nickname << std :: endl
	<< std :: endl;
}

void	Contact::SetNumber()
{
	std::string	tmp;

	std :: cout << "Please type the contact's phone number :" << std :: endl;
	std :: getline(std::cin, tmp);
	if (tmp.size() < 1)
	{
		std :: cout << "Invalid phone number size" << std :: endl;
		std :: cout << "Try again." << std :: endl;
		return (SetNumber());
	}
	for (int i = 0; tmp[i]; i++)
	{
		if (!isdigit(tmp[i]))
		{
			std :: cout << "Invalid Phone number" << std :: endl;
			std :: cout << "Try again." << std :: endl;
			return (SetNumber());
		}
	}
	_number = tmp;
	std :: cout << "Registered Phone number : " << _number << std :: endl
	<< std :: endl;
}

void	Contact::SetSecret()
{
	std :: cout << "Please type the contact's darkest secret :" << std :: endl;
	std :: getline(std::cin, _secret);
	if (_secret.size() < 1)
	{
		std :: cout << "Invalid secret" << std :: endl;
		std :: cout << "Try again." << std :: endl;
		return (SetSecret());
	}
	std :: cout << "Registered secret : " << _secret << std :: endl
	<< std :: endl;
}
