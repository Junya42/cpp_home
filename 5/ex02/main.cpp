/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 04:28:02 by anremiki          #+#    #+#             */
/*   Updated: 2022/08/10 08:08:26 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void  forms( void )
{

   Bureaucrat  manager("Manager", 1);
   std::cout << std::endl << "\033[1;36m" << " ---  FORMS --- " << "\033[0m" << std::endl;

   ShrubberyCreationForm shrub("Shruberry");
   RobotomyRequestForm  robot("Robot");
   PresidentialPardonForm pres("President");

   std::cout << "----------------------------------" << std::endl;
   std::cout << shrub << std::endl;
   std::cout << robot << std::endl;
   std::cout << pres << std::endl;
   std::cout << "----------------------------------" << std::endl << std::endl;

   shrub.beSigned(manager);
   pres.beSigned(manager);
   robot.beSigned(manager);

   std::cout << std::endl << "\033[1;36m" << " ---  COPY FORMS --- " << "\033[0m" << std::endl;

   ShrubberyCreationForm cshrub(shrub);
   RobotomyRequestForm crobot(robot);
   PresidentialPardonForm cpres(pres);

   std::cout << "----------------------------------" << std::endl;
   std::cout << cshrub << std::endl;
   std::cout << crobot << std::endl;
   std::cout << cpres << std::endl;
   std::cout << "----------------------------------" << std::endl << std::endl;
}

void  alpha( void )
{
      std::cout << std::endl << "\033[1;31m" << "_____SHRUB_____" << "\033[0m" << std::endl;

      Bureaucrat test("Alpha", 2);
      ShrubberyCreationForm formtest("HappyTree");

      std::cout << test << std::endl;

     // formtest.execute(test); /* Not signed yet = KO */

      formtest.beSigned(test);

      std::cout << formtest << std::endl;

      formtest.execute(test); /* Signed = success */
}

void  beta( void )
{

      std::cout << std::endl << "\033[1;31m" << "_____ROBOT______" << "\033[0m" << std::endl;

      Bureaucrat  sign("Signatory", 60);
      Bureaucrat  executor("Executor", 30);
      RobotomyRequestForm  formtest1("Bender");
      
      std::cout << sign << std::endl;
      std::cout << executor << std::endl << std::endl;

      formtest1.beSigned(sign);

      std::cout << formtest1 << std::endl;

      formtest1.execute(executor);
}

void  omega( void )
{
      std::cout << std::endl << "\033[1;31m" << "_____PRESIDENT_____" << "\033[0m" << std::endl;

      Bureaucrat test2("Omega", 20);
      //Bureaucrat test2("Omega", 3);
      PresidentialPardonForm formtest2("Arthur Dent");

      std::cout << test2 << std::endl;

      formtest2.beSigned(test2);

      std::cout << formtest2 << std::endl;

      formtest2.execute(test2);
}

int main(void)
{
   try
   {
      forms();
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
