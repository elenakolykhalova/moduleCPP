/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 18:23:19 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/15 02:11:19 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char **av) {
	
	if (ac != 4){
		std::cout << "ERROR: please enter 4 parameters: ./main file_name str_found str_replace " << std::endl;
		return (1);
	}
	
	std::string	file_name;
	file_name = av[1];
	std::ifstream fin;
	std::ofstream fout;
	
	fin.open(av[1]);
	if (!fin.is_open()){
		std::cout << "ERROR: can't open the file " << av[1] << std::endl;
		return 1;
	}
	file_name.append(".new");
	fout.open(file_name);
	if (!fout.is_open()){
		std::cout << "ERROR: can't create the file" << file_name << std::endl;
		fin.close();
		return 1;
	}
	std::string buffer;
	size_t i;
	
	while (true){
		
		std::getline(fin, buffer);
		while (true) {

			i = buffer.find(av[2]);
			if (i == std::string::npos) {
				fout << buffer;
				break ;
			}
			fout << buffer.substr(0, i) << av[3];
			buffer = buffer.substr(i + std::strlen(av[2]));
		}
		if (fin.eof())
			break ;
		fout << std::endl;
	};
	fin.close();
	fout.close();
	
	return (0);	
}
