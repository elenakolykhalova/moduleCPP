/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 19:05:28 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/25 18:09:41 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	_type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
	this->_brain = new Brain();
}

Cat::~Cat() {
	delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &value) {
	*this = value;
}

Cat &Cat::operator=(const Cat &value) {
	_type = value._type;
	_brain = new Brain();
	*_brain = *value._brain;
	return *this;
}

std::string Cat::getType() const {
	return(this->_type);
}

void Cat::makeSound() const {
	std::cout << Cat::_type << " myaaaaaaaaau" << std::endl;
}