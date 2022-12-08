#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
   public:
      Cat();
      Cat(Cat const &src);
      Cat &operator=(Cat const &src);
      virtual ~Cat();
      virtual void  makeSound( void ) const;
      void  setIdea(int index, std::string new_idea);
      std::string getIdea(int index) const;
      std::string getIdea(int index);
   private:
      Brain *_brain;
   protected:
};

#endif

