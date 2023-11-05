/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:29:12 by codespace         #+#    #+#             */
/*   Updated: 2023/11/05 19:27:38 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

//Constructor
Cure::Cure() : AMateria("cure")
{

	std::cout << GREY << "Default Cure constructor called" << RESET << std::endl;
}

//Copy constructor
Cure::Cure(const Cure& original) : AMateria(original) 
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
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}