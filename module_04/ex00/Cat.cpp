/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 19:05:28 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/25 17:23:03 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	_type = "Cat";
}

Cat::~Cat() {}

Cat::Cat(const Cat &value) {
	*this = value;
}

Cat &Cat::operator=(const Cat &value) {
	_type = value._type;
	return *this;
}

std::string Cat::getType() const {
	return(this->_type);
}

void Cat::makeSound() const {
	std::cout << Cat::_type << " myaaaaaaaaau" << std::endl;
}