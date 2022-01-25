/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 19:00:41 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/25 12:53:02 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {}

Animal::Animal(std::string type) {
	_type = type;
}

Animal::Animal(const Animal &value) {
	*this = value;
}

Animal  &Animal::operator=(const Animal &value) {
	_type = value._type;
	return *this;
}

Animal::~Animal() {}

std::string	Animal::getType() const {
	return (this->_type);
}

void Animal::makeSound() const {}