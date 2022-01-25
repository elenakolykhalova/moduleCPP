/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 17:48:31 by mcarry            #+#    #+#             */
/*   Updated: 2021/09/03 10:03:45 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Castes.hpp"
#include <iostream>

int		main(int argc, char **argv) {
	if (argc != 2) {
		std::cerr << "ERROR number of arguments" << std::endl;
		return (-1);
	}
	else
	{
		Castes converter(argv[1]);
		if (converter.converter() == -1) {
			std::cerr << "ERROR input data" << std::endl;
			return (-1);
		}
	}
	return (0);
}