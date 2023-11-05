/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:27:45 by codespace         #+#    #+#             */
/*   Updated: 2023/11/05 19:40:30 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// Constructor
Character::Character() : _name("Default") 
{
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
		this->_unequipped_materias[i] = NULL;
	}
    std::cout << "Default Character constructor called" << std::endl;
}

//Copy constructor
Character::Character(const Character& original) : _name(original._name)
{
    for (int i = 0; i < 4; i++)
    {
		if(original._inventory[i]== NULL)
			this->_inventory[i] = NULL;
		else
        	this->_inventory[i] = original._inventory[i]->clone();
		//tenemos que usar .clone porque sino no es deep copy y igualamos punteros
		if(original._unequipped_materias[i]== NULL)
			this->_unequipped_materias[i] = NULL;
		else
        	this->_unequipped_materias[i] = original._unequipped_materias[i]->clone();
    }
    
    std::cout << "Copy Constructor Character constructor was called" << std::endl;
}


//Constructor defining name
Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
		this->_unequipped_materias[i] = NULL;
	}
    std::cout << "Constructor Character with type defined constructor was called" << std::endl;
}

//Assignation operator
Character&    Character::operator=(const Character& rhs)
{
	if (this == &rhs)
		return *this;
	for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i])
            delete this->_inventory[i];
		if (this->_unequipped_materias[i])
			delete this->_unequipped_materias[i];
    }
	std::cout << "hola" << std::endl;
    for (int i = 0; i < 4; i++)
    {
		if (rhs._inventory[i] == NULL)
			this->_inventory[i] = NULL;
		else
        	this->_inventory[i] = rhs._inventory[i]->clone();
		if (rhs._unequipped_materias[i] == NULL)
			this->_unequipped_materias[i] = NULL;
		else
			this->_unequipped_materias[i] = rhs._unequipped_materias[i]->clone();
    }
	this->_name = rhs._name;
	return *this;
}

//Destructor
Character::~Character()
{

	for(int i = 0; i < 4; i++)
	{
		if(this->_inventory[i] != NULL)
			delete this->_inventory[i];
		if(this->_unequipped_materias[i] != NULL)
			delete this->_unequipped_materias[i];
	}
    std::cout << "Default Character destructor called" << this->_name << std::endl;
}

const std::string& Character::getName() const
{
	return this->_name;
}

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			return ;
		}
	}
	std::cout << "Sorry, the inventory is full, you should unequip a materia before trying to equip a materia" << std::endl;
}

void	Character::unequip(int idx)
{
	if(this->_inventory[idx] == NULL || (idx < 0 || idx > 4))
	{
		std::cout << "There is nothing in that slot of the inventory" << std::endl;
	}
	else
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_unequipped_materias[i] == NULL)
			{
				this->_unequipped_materias[i] = this->_inventory[idx];
				this->_inventory[idx] = NULL;
				return;
			}
			
		}
		std::cout << "You can't unequip more materias the maximum is 4" << std::endl;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if(idx < 4 && idx >= 0 && this->_inventory[idx] != NULL)
		this->_inventory[idx]->use(target);
	else
		std::cout << "The index is wrong" << std::endl;
}
