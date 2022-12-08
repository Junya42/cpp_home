/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 13:30:03 by anremiki          #+#    #+#             */
/*   Updated: 2022/07/13 01:21:42 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
   public:
      Fixed( void );
      Fixed( int const integer );
      Fixed( float const floating );
      ~Fixed( void );
      Fixed( Fixed const & src );
      Fixed & operator=( Fixed const & src );
      int   getRawBits( void ) const;
      void  setRawBits( int const raw );
      float toFloat( void ) const;
      int   toInt( void ) const;
   private:
      int   _fix;
      static const int  _bits = 8;
};

std::ostream& operator<<( std::ostream &fd, Fixed const &src);

#endif
