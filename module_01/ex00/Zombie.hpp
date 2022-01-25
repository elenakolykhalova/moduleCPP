/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 12:12:42 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/11 19:34:56 by mcarry           ###   ########.fr       */
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
		Zombie(std::string name);
		~Zombie( void );
		void	announce(void);
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif