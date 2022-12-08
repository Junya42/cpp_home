/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <anremiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 16:41:18 by anremiki          #+#    #+#             */
/*   Updated: 2022/06/20 13:27:11 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "header.hpp"
# include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		bool	open;
		bool	Display();
		void	SetContact();
		void	ADD();
		void	SEARCH();
		void	EXIT();
	private:
		int		_index;
		Contact	_contacts[8];
};

#endif
