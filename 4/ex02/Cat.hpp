#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"

class Cat : public AAnimal
{
   public:
      Cat();
      Cat(Cat const &src);
      Cat &operator=(Cat const &src);
      virtual ~Cat();
      virtual void  makeSound( void ) const;
   private:
      Brain *_brain;
   protected:
};

#endif

