/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 20:09:16 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/13 14:53:56 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA {
	private:
		std::string _name;
		Weapon		*_weapon;
		
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);
		
		void	attack(void);
};

#endif
