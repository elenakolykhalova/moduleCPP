/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 12:12:42 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/11 21:46:52 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	private:
		std::string _name;
		
	public:
		Zombie(void);
		~Zombie(void);
		void	announce(void);
		void	setName(std::string name);
		
};

Zombie* zombieHorde(int N, std::string name);

#endif