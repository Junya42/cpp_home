/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 04:28:02 by anremiki          #+#    #+#             */
/*   Updated: 2022/07/19 17:22:55 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void  alpha( void )
{
      Bureaucrat test("Alpha", 1);
      std::cout << test << std::endl;
      
      std::cout << "Upgrade" << std::endl;
      test.upgrade();
      std::cout << "Upgrade" << std::endl;
      test.upgrade();
}

void  beta( void )
{

      Bureaucrat test1("Beta", 149);

      std::cout << test1 << std::endl;

      std::cout << "Downgrade" << std::endl;
      test1.downgrade();
      std::cout << "Downgrade" << std::endl;
      test1.downgrade();
      std::cout << "Downgrade" << std::endl;
      test1.downgrade();
}

void  omega( void )
{
      Bureaucrat test2("Omega", -42);
      std::cout << test2 << std::endl;
}

int main(void)
{
   try
   {
      alpha();
      beta();
      omega();
   }
   catch(std::exception &e)
   {
      std::cout << e.what() << std::endl;
   }
   return (0);
}
