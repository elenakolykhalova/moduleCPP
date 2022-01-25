/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 12:19:23 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/15 02:16:55 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie (std::string name) {
	_name = name;
}

void	Zombie::announce(void) {
	std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie (void) {
	std::cout <<  "zombie " << _name << " died." << std::endl;
}
