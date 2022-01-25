/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 20:09:12 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/13 21:55:38 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(&weapon) {
		
		this->_name = name;
	}

HumanA::~HumanA(void){}
		
void	HumanA::attack(void) {
	std::cout << this->_name << " attacks with his "
	          << this->_weapon->getType() << std::endl;
}
