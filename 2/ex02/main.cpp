/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <anremiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 21:16:09 by anremiki          #+#    #+#             */
/*   Updated: 2022/08/03 01:03:15 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << "operator<<(std::cout, a) = ";
    operator<<(std::cout, a) << std::endl << std::endl;

    std::cout << "++a = " << ++a << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "a++ = " << a++ << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl << std::endl;

    std::cout << "max(a, b) = " << Fixed::max( a, b ) << std::endl;
    std::cout << "min(a, b) = " << Fixed::min( a, b ) << std::endl << std::endl;

    std::cout << "b.toFloat() = " << b.toFloat() << std::endl;
    std::cout << "b.toInt() = " << b.toInt() << std::endl << std::endl;

    std::cout << std::boolalpha;
    std::cout << "a < b : " << (a < b) << std::endl;
    std::cout << "a > b : " << (a > b) << std::endl;
    std::cout << "a <= b : " << (a <= b) << std::endl;
    std::cout << "a >= b : " << (a >= b) << std::endl;
    std::cout << "a == b : " << (a == b) << std::endl;
    std::cout << "a != b : " << (a != b) << std::endl << std::endl;

    std::cout << "a + b : " << (a + b) << std::endl;
    std::cout << "a - b : " << (a - b) << std::endl;
    std::cout << "a * b : " << (a * b) << std::endl;
    std::cout << "a / b : " << (a / b) << std::endl;
    return 0;
}
