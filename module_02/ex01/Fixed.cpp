/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 11:09:21 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/18 20:46:12 by mcarry           ###   ########.fr       */
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

Fixed::Fixed(const int fixed) {
	
	std::cout << "Int constructor called" << std::endl;
	_fix = fixed << _bits;
}

Fixed::Fixed(const float fixed) {
	std::cout << "Float constructor called" << std::endl;
	_fix = roundf(fixed * (1 << _bits));	
}

Fixed &		Fixed::operator=(const Fixed &src) {	
	std::cout << "Assignation operator called" << std::endl;
	this->setRawBits(src.getRawBits());
	return *this;
}

int			Fixed::getRawBits(void) const {
	return this->_fix;
}

void		Fixed::setRawBits(int const raw) {
	this->_fix = raw;
}

float		Fixed::toFloat(void) const {
	return ((float)_fix / (1 << _bits));
}

int			Fixed::toInt(void) const {
	return (_fix >> _bits);
}


std::ostream &		operator<<(std::ostream &out, const Fixed &fixed) {	
	out << fixed.toFloat();
	return out;
}
