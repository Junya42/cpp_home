/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 16:06:38 by anremiki          #+#    #+#             */
/*   Updated: 2022/06/21 12:10:56 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
#include <string>
#include "Weapon.hpp"

class HumanB
{
   public:
      HumanB(std::string);
      ~HumanB();
      void  attack();
      void  setType(Weapon);
      void  setWeapon(Weapon &type);
   private:
      std::string _name;
      Weapon *_type;
};

#endif
