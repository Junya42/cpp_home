#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

class IMateriaSource
{
   public:
      IMateriaSource();
      virtual ~IMateriaSource() {}
      virtual void   learnMateria(AMateria*) = 0;
      virtual AMateria* createMateria(std::string const & type) = 0;
   private:
   protected:
};

#endif
