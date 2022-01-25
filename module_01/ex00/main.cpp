/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 16:45:33 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/10 19:14:26 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
	Zombie *zombie;

	zombie = newZombie("Anton");
	zombie->announce();
	randomChump("Mariya");
	delete zombie;
	return 0;
}