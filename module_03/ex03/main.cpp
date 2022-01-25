/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 17:24:32 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/24 13:33:21 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main () {
	
	DiamondTrap	simple("Lena");
	simple.whoAmI();
	simple.highFivesGuys();
	simple.guardGate();

	return 0;
}