/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 18:44:16 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/27 18:06:01 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(std::string const &type) {
	this->_type = type;
}

AMateria::~AMateria() {}

AMateria::AMateria(const AMateria &value) {
	*this = value;
}

AMateria &AMateria::operator=(const AMateria &value) {
	this->_type = value._type;
	return (*this);
}

std::string const &AMateria::getType() const {
	return (this->_type);
}

void AMateria::use(ICharacter &target) {
	target.getName();
}
