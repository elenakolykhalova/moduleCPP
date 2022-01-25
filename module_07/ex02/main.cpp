/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 14:06:10 by mcarry            #+#    #+#             */
/*   Updated: 2021/09/04 18:29:17 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Array.hpp"

template <typename T>
Array<T>::Array() {
	array = nullptr;
	this->n = 0;
}

template<typename T>
Array<T>::Array(unsigned int n) {
	this->n = n;
	this->array = new T[n];
	for (unsigned int i = 0; i < n; i++)
		array[i] = 0;
	
}

template<typename T>
Array<T>::Array(Array<T> const &value) {
	n = value.n;
	array = new T[n];
	for (unsigned int i = 0; i < n; i++)
		array[i] = value.array[i];
}

template <typename T>
Array<T> &Array<T>::operator=(Array<T> const &value) {
	if (&value == this)
		return *this;

	if (this->n != value.n)
	{
		if (this->array != NULL)
			delete[] this->array;
		this->array = new T[value.n];
	}

	this->n = value.n;
	for (unsigned int i = 0; i < value.n; i++)
		this->array[i] = value.array[i];
	return *this;
}

template<typename T>
T &Array<T>::operator[](int index) {
	if (static_cast<unsigned int>(index) >= n)
		throw Array::Exception_border();
	return (array[index]);
};

template<typename T>
T const &Array<T>::operator[](int &index) const {
	if (static_cast<unsigned int>(index) >= n)
		throw Array::Exception_border();
	return (array[index]);
};

template<typename T>
Array<T>::~Array() {
	if (array)
		delete[] array;
}



int main(void) {
	
	srand(time(NULL));
	int ixt = (rand() % 15);
	
	try 
	{
		Array<unsigned int> a(ixt);
		std::cout << "A default -> ";
		for (unsigned int i = 0; i < a.n; i++)
			std::cout << a[i] << " ";
		std::cout << std::endl;

		
		std::cout << "A -> ";
		for (unsigned int i = 0; i < a.n; i++)
		{
			a[i] = i;
			std::cout << a[i] << " ";
		}
		std::cout << std::endl;

		std::cout << a[15] << std::endl;
		
		Array<unsigned int> b(a);

		std::cout << "B -> ";
		for (unsigned int i = 0; i < b.n; i++)
		{
			b[i] = i + 1;
			std::cout << b[i] << " ";
		}
		std::cout << std::endl;

		Array<unsigned int> c;

		c = b;
		std::cout << "C copy B -> ";
		for (unsigned int i = 0; i < c.n; i++)
		{
			std::cout << c[i] << " ";
		}
		std::cout << std::endl;

	}
	catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

	
}