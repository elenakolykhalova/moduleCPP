/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 19:00:41 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/27 20:37:34 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(std::string type) {
	_type = type;
}

Animal::Animal(const Animal &value) {
	*this = value;
}

Animal  &Animal::operator=(const Animal &value) {
	this->_type = value._type;
	return *this;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

std::string	Animal::getType() const {
	return (this->_type);
}
