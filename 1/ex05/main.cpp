/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <anremiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:52:49 by anremiki          #+#    #+#             */
/*   Updated: 2022/06/21 20:30:19 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
   Harl  ia;

   ia.complain("DEBUG");
   ia.complain("INFO");
   ia.complain("EMPTY");
   ia.complain("WARNING");
   ia.complain("ERROR");
}
