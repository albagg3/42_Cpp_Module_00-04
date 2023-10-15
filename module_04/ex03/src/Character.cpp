/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:27:45 by codespace         #+#    #+#             */
/*   Updated: 2023/10/15 18:41:17 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// Constructor
Character::Character() : _name("Default") 
{
    std::cout << "Default Character constructor called" << std::endl;
}

//Copy constructor
Character::Character(const Character& original) : _name(original._name)
{
    //comprobar si el array esta vacio
    //borrar inventario y copiar nuevo
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory)
        {
            delete this->_inventory;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        //SON MATERIAS???
        this->_inventory[i] = original._inventory[i];
    }
    
    std::cout << "Copy Constructor Character constructor was called" << std::endl;
}

//Constructor defining name
Character::Character(std::string name) : _name(name)
{
    std::cout << "Constructor Character with type defined constructor was called" << std::endl;
}

//Destructor
Character::~Character()
{
    std::cout << "Default Character destructor called" << std::endl;
}