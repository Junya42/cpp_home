/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 15:09:44 by anremiki          #+#    #+#             */
/*   Updated: 2022/06/20 17:52:05 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon
{
   public:
      Weapon(std::string);
      ~Weapon();
      const std::string &getType();
      void  setType(std::string);
   private:
      std::string _type;
};

#endif

