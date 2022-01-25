/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 18:54:24 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/27 14:06:02 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() {
	this->_type = "cure";
}

Cure::Cure(const Cure &value) {
	*this = value;
}

Cure &Cure::operator=(const Cure &value) {
	this->_type = value._type;
	return (*this);
}

Cure::~Cure() {}

AMateria*	Cure::clone() const {
	AMateria *copy = new Cure();
	return (copy);
}

void		Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}