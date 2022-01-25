/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 15:39:28 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/11 19:21:45 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde( int N, std::string name ) {

	Zombie *zHorde = new Zombie[N];
	int i = 0;
	
	while (i < N) {
		zHorde[i].setName(name + '_' + std::to_string(i));
		i++;
	}
	return zHorde;
}
