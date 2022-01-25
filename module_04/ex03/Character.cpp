/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 22:02:03 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/27 18:20:38 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
	this->_name = "no_name";
	for (int i = 0; i < 4; i++)
		this->_AM[i] = nullptr;
}

Character::Character(std::string const &name) {
	this->_name = name;
	for (int i = 0; i < 4; i++)
		this->_AM[i] = nullptr;
}

Character::Character(const Character &value) {
	*this = value;
}

Character &Character::operator=(const Character &value) {
	this->_name = value._name;
	for (int i = 0; i < 4; i++)
		if (this->_AM[i] != nullptr)
			delete this->_AM[i];
	for (int i = 0; i < 4; i++)
		if (value._AM[i] != nullptr)
			this->_AM[i] = value._AM[i]->clone();
	return (*this);
}

std::string const &Character::getName() const {
	return(this->_name);
}

Character::~Character() {
	for (int i = 0; i < 4; i++)
	{
		if (this->_AM[i] != nullptr)
			delete this->_AM[i];
	}
}

void Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (_AM[i] == nullptr)
		{
			_AM[i] = m->clone();
			return ;
		}
	}
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx < 4 && this->_AM[idx] != nullptr)
		this->_AM[idx] = nullptr;
}

void Character::use(int idx, ICharacter &target) {
	if (this->_AM[idx] != nullptr)
		this->_AM[idx]->use(target);
}

