/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 18:55:25 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/27 18:04:15 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() {
	this->_type = "ice";
}

Ice::Ice(const Ice &value) {
	*this = value;
}

Ice &Ice::operator=(const Ice &value) {
	this->_type = value._type;
	return (*this);
}

Ice::~Ice() {}

AMateria *Ice::clone() const {
	AMateria *copy = new Ice();
	return (copy);
}

void		Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}