/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 20:09:29 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/11 21:58:57 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon(std::string type) {
	_type = type;
}

Weapon::~Weapon(void) {}

void	Weapon::setType(std::string type) {
	_type = type;
}

const std::string	&Weapon::getType(void) {
	return this->_type;
}