/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:29:16 by codespace         #+#    #+#             */
/*   Updated: 2023/11/05 19:27:44 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Ice.hpp"
#include "ICharacter.hpp"

//Constructor
Ice::Ice() : AMateria("ice")
{
	std::cout << GREY << "Default Ice constructor called" << RESET << std::endl;
}

//Copy constructor
Ice::Ice(const Ice& original) : AMateria(original) 
{
	std::cout << GREY << "Ice copy constructor called" << RESET << std::endl;
}

//Destructor
Ice::~Ice()
{
	std::cout << GREY << "Ice destructor called" << RESET << std::endl;
}

//Assignation operator
Ice&	Ice::operator=(const Ice& rhs)
{
	std::cout << GREY << "Ice asignation operator was called" << RESET << std::endl;
	if (this == &rhs)
		return *this;
	// this->type = rhs.type; no hace falta 
	return *this;
}

Ice*	Ice::clone() const
{
	Ice* new_ice = new Ice();
	return new_ice;
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}