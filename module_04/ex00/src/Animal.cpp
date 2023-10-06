/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:26:36 by albagarc          #+#    #+#             */
/*   Updated: 2023/10/06 19:03:37 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//Constructor default
Animal::Animal()
{
	std::cout << "Default Animal constructor was called" << std::endl;
}

//Constructor copia
Animal::Animal(const Animal& original): type(original.type) 
{
	std::cout << "Copy Animal constructor was called" << std::endl;
}

//Destructor
Animal::~Animal()
{
	std::cout << "Animal Destructor was called" << std::endl;
}

