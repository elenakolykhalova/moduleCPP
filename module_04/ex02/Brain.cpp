/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 13:52:24 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/25 17:50:42 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &volue) {
	*this = volue;
}

Brain &Brain::operator=(const Brain &volue) {
	for (int i = 0; i < 100; i++)
		this->array[i] = volue.array[i];
	return *this;
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}
