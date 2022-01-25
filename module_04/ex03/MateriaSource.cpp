/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 23:03:50 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/27 20:31:45 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"


MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		MS[i] = nullptr;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++)
		delete MS[i];
}
MateriaSource &MateriaSource::operator=(const MateriaSource &value) {
	for (int i = 0; i < 4; i++)
		if (value.MS[i] != nullptr)
			this->MS[i] = value.MS[i]->clone();
	return (*this);
}
MateriaSource::MateriaSource(const MateriaSource &value) {
	*this = value;
}

void	MateriaSource::learnMateria(AMateria *materia) {
	for (int i = 0; i < 4; i++)
		if (this->MS[i] == nullptr)
		{
			this->MS[i] = materia;
			return ;
		}
}

AMateria *MateriaSource::createMateria(std::string const &type) {
	for (int i = 0; i < 4; i++)
		if (MS[i] != nullptr)
			if (type.compare(MS[i]->getType()) == 0)
				return (MS[i]);
	return (0);
}