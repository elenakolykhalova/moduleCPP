/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 20:09:20 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/13 21:58:43 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _weapon(NULL) {
	this->_name = name;
}

HumanB::~HumanB(void) {}


void	HumanB::attack(void) {

	std::cout << this->_name << " attacks with his "
	          << this->_weapon->getType() << std::endl;
}


void	HumanB::setWeapon(Weapon &weapon) {
	
	_weapon = &weapon;
}