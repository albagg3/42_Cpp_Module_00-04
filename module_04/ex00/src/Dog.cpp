/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:26:50 by albagarc          #+#    #+#             */
/*   Updated: 2023/10/07 16:18:17 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"


//Constructor
Dog::Dog() 
{
	this->type = "Dog";
	std::cout << GREY << "Dog constructor was called" << RESET << std::endl;
}

//Constructor copia
Dog::Dog(const Dog& original) : Animal(original)
{
	std::cout << GREY << "Dog copy constructor was called" << RESET << std::endl;
	
}

//Destructor
Dog::~Dog()
{
	std::cout << GREY << "Dog destructor was called" << RESET << std::endl;
}

//Assignation operator
//En el de asignacion no hace falta que hagamos el = al type porque ya estara creado antes 
Dog&	Dog::operator=(const Dog& rhs)
{
	std::cout << GREY << "Animal asignation operator was called" << RESET << std::endl;
	if(this == &rhs)
		return *this;
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "GUAU!!" << std::endl;
}
