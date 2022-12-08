/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 15:28:11 by anremiki          #+#    #+#             */
/*   Updated: 2022/06/21 12:08:49 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA
{
   public:
      HumanA(std::string name, Weapon &type);
      ~HumanA();
      void  attack();
   private:
      std::string _name;
      Weapon &_type;
};

#endif
