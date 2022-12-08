#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class AAnimal
{
   public:
      AAnimal();
      AAnimal(AAnimal const &src);
      AAnimal &operator=(AAnimal const &src);
      virtual ~AAnimal();
      virtual void  makeSound( void ) const = 0;
      std::string getType( void ) const;
   private:
   protected:
      std::string _type;
};

#endif

