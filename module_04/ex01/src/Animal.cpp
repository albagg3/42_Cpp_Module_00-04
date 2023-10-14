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

#include "Animal.hpp"

//Constructor default
Animal::Animal()
{
	this->type = "Default";
	std::cout << GREY << "Default Animal constructor was called" << RESET << std::endl;
}

//Constructor copia
Animal::Animal(const Animal& original) : type(original.type) 
{
	std::cout << GREY << "Copy Animal constructor was called" << RESET << std::endl;
}

//Destructor
Animal::~Animal()
{
	std::cout << GREY << "Animal Destructor was called" << RESET << std::endl;
}

//Assignation operator
Animal&	Animal::operator=(const Animal& rhs)
{
	std::cout << GREY << "Animal asignation operator was called" << RESET << std::endl;
	if (this == &rhs)
		return *this;
	this->type = rhs.type;
	return *this;
}

void	Animal::makeSound() const
{
	return ;
}

//Getters
std::string	Animal::getType() const
{
	return this->type;
}

//overloaded operator
std::ostream& operator<< (std::ostream &out, const Animal &object)
{
    out << object.getType();
    return out;
}