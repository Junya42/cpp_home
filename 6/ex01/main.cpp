/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <anremiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 10:57:11 by anremiki          #+#    #+#             */
/*   Updated: 2022/08/11 11:11:42 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.hpp"

uintptr_t	serialize(Data *ptr)
{
	std::cout << std::endl << "_serialize_" << std::endl << std::endl;
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*deserialize(uintptr_t raw)
{
	std::cout << std::endl << "_deserialize_" << std::endl << std::endl;
	return (reinterpret_cast<Data *>(raw));
}

int main( void )
{
	uintptr_t	raw;
	Data		*ptr;

	ptr = new Data;
	ptr->i = 42;

	std::cout << "Data member value: " << ptr->i << std::endl;
	raw = serialize(ptr);
	std::cout << "serialize return value: " << raw << std::endl;

	ptr = deserialize(raw);
	std::cout << "deserialize return value: " << ptr->i << std::endl;

	delete ptr;
}
