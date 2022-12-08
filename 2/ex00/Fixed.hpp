/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 13:30:03 by anremiki          #+#    #+#             */
/*   Updated: 2022/08/09 16:57:22 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
   public:
      Fixed( void );
      ~Fixed( void );
      Fixed( Fixed const & src );
      Fixed & operator=( Fixed const & src );
      Fixed & operator<<( Fixed const & src );
      int   getRawBits( void ) const;
      void  setRawBits( int const raw );
   private:
      int   _n;
      static const int  _bits;
};

#endif

