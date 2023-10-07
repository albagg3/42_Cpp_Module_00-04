/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:27:07 by albagarc          #+#    #+#             */
/*   Updated: 2023/10/07 16:18:34 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


//Constructor
Cat::Cat() 
{
	this->type = "cat";
	std::cout << GREY << "Cat constructor was called" << RESET << std::endl;
}

//Constructor copia
Cat::Cat(const Cat& original) : Animal(original)
{
	std::cout << GREY << "Cat copy constructor was called" << RESET << std::endl;
	
}

//Destructor
Cat::~Cat()
{
	std::cout << GREY << "Cat destructor was called" << RESET << std::endl;
}

//Assignation operator
//En el de asignacion no hace falta que hagamos el = al type porque ya estara creado antes 
Cat&	Cat::operator=(const Cat& rhs)
{	
	std::cout << GREY << "Animal asignation operator was called" << RESET << std::endl;
	if(this == &rhs)
		return *this;
	// this->type = original.type
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "MIAU!!" << std::endl;
}
