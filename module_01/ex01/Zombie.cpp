/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 12:19:23 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/11 21:40:06 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void 	Zombie::setName(std::string name) { this->_name = name; }

void	Zombie::announce(void) {
	std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
Zombie::Zombie(void){ return; }

Zombie::~Zombie (void) {
	std::cout <<  "zombie " << _name << " died." << std::endl;
}