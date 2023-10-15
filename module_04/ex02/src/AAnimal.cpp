/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:26:36 by albagarc          #+#    #+#             */
/*   Updated: 2023/10/14 16:39:03 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

//Constructor default
AAnimal::AAnimal()
{
	this->type = "Default";
	std::cout << GREY << "Default AAnimal constructor was called" << RESET << std::endl;
}

//Constructor copia
AAnimal::AAnimal(const AAnimal& original) : type(original.type) 
{
	std::cout << GREY << "Copy AAnimal constructor was called" << RESET << std::endl;
}

//Destructor
AAnimal::~AAnimal()
{
	std::cout << GREY << "AAnimal Destructor was called" << RESET << std::endl;
}

//Assignation operator
AAnimal&	AAnimal::operator=(const AAnimal& rhs)
{
	std::cout << GREY << "AAnimal asignation operator was called" << RESET << std::endl;
	if (this == &rhs)
		return *this;
	this->type = rhs.type;
	return *this;
}

//Getters
std::string	AAnimal::getType() const
{
	return this->type;
}

//overloaded operator
std::ostream& operator<< (std::ostream &out, const AAnimal &object)
{
    out << object.getType();
    return out;
}