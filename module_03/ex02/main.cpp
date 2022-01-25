/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 17:24:32 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/24 13:45:06 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main () {
	
	FragTrap a;
	FragTrap b("Mcarry");
	FragTrap c(b);

	b.attack("Misha");
	b.beRepaired(100);
	b.takeDamage(50);	
	c.attack("Denis");

	return 0;
}