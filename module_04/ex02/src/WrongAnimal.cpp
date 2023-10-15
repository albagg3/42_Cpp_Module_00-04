/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 14:14:45 by albagarc          #+#    #+#             */
/*   Updated: 2023/10/14 16:36:35 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// Constructor
WrongAnimal::WrongAnimal() : type("Default") 
{
	std::cout << GREY << "Default WrongAnimal constructor called" << RESET << std::endl; 
}

//Copy constructor
WrongAnimal::WrongAnimal(WrongAnimal& original) : type(original.type)
{
	std::cout << GREY << "Copy WrongAnimal constructor called" << RESET << std::endl;
}

//Destructor
WrongAnimal::~WrongAnimal()
{
	std::cout << GREY << "WrongAnimal destructor called" << RESET << std::endl;
}

//Assignation operator
WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& rhs)
{
	std::cout << GREY << "WrongAnimal asignation operator was called" << RESET << std::endl;
	if (this == &rhs)
		return *this;
	this->type = rhs.type;
	return *this;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "oink oink!!" << std::endl;
	return ;
}

//Getters
std::string	WrongAnimal::getType()	const
{
	return this->type;
}

//overloaded operator
std::ostream& operator<< (std::ostream &out, const WrongAnimal &object)
{
    out << object.getType();
    return out;
}