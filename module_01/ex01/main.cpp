/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 16:45:33 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/15 02:15:01 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
	int		nbr = 10;
	int		i = 0;
	
	Zombie *zhorde = zombieHorde(nbr, "Maxim");
	while (i < nbr) {
		zhorde[i].announce();
		i++;
	}
	delete [] zhorde;
	return 0;
}