#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
   public:
      Animal();
      Animal(Animal const &src);
      virtual ~Animal();
      Animal &operator=(Animal const &src);
      virtual void  makeSound( void ) const;
      std::string getType( void ) const;
   private:
   protected:
      std::string _type;
};

#endif

