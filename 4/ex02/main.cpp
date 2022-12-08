/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <anremiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 23:33:33 by anremiki          #+#    #+#             */
/*   Updated: 2022/07/17 23:25:57 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

#if 0
   #define test true
#else
   #define test false
#endif
void  separator(int choice)
{
   if (choice < 4)
      std::cout << "\033[1;36m";
   else
      std::cout << "\033[1;35m";
   switch (choice)
   {
      case 1:
         std::cout << std::endl << "______________ Animal constructor  ____________________" << std::endl << std::endl;
         break ;
      case 2:
         std::cout << std::endl << "______________ Animal functions _______________________" << std::endl << std::endl;
         break ;
      case 3:
         std::cout << std::endl << "______________ Animal destructor ______________________" << std::endl << std::endl;
         break ;
      case 4:
         std::cout << std::endl << "______________ Wrong constructor  _____________________" << std::endl << std::endl;
         break ;
      case 5:
         std::cout << std::endl << "______________ Wrong functions  _______________________" << std::endl << std::endl;
         break ;
      case 6:
         std::cout << std::endl << "______________ Wrong destructor _______________________" << std::endl << std::endl;
      default:
         break ;
   }
   std::cout << "\033[0m";
}

int main( void )
{
   separator(1);
   //const AAnimal* meta = new AAnimal();
   const AAnimal* j = new Dog();
   const AAnimal* i = new Cat();


   separator(2);
   std::cout << j->getType() << " " << std::endl;
   std::cout << i->getType() << " " << std::endl;
   //std::cout << meta->getType() << " " << std::endl << std::endl;

   i->makeSound();
   j->makeSound();
   //meta->makeSound();


   separator(3);
   //delete meta;
   delete j;
   delete i;


   separator(4);
   const WrongAnimal*   weird = new WrongCat();
   const WrongAnimal*   wanimal = new WrongAnimal();


   separator(5);
   std::cout << weird->getType() << " " << std::endl;
   std::cout << wanimal->getType() << " " << std::endl << std::endl;

   weird->makeSound();
   wanimal->makeSound();


   separator(6);
   delete weird;
   delete wanimal;

   if (test) {
      separator(1);
      AAnimal   *animals[100];

      for (int i = 0; i < 100; i++)
      {
         if (i < 50)
            animals[i] = new Dog();
         else
            animals[i] = new Cat();
         //animals[i] = new AAnimal();
      }

      separator(2);
      for (int i = 0; i < 100; i++)
      {
         std::cout << i << " ";
         animals[i]->makeSound();
      }

      separator(3);
      for (int i = 0; i < 100; i++)
         delete animals[i];
   }
   std::cout << std::endl;
   return (0);
}
