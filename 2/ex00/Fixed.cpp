/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 13:30:06 by anremiki          #+#    #+#             */
/*   Updated: 2022/08/09 16:58:47 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int    Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_n);
}

void    Fixed::setRawBits( int const raw )
{
    this->_n = raw;
}

/*************************************************************/
/*                          CONSTRUCTOR                      */
/*************************************************************/
Fixed::Fixed( void )
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed const & src )
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

/*************************************************************/
/*                         DESTRUCTOR                        */
/*************************************************************/
Fixed::~Fixed( void )
{
    std::cout << "Destructor called" << std::endl;
}

/*************************************************************/
/*                      ASSIGNMENT OPERATOR                  */
/*************************************************************/
Fixed & Fixed::operator=( Fixed const & src )
{
    std::cout << "Copy assignment operator called" << std::endl;

    this->_n = src.getRawBits();
    return (*this);
}
