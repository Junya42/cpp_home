#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal
{
   public:
      Animal();
      Animal(Animal const &src);
      Animal &operator=(Animal const &src);
      virtual ~Animal();
      virtual void  makeSound( void ) const;
      std::string getType( void ) const;
   private:
   protected:
      std::string _type;
};

#endif

