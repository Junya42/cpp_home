/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <anremiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 16:48:55 by anremiki          #+#    #+#             */
/*   Updated: 2022/06/20 13:34:29 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "header.hpp"

class Contact
{
	public:
		Contact() : defined(false){}
		~Contact(){}
		bool	defined;
		void	SetName();
		void	SetLastName();
		void	SetNickName();
		void	SetNumber();
		void	SetSecret();
		void	DisplaySearch(int i);
		void	DisplayContact();
	private:
		std::string	_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_number;
		std::string	_secret;
};

#endif
