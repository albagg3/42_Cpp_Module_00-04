/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:29:12 by codespace         #+#    #+#             */
/*   Updated: 2023/10/29 19:21:07 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

//Constructor
Cure::Cure() : type("cure")
{
	std::cout << GREY << "Default Cure constructor called" << RESET << std::endl;
}

//Copy constructor
Cure::Cure(const Cure& original) : type(original.type) 
{
	std::cout << GREY << "Cure copy constructor called" << RESET << std::endl;
}

//Destructor
Cure::~Cure()
{
	std::cout << GREY << "Cure destructor called" << RESET << std::endl;
}

//Assignation operator
Cure&	Cure::operator=(const Cure& rhs)
{
	std::cout << GREY << "Cure asignation operator was called" << RESET << std::endl;
	if (this == &rhs)
		return *this;

	return *this;
}

Cure*	Cure::clone() const
{
	Cure* new_cure = new Cure();
	return new_cure;
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target << "'s wounds *";
}