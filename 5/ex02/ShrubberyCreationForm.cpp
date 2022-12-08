#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"

void  ShrubberyCreationForm::execute_(void) const
{
   std::ofstream file(_target.c_str());

   if (file.fail())
   {
      std::cout << "Failed to create " << _target << " file" << std::endl;
      return ;
   }
   file << "               ,@@@@@@@," << std::endl
      << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl
      << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl
      << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl
      << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl
      << "   %&&%/ %&\%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl
      << "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl
      << "       |o|        | |         | |" << std::endl
      << "       |.|        | |         | |" << std::endl
      << "    \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_" << std::endl;
   file.close();
}

/*************************************************************/
/*                          CONSTRUCTOR                      */
/*************************************************************/
ShrubberyCreationForm::ShrubberyCreationForm(std::string name) : Form("ShrubberyCreationForm", 145, 137), _target(name + "_shrubbery")
{
   std::cout << "Shrubbery constructor called" << std::endl << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form(src)
{
   std::cout << "Shrubbery copy constructor called" << std::endl;
   *this = src;
}
/*************************************************************/
/*                         DESTRUCTOR                        */
/*************************************************************/
ShrubberyCreationForm::~ShrubberyCreationForm()
{
   std::cout << "Shrubbery destructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
{
   std::cout << "Shrubbery assignment operator called" << std::endl << std::endl;
   _target = src._target;
   return *this;
}
