/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 04:28:02 by anremiki          #+#    #+#             */
/*   Updated: 2022/08/10 08:25:34 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void  test_intern( void )
{
      std::cout << std::endl << "\033[1;31m" << "_____INTERN_____" << "\033[0m" << std::endl;

      Bureaucrat  crat("Manager", 1);
      Intern   employe;
      Intern   copy(employe);

      Form *pform = copy.makeForm("ShrubberyCreationForm", "TREE");
      //Form *pform = copy.makeForm("RobotomyRequestForm", "BENDER");
      //Form *pform = copy.makeForm("PresidentialPardonForm", "STUDENT");
      
      std::cout << *pform << std::endl;
      crat.signForm(*pform);
      pform->execute(crat);
      delete pform;
}

int main(void)
{
   try
   {
     test_intern();
   }
   catch(std::exception &e)
   {
      std::cout << e.what() << std::endl;
   }
   return (0);
}
