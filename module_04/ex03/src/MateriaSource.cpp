/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 19:57:40 by albagarc          #+#    #+#             */
/*   Updated: 2023/11/05 19:38:25 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"
//Constructor
MateriaSource::MateriaSource ()
{
	for (int i = 0; i < 4; i++)
	{
		this->_materia_source_inventory[i] = NULL;
	}
    std::cout << "Default MateriaSource constructor called" << std::endl;
}

//Copy Constructor
MateriaSource::MateriaSource(const MateriaSource& original)
{
	for (int i = 0; i < 4; i++)
    {
		if(original._materia_source_inventory[i]== NULL)
			this->_materia_source_inventory[i] = NULL;
		else
        	this->_materia_source_inventory[i] = original._materia_source_inventory[i]->clone();
		//tenemos que usar .clone porque sino no es deep copy y igualamos punteros
    }
    
    std::cout << "Copy Constructor Character constructor was called" << std::endl;
}


// Assignation operator
MateriaSource&  MateriaSource::operator=(const MateriaSource& rhs)
{
	if (this == &rhs)
		return *this;
	for (int i = 0; i < 4; i++)
    {
        if (this->_materia_source_inventory[i])
            delete this->_materia_source_inventory[i];
    }
    for (int i = 0; i < 4; i++)
    {
		if (rhs._materia_source_inventory[i] == NULL)
			this->_materia_source_inventory[i] = NULL;
		else
        	this->_materia_source_inventory[i] = rhs._materia_source_inventory[i]->clone();
    }
	return *this;
}

//Destructor
MateriaSource::~MateriaSource()
{
    std::cout << "Default materia source destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia_source_inventory[i] != NULL)
			delete this->_materia_source_inventory[i];
	}
}

void	MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia_source_inventory[i] == NULL)
		{
			this->_materia_source_inventory[i] = m;
			return ;
		}
	}
	std::cout << "The materia source inventory is full you can't learn more materias" << std::endl;

}

AMateria*	MateriaSource::createMateria(const std::string& type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia_source_inventory[i]->getType() == type)
			return (this->_materia_source_inventory[i]->clone());
	}
	std::cout << "You don't know that materia you need to learn it before using it" << std::endl;
	return NULL;
}

