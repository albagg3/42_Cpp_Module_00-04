/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 14:14:54 by albagarc          #+#    #+#             */
/*   Updated: 2023/10/14 16:47:07 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "wrongCat";
	std::cout << GREY << "Default WrongCat constructor called" << RESET << std::endl;
}

WrongCat::WrongCat(WrongCat& original) : WrongAnimal(original)
{
	std::cout << GREY << "WrongCat copy constructor called" << RESET << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << GREY << "WrongCat destructor called" << RESET << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& rhs)
{
	if (this == &rhs)
		return *this;
	this->type = rhs.type;
	return *this;
}

void	WrongCat::makeSound() const
{
	std::cout << "Miau ?????" << std::endl;
}