/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 20:09:24 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/13 14:53:33 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB {
	private:
		std::string _name;
		Weapon		*_weapon;
		
	public:
		HumanB(std::string name);
		~HumanB(void);
		
		void	attack();
		void	setWeapon(Weapon &weapon);
};

#endif