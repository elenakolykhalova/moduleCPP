/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 19:05:47 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/25 12:57:09 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	_type = "Dog";
}

Dog::~Dog() {}

Dog::Dog(const Dog &value) {
	*this = value;
}

Dog &Dog::operator=(const Dog &value) {
	_type = value._type;
	return *this;
}

std::string Dog::getType() const {
	return(this->_type);
}

void Dog::makeSound() const {
	std::cout << Dog::_type << " gav-gav" << std::endl;
}