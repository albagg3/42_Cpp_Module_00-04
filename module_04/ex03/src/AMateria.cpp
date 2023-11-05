/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 18:00:42 by codespace         #+#    #+#             */
/*   Updated: 2023/11/05 18:56:42 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

//Constructor
AMateria::AMateria()
{
    std::cout << "Default AMateria constructor was called" << std::endl;
}

//Copy constructor
AMateria::AMateria(const AMateria& original) : type(original.type)
{
    std::cout << "Copy Constructor AMateria constructor was called" << std::endl;
}

//Constructor defining type
AMateria::AMateria(std::string const & type) : type(type)
{
    std::cout << "Constructor AMateria with type defined constructor was called" << std::endl;
}

//Destructor
AMateria::~AMateria()
{
    std::cout << "Default AMateria destructor called" << std::endl;
}

const std::string& AMateria::getType() const
{
    return this->type;
}
