/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 13:52:11 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/25 17:50:30 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain {
	private:
		std::string array[100];
	public:
		Brain();
		Brain(const Brain &volue);
		Brain &operator=(const Brain &volue);
		virtual ~Brain();	
};

#endif