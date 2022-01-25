/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 17:28:09 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/24 13:40:51 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
	_name = "No_name";
	_hitpoints = 10;
	_energy_points = 10;
	_attack_damage = 0;
	std::cout << "ClapTrap " << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
	_name = name;
	_hitpoints = 10;
	_energy_points = 10;
	_attack_damage = 0;
	std::cout << "ClapTrap " << name << " Constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap " << "Destructor called" << std::endl;
	return;
}

ClapTrap  &ClapTrap::operator=(const ClapTrap &value) {
	_name = value._name;
	_hitpoints = value._hitpoints;
	_energy_points = value._energy_points;
	_attack_damage = value._attack_damage;
	std::cout << "ClapTrap " << "Assignation operator called" << std::endl;
	return *this;
}

ClapTrap::ClapTrap(const ClapTrap &value) {
	
	std::cout << "ClapTrap " << "Copy constructor called" << std::endl;
	*this = value;
}

void ClapTrap::attack(std::string const &target){
	std::cout << "ClapTrap " << _name << " attack " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << "I took damage " << amount << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << "I recovered " << amount << std::endl;
}