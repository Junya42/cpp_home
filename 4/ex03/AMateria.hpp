#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include "ICharacter.hpp"

class AMateria
{
   public:
      AMateria();
      AMateria(std::string const & type);
      virtual ~AMateria();

      std::string const & getType(void) const;
      virtual AMateria* Clone(void) const = 0;
      virtual void   use(ICharacter& target);
   private:
   protected:
      std::string _type;
};

#endif

