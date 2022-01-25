/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 14:06:07 by mcarry            #+#    #+#             */
/*   Updated: 2021/09/04 16:36:08 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array {	
	public:
		T *array;
		unsigned int n;

		Array();
		Array(unsigned int n);
		Array(Array<T> const &value);
		Array &operator=(Array<T> const &value);
		T &operator[](int index);
		T const &operator[](int &index) const;
		~Array();

		class Exception_border : public std::exception {
			virtual const char *what () const throw(){
				return ("Exeption border");
			};
		};
};

template<typename T>
std::ostream &operator<<(std::ostream & out, Array<T> const &value)
{
	for (unsigned int i = 0; i < value.n; i++)
		out << value[i] << std::endl;
	return (out);
}

#endif