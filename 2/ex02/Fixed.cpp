/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 13:30:06 by anremiki          #+#    #+#             */
/*   Updated: 2022/07/13 17:21:11 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed   &Fixed::min(Fixed &first, Fixed &second)
{
    if (first._fix < second._fix)
        return (first);
    return (second);
}

Fixed   &Fixed::max(Fixed &first, Fixed &second)
{
    if (first._fix > second._fix)
        return (first);
    return (second);
}

const Fixed &Fixed::min(Fixed const &first, Fixed const &second)
{
    if (first._fix < second._fix)
        return (first);
    return (second);
}

const Fixed &Fixed::max(Fixed const &first, Fixed const &second)
{
    if (first._fix > second._fix)
        return (first);
    return (second);
}

int    Fixed::getRawBits( void ) const
{
   // std::cout << "getRawBits member function called" << std::endl;
    return (this->_fix);
}

void    Fixed::setRawBits( int const raw )
{
    this->_fix = raw;
}

float   Fixed::toFloat( void ) const
{
    return (static_cast<float>(this->_fix) / static_cast<float>(1 << this->_bits));
}

int Fixed::toInt( void ) const
{
    return (this->_fix >> this->_bits);
}

/*************************************************************/
/*                          CONSTRUCTOR                      */
/*************************************************************/
Fixed::Fixed( void )
{
   // std::cout << "Default constructor called" << std::endl;
   this->_fix = 0;
}

Fixed::Fixed( int const integer )
{
    //std::cout << "Int constructor called" << std::endl;
    this->_fix = integer << this->_bits;
}

Fixed::Fixed( float const floating )
{
    //std::cout << "Float constructor called" << std::endl;
    this->_fix = roundf(floating * (1 << this->_bits));
}

Fixed::Fixed( Fixed const & src )
{
    //std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

/*************************************************************/
/*                         DESTRUCTOR                        */
/*************************************************************/
Fixed::~Fixed( void )
{
    //std::cout << "Destructor called" << std::endl;
}

/*************************************************************/
/*                      ASSIGNMENT OPERATOR                  */
/*************************************************************/
Fixed & Fixed::operator=( Fixed const & src )
{
   // std::cout << "Assignation operator called" << std::endl;
    this->_fix = src.getRawBits();
    return (*this);
}

std::ostream& operator<<( std::ostream &nstream, Fixed const &src )
{
    nstream << src.toFloat();
    return (nstream);
}

bool    Fixed::operator>( Fixed const & src )
{
    if (_fix > src.getRawBits())
        return (true);
    return (false);
}

bool    Fixed::operator<( Fixed const & src )
{
    if (_fix < src.getRawBits())
        return (true);
    return (false);
}

bool    Fixed::operator>=( Fixed const & src )
{
    if (_fix >= src.getRawBits())
        return (true);
    return (false);
}

bool    Fixed::operator<=( Fixed const & src )
{
    if (_fix <= src.getRawBits())
        return (true);
    return (false);
}

bool    Fixed::operator==( Fixed const & src )
{
    if (_fix == src.getRawBits())
        return (true);
    return (false);
}

bool    Fixed::operator!=( Fixed const & src )
{
    if (_fix != src.getRawBits())
        return (true);
    return (false);
}

Fixed   Fixed::operator+(Fixed const &first)
{
    return (Fixed(this->toFloat() + first.toFloat()));
}

Fixed   Fixed::operator-(Fixed const &first)
{
    return (Fixed(this->toFloat() - first.toFloat()));
}

Fixed   Fixed::operator*(Fixed const &first)
{
    return (Fixed(this->toFloat() * first.toFloat()));
}

Fixed   Fixed::operator/(Fixed const &first)
{
    return (Fixed(this->toFloat() / first.toFloat()));
}

Fixed& Fixed::operator++( void )
{
    _fix++;
    return (*this);
}

Fixed Fixed::operator++( int )
{
    Fixed   tmp(*this);

    tmp.setRawBits(_fix++);
    return (tmp);
}

Fixed& Fixed::operator--( void )
{
    _fix--;
    return (*this);
}

Fixed Fixed::operator--( int )
{
    Fixed   tmp;

    tmp.setRawBits(this->getRawBits() - 1);
    return (tmp);
}
