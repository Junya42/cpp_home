#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
   public:
      Brain();
      Brain(Brain const &src);
      ~Brain();
      Brain &operator=(Brain const &src);
      void  setIdea(int index, std::string new_idea);
      std::string getIdea(int index) const;
      std::string getIdea(int index);
   private:
      std::string _ideas[100];
   protected:
};

#endif

