/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 10:49:29 by mcarry            #+#    #+#             */
/*   Updated: 2021/09/04 13:57:54 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template<typename T>
void	ft_print(T setting) {
	std::cout << setting << " " ;
}

template<typename T>
void	iter(T *array, int lenght, void ft(T setting)){
	for (int i = 0; i < lenght; i++)
		ft(array[i]);
}

class Type {
	private:
		int _n;
	public:
		Type(){
			_n = 21;
			return ;
		}
		int get() const { return _n; }
		~Type(){}
};

std::ostream & operator<<(std::ostream &out, Type const &rhs ) {
	out << rhs.get(); 
	return out; 
}

int main() {
	int array[] = {89, 1, 200, 443, 4};
	std::string str[] = {"type", "array", "auto"};
	Type array_type[8];

	std::cout << "array int: \t";
	iter(array, 5, ft_print);
	std::cout <<std::endl;
	std::cout << "array string: \t";
	iter(str, 3, ft_print);
	std::cout <<std::endl;
	std::cout << "array type: \t";
	iter(array_type, 8, ft_print);
	std::cout <<std::endl;
}