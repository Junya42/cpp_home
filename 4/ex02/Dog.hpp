#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"

class Dog : public AAnimal
{
   public:
      Dog();
      Dog(Dog const &src);
      Dog &operator=(Dog const &src);
      virtual ~Dog();
      virtual void  makeSound( void ) const;
   private:
      Brain *_brain;
   protected:
};

#endif
