/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:26:50 by albagarc          #+#    #+#             */
/*   Updated: 2023/10/29 20:37:30 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//Constructor
Dog::Dog() 
{
	this->type = "Dog";
	this->_brain_dog = new Brain();
	std::cout << GREY << "Dog constructor was called" << RESET << std::endl;
}

//Constructor copia
Dog::Dog(const Dog& original) : AAnimal(original)
{
	this->_brain_dog = new Brain(*original._brain_dog);
	std::cout << GREY << "Dog copy constructor was called" << RESET << std::endl;
}

//Destructor
Dog::~Dog()
{
	delete this->_brain_dog;
	std::cout << GREY << "Dog destructor was called" << RESET << std::endl;
}

//Assignation operator
//En el de asignacion no hace falta que hagamos el = al type porque ya estara creado antes 
Dog&	Dog::operator=(const Dog& rhs)
{
	std::cout << GREY << "Dog asignation operator was called" << RESET << std::endl;
	if(this == &rhs)
		return *this;
	delete this->_brain_dog;
	this->_brain_dog = new Brain(*rhs._brain_dog);
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "GUAU!!" << std::endl;
}

void	Dog::addIdeaToBrain(std::string idea)
{
	this->_brain_dog->setIdea(idea);
}

void	Dog::getIdeaOfBrain() const
{
	this->_brain_dog->getIdeas();
}
