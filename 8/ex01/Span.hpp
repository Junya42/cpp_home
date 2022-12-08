#ifndef SPAN_HPP
# define SPAN_HPP

#include <exception>
#include <algorithm>
#include <vector>
#include <iostream>

class Span
{
   public:
      Span( void );
      Span( unsigned int N );
      ~Span( void );
      Span( Span const & src );
      Span & operator=( Span const & src );

      class FullVector : public std::exception
   {
      public:
         virtual const char *what() const throw(){
            return "\033[1;31mExceeding maximum capacity\033[0m";
         }
   };
      class EmptyVector : public std::exception
   {
      public:
         virtual const char *what() const throw()
         {
            return "\033[1;31mVector is empty or contains only one value\033[0m";
         }
   };
      void addNumber(int num);
      void addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end);
      int shortestSpan(void);
      int longestSpan(void);
      unsigned int   size(void);
      std::vector<int>::iterator begin(void);
      std::vector<int>::iterator end(void);
   private:
      std::vector<int> _v;
      unsigned int   _size;
   protected:
};

#endif

