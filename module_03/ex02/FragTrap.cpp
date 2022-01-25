/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 19:56:28 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/24 13:41:36 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap() {
	_name = "No_name";
	_hitpoints = 100;
	_energy_points = 50;
	_attack_damage = 20;
	std::cout << "FragTrap " << "Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap() {
	_name = name;
	_hitpoints = 100;
	_energy_points = 50;
	_attack_damage = 20;
	std::cout << "FragTrap " << name << " Constructor called" << std::endl;
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap " << "Destructor called" << std::endl;
	return;
}

FragTrap  &FragTrap::operator=(const FragTrap &value) {
	_name = value._name;
	_hitpoints = value._hitpoints;
	_energy_points = value._energy_points;
	_attack_damage = value._attack_damage;
	std::cout << "FragTrap " << "Assignation operator called" << std::endl;
	return *this;
}

FragTrap::FragTrap(const FragTrap &value) {
	std::cout << "FragTrap " << "Copy constructor called" << std::endl;
	*this = value;
}

void FragTrap::attack(std::string const &target){
	std::cout << "FragTrap " << _name << " attack " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << "high fives" << std::endl;
}

