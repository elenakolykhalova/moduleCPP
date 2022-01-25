/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 11:09:21 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/19 10:43:03 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) {
	_fix = 0;
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void) {
	// std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &input) {
	// std::cout << "Copy constructor called" << std::endl;
	*this = input;
}

Fixed::Fixed(const int fixed) {
	
	// std::cout << "Int constructor called" << std::endl;
	_fix = fixed << _bits;
}

Fixed::Fixed(const float fixed) {
	// std::cout << "Float constructor called" << std::endl;
	_fix = roundf(fixed * (1 << _bits));	
}

Fixed &Fixed::operator=(const Fixed &src) {	
	// std::cout << "Assignation operator called" << std::endl;
	this->setRawBits(src.getRawBits());
	return *this;
}

bool Fixed::operator>=(const Fixed &fixed) {
	if (int(this->_fix) >= int(fixed._fix))
		return (1);
	else
		return (0);
}

bool Fixed::operator<=(const Fixed &fixed) {
	if (int(this->_fix) <= int(fixed._fix))
		return (1);
	else
		return (0);
}
bool Fixed::operator==(const Fixed &fixed) {
	if (int(this->_fix) == int(fixed._fix))
		return (1);
	else
		return (0);
}

bool Fixed::operator!=(const Fixed &fixed) {
	if (int(this->_fix) != int(fixed._fix))
		return (1);
	else
		return (0);
}

bool Fixed::operator<(const Fixed &fixed) {
	if (int(this->_fix) < int(fixed._fix))
		return (1);
	else
		return (0);
}

bool Fixed::operator>(const Fixed &fixed) {
	if (int(this->_fix) > int(fixed._fix))
		return (1);
	else
		return (0);
}

Fixed &Fixed::operator+(const Fixed &fixed) {	
	Fixed *tmp = new Fixed();
	tmp->_fix = this->_fix + fixed._fix;
	return *tmp;
}

Fixed &Fixed::operator-(const Fixed &fixed) {	
	Fixed *tmp = new Fixed();
	tmp->_fix = this->_fix - fixed._fix;
	return *tmp;
}

Fixed &Fixed::operator*(const Fixed &fixed) {	
	Fixed *tmp = new Fixed(this->toFloat() * fixed.toFloat());
	return *tmp;
}

Fixed &Fixed::operator/(const Fixed &fixed) {	
	Fixed *tmp = new Fixed(this->toFloat() / fixed.toFloat());
	return *tmp;
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

Fixed &Fixed::max(Fixed &a, Fixed &b) {
	if (a > b)
		return (a);
	else
		return (b);
}

Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
	if ((Fixed&)a > (Fixed&)b)
		return (Fixed&)a;
	else
		return (Fixed&)b;
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {
	if (a < b)
		return (a);
	else
		return (b);
}

Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
	if ((Fixed&)a < (Fixed&)b)
		return (Fixed&)a;
	else
		return (Fixed&)b;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {	
	out << fixed.toFloat();
	return out;
}

Fixed &		Fixed::operator++(void) {			// pre increment
	
	this->setRawBits(this->getRawBits() + 1);
	return *this;
}

Fixed		Fixed::operator++(__unused int _) {	// post increment
	
	Fixed	cpy = *this;

	this->setRawBits(this->_fix + 1);
	return cpy;
}

Fixed &		Fixed::operator--(void) {			// pre decrement
	
	this->setRawBits(this->getRawBits() - 1);
	return *this;
}

Fixed		Fixed::operator--(__unused int _) {	// post decrement
	
	Fixed	cpy = *this;

	this->setRawBits(this->_fix - 1);
	return cpy;
}
