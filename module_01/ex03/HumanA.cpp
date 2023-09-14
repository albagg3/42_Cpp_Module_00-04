/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:08:06 by albagarc          #+#    #+#             */
/*   Updated: 2023/09/14 17:49:03 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

//*********************************PUBLIC**************************************//

//------------------------Constructor----Destructor----------------------------//

HumanA::HumanA(const std::string& name, Weapon&	weapon) : _name(name), _weapon(weapon){
	std::cout<< this->_name << " was created" << std::endl;
	return ;
}

HumanA::~HumanA(void){
	
	std::cout << this->_name << " died" << std::endl;
	return ;
}

//------------------------------------------------------------------------------//

void	HumanA::attack(void) const{
	
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
	return ;
}

void	HumanA::setWeapon(Weapon& weapon) {
	
	this->_weapon = weapon;
	return ;
}

//*********************************PRIVATE**************************************//
