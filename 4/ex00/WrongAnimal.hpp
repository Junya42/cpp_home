#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include "Animal.hpp"

class WrongAnimal
{
   public:
      WrongAnimal();
      WrongAnimal(WrongAnimal const &src);
      ~WrongAnimal();
      WrongAnimal &operator=(WrongAnimal const &src);
      std::string getType( void ) const;
      void  makeSound( void ) const;
   private:
   protected:
      std::string _type;
};

#endif

