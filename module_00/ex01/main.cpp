/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 20:47:04 by mcarry            #+#    #+#             */
/*   Updated: 2021/09/05 20:27:20 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"

int		main() {
	phonebook pb;
	std::string buffer;
	
	while (1) {
		std::cout << "Await command: ";
		std::getline(std::cin, buffer);
		if (buffer == "EXIT")
			pb.exit();
		else if (buffer == "ADD")
			pb.add();
		else if (buffer == "SEARCH")
			pb.search();
		else
			std::cout << "Don't know this command" << std::endl;
	}
	return 0;
}
