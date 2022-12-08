#include "Harl.hpp"

void  Harl::debug( void ){
   std::cout << "Debug" << std::endl;
}
void  Harl::info( void ){
   std::cout << "Info" << std::endl;
}
void  Harl::warning( void ){
   std::cout << "Warning" << std::endl;
}
void  Harl::error( void ){
   std::cout << "Error" << std::endl;
}
void  Harl::complain( std::string level ){

   for (int i = 0; i < 4; i++)
      if (!level.compare(this->name[i]))
         return ((this->*func[i])());
}

/*************************************************************/
/*                          CONSTRUCTOR                      */
/*************************************************************/
Harl::Harl()
{
   this->func[0] = &Harl::debug;
   this->func[1] = &Harl::info;
   this->func[2] = &Harl::warning;
   this->func[3] = &Harl::error;

   this->name[0] = "DEBUG";
   this->name[1] = "INFO";
   this->name[2] = "WARNING";
   this->name[3] = "ERROR";
}

/*************************************************************/
/*                         DESTRUCTOR                        */
/*************************************************************/
Harl::~Harl()
{
}

