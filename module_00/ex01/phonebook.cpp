/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 13:22:28 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/08 12:52:18 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

void	phonebook::exit(void) {
	std::cout << "Exiting ..." << std::endl;
	std::exit(EXIT_SUCCESS);
}

phonebook::phonebook() {
	this->_cout_index = 0;
}

void	phonebook::add(void) {
	contact c;
	std::string input;
	static int i = 0;
	
	std::cout << "Enter the first name : ";
	std::getline(std::cin, input);
	c.set_fname(input);
	std::cout << "Enter the last name : ";
	std::getline(std::cin, input);
	c.set_lname(input);
	std::cout << "Enter the nickname : ";
	std::getline(std::cin, input);
	c.set_nickname(input);
	std::cout << "Enter phone number : ";
	std::getline(std::cin, input);
	c.set_ph_number(input);
	std::cout << "Enter the darkest secret : ";
	std::getline(std::cin, input);
	c.set_secret(input);
	this->_contacts[i] = c;
	if (this->_cout_index != 8)
		this->_cout_index++;
	else
		this->_cout_index = 8;
	if (i < 7)
		i++;
	else
		i = 0;
}

std::string	process_wihth(std::string s) {
	std::string output;

	output = s.substr(0, 10);
	if (s.length() > 10)
		output[output.length()-1] = '.';
	return (output);
}


void	phonebook::print_phbook() {
	size_t size = 10;
	
	std::cout << std::setw(size) << "Index" << "|";
	std::cout << std::setw(size) << "First name" << "|";
	std::cout << std::setw(size) << "Last name" << "|";
	std::cout << std::setw(size) << "Nickname" << "|" << std::endl;
	for (int i = 0; i < this->_cout_index; i++) {
		std::cout << std::setw(size) << i << "|"
			<< std::setw(size) << process_wihth(this->_contacts[i].get_fname()) << "|"
			<< std::setw(size) << process_wihth(this->_contacts[i].get_lname()) << "|"
			<< std::setw(size) << process_wihth(this->_contacts[i].get_nickname()) << "|" << std::endl;
	}
}

void	phonebook::found_index() {
	int i = 0;
	std::string str;
	
	std::cout << "Input index to find contact: ";
	while (!std::cin.eof()) {
		std::getline(std::cin, str);
		std::istringstream(str) >> i;
		if (str.length() != 1 || i >= this->_cout_index || !isdigit(str[0])) {
			std::cout << "The number is not correct, please re-enter: ";
			continue ;
		}
		else
			break; 
	}
	
	if (i < this->_cout_index) {
		std::cout << "First name: " << _contacts[i].get_fname() << std::endl;
		std::cout << "Last name: " << _contacts[i].get_lname() << std::endl;
		std::cout << "Nick name: " << _contacts[i].get_nickname() << std::endl;
		std::cout << "Phone number: " << _contacts[i].get_ph_number() << std::endl;
		std::cout << "Darkest secret: " << _contacts[i].get_secret() << std::endl;
	}
}

void	phonebook::search() {	
		print_phbook();
		if (this->_cout_index)
			found_index();			
}
