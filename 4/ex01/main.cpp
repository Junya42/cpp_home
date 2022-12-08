/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <anremiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 23:33:33 by anremiki          #+#    #+#             */
/*   Updated: 2022/08/08 21:08:38 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

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
   const Animal* meta = new Animal();
   const Animal* j = new Dog();
   const Animal* i = new Cat();


   separator(2);
   std::cout << j->getType() << " " << std::endl;
   std::cout << i->getType() << " " << std::endl;
   std::cout << meta->getType() << " " << std::endl << std::endl;

   i->makeSound();
   j->makeSound();
   meta->makeSound();

   if (1) {
      std::cout << std::endl << "Deep copy test" << std::endl << std::endl;
      Dog* newdog = new Dog();

      std::cout << std::endl << "Set _idea[4] in base dog instance" << std::endl;
      static_cast<Dog *>(const_cast<Animal *>(j))->setIdea(4, "hello!");
      std::cout << "Printing [0, 5] base dog ideas" << std::endl << std::endl;
      for (int i = 0; i < 5; i++)
         std::cout << static_cast<Dog *>(const_cast<Animal *>(j))->getIdea(i) << std::endl;

      std::cout << std::endl << "Printing [0, 5] new dog ideas" << std::endl << std::endl;
      for (int i = 0; i < 5; i++)
         std::cout << newdog->getIdea(i) << std::endl;

      std::cout << std::endl << "new dog = base dog" << std::endl;
      *newdog = *static_cast<Dog *>(const_cast<Animal *>(j));

      std::cout << std::endl << "Printing [0, 5] new dog ideas" << std::endl << std::endl;
      for (int i = 0; i < 5; i++)
         std::cout << newdog->getIdea(i) << std::endl;

      std::cout << std::endl << "Changing new dog _idea[0]" << std::endl;
      newdog->setIdea(0, "Goodbye!");

      std::cout << "Printing [0, 5] base dog ideas" << std::endl << std::endl;
      for (int i = 0; i < 5; i++)
         std::cout << static_cast<Dog *>(const_cast<Animal *>(j))->getIdea(i) << std::endl;

      std::cout << std::endl << "Printing [0, 5] new dog ideas" << std::endl << std::endl;
      for (int i = 0; i < 5; i++)
         std::cout << newdog->getIdea(i) << std::endl;
      std::cout << std::endl;
      delete newdog;
      std::cout << std::endl;
   }

   separator(3);
   delete meta;
   delete j;
   delete i;

   if (0) {
      separator(1);
      Animal   *animals[100];

      for (int x = 0; x < 100; x++)
      {
         if (x < 50)
            animals[x] = new Dog();
         else
            animals[x] = new Cat();
      }

      separator(2);
      for (int x = 0; x < 100; x++)
      {
         std::cout << x << " ";
         animals[x]->makeSound();
      }

      separator(3);
      for (int x = 0; x < 100; x++)
         delete animals[x];
   }
   std::cout << std::endl;
   return (0);
}
