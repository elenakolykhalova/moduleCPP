/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 17:42:34 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/15 02:05:13 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
	
int	main(int ac, char **av) {

	Karen	Karen;

	if (ac != 2) {
		std::cout << "ERROR: Please enter as in the example: ./karenFilter input_level" << std::endl;
		return 1;
	}

	if (Karen.complain(av[1]) == 1)
		std::cout << "!!! Probably complaining about insignificant problems !!!" << std::endl;
	return (0);	
}
