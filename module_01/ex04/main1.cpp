/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main1.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 14:57:11 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/13 18:32:23 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <fstream>

int main(){
	
	std::string path = "myFile.txt";
	std::ifstream fin;
	fin.open(path);

	if (!fin.is_open()){
		std::cout << "ERROR FILE OPEN" << std::endl;
	}
	else {
		std::cout << "File open" << std::endl;
		char R;
		while (fin.get(R))
		{
			std::cout << R;
		}
	}
	fin.close();

	return 0;

}