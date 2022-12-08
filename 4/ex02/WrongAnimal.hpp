#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include "AAnimal.hpp"

class WrongAnimal
{
   public:
      WrongAnimal();
      WrongAnimal(WrongAnimal const &src);
      WrongAnimal &operator=(WrongAnimal const &src);
      ~WrongAnimal();
      std::string getType( void ) const;
      void  makeSound( void ) const;
   private:
   protected:
      std::string _type;
};

#endif

