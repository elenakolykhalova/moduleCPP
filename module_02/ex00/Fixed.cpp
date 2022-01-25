/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 11:09:21 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/18 20:27:45 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) {
	_fix = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &input) {
	std::cout << "Copy constructor called" << std::endl;
	*this = input;
}

Fixed &		Fixed::operator=(const Fixed &src) {	
	std::cout << "Assignation operator called" << std::endl;
	this->setRawBits(src.getRawBits());

	return *this;
}

int			Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fix;
}

void		Fixed::setRawBits(int const raw) {
	this->_fix = raw;
}
