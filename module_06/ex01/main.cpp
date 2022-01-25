/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 12:00:14 by mcarry            #+#    #+#             */
/*   Updated: 2021/09/03 16:08:48 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

struct Data
{
	int			value;
	std::string str;
};

uintptr_t serialize(Data* ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw) {
	Data *retType = reinterpret_cast<Data *>(raw);
	return (retType);
}

int		main(void) {
	Data *data1 = new Data;
	Data *data2;
	uintptr_t raw;
	
	raw = serialize(data1);
	data2 = deserialize(raw);
	// std::cout << "Raw: " << raw << std::endl;
	std::cout << "Start address dptr:\t" << data1 << std::endl;
	std::cout << "End address dptr:\t" << data2 << std::endl;
	return (0);
}