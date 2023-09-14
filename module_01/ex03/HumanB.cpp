/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:08:37 by albagarc          #+#    #+#             */
/*   Updated: 2023/09/14 17:42:06 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

//*********************************PUBLIC**************************************//

//------------------------Constructor----Destructor----------------------------//

HumanB::HumanB() {

	return ;
}

HumanB::HumanB(std::string name) : _name(name){
	std::cout << this->_name << " was created" << std::endl;
	this->_weapon = NULL;
	return ;
}

HumanB::~HumanB(void){
	
	std::cout << this->_name << " died" << std::endl;
	return ;
}

//-------------------------------------------------------------------------------//

void	HumanB::attack(void) const{
	// std::cout<< this->_weapon  << std::endl;
	if(!this->_weapon )
	{
		std::cout << "I don't have a weapon" << std::endl;
		return ;
	}
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	return ;
}

void	HumanB::setWeapon(Weapon& weapon) {
	
	this->_weapon = &weapon;
	return ;
}

//*********************************PRIVATE**************************************//
