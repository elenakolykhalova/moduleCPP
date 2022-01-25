/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 19:56:28 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/24 13:41:15 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap() {
	_name = "No_name";
	_hitpoints = 100;
	_energy_points = 50;
	_attack_damage = 20;
	std::cout << "ScavTrap " << "Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap() {
	_name = name;
	_hitpoints = 100;
	_energy_points = 50;
	_attack_damage = 20;
	std::cout << "ScavTrap " << name << " Constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap " << "Destructor called" << std::endl;
	return;
}

ScavTrap  &ScavTrap::operator=(const ScavTrap &value) {
	_name = value._name;
	_hitpoints = value._hitpoints;
	_energy_points = value._energy_points;
	_attack_damage = value._attack_damage;
	std::cout << "ScavTrap " << "Assignation operator called" << std::endl;
	return *this;
}

ScavTrap::ScavTrap(const ScavTrap &value) {
	std::cout << "ScavTrap " << "Copy constructor called" << std::endl;
	*this = value;
}

void ScavTrap::attack(std::string const &target){
	std::cout << "ScavTrap " << _name << " attack " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << "Gate keeper mode" << std::endl;
}

