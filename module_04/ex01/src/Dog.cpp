/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:26:50 by albagarc          #+#    #+#             */
/*   Updated: 2023/10/14 20:09:09 by albagarc         ###   ########.fr       */
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
Dog::Dog(const Dog& original) : Animal(original)
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


