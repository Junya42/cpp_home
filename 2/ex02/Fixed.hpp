/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 13:30:03 by anremiki          #+#    #+#             */
/*   Updated: 2022/07/13 17:10:58 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
   public:
      /* Constructor */
      Fixed( void );
      Fixed( int const integer );
      Fixed( float const floating );
      Fixed( Fixed const & src );

      /* Destructor  */
      ~Fixed( void );

      /* Comparison */
      Fixed& operator=( Fixed const & src );
      bool  operator>( Fixed const & src );
      bool  operator<( Fixed const & src );
      bool  operator>=( Fixed const & src );
      bool  operator<=( Fixed const & src );
      bool  operator==( Fixed const & src );
      bool  operator!=( Fixed const & src );

      /* Arithmetic  */
      Fixed operator+(Fixed const &first);
      Fixed operator-(Fixed const &first);
      Fixed operator*(Fixed const &first);
      Fixed operator/(Fixed const &first);

      /* Incrementation | Decrementation  */
      Fixed& operator++( void );
      Fixed& operator--( void );
      Fixed operator++( int );
      Fixed operator--( int );

      /* Member functions  */
      static Fixed   &min(Fixed &first, Fixed &second);
      static Fixed   &max(Fixed &first, Fixed &second);
      static const   Fixed  &min(Fixed const &first, Fixed const &second);
      static const   Fixed  &max(Fixed const &first, Fixed const &second);

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
