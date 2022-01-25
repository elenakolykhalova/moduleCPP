/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 21:43:20 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/24 13:08:55 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap() {
	_hitpoints = FragTrap::_hitpoints;
	_energy_points = ScavTrap::_energy_points;
	_attack_damage = FragTrap::_attack_damage;
	std::cout << "DiamondTrap " << "Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap() {
	_name = name + "_clap_trap";
	_diamond_name = name;
	_hitpoints = FragTrap::_hitpoints;
	_energy_points = ScavTrap::_energy_points;
	_attack_damage = FragTrap::_attack_damage;
	std::cout << "DiamondTrap " << _diamond_name << " Constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap " << "Destructor called" << std::endl;
	return;
}

void DiamondTrap::attack(const std::string &name) {
	FragTrap::attack(name);
}

DiamondTrap  &DiamondTrap::operator=(const DiamondTrap &value) {
	this->_name = value._name;
	_hitpoints = value._hitpoints;
	_energy_points = value._energy_points;
	_attack_damage = value._attack_damage;
	std::cout << "DiamondTrap " << "Assignation operator called" << std::endl;
	return *this;
}

DiamondTrap::DiamondTrap(const DiamondTrap &value) {
	std::cout << "DiamondTrap " << "Copy constructor called" << std::endl;
	*this = value;
}

void DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap: " << DiamondTrap::_diamond_name << " ClapTrap: " << ClapTrap::_name << std::endl;
}