/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:06:47 by albagarc          #+#    #+#             */
/*   Updated: 2023/09/13 18:31:37 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Weapon.hpp"

//*********************************PUBLIC**************************************//

//------------------------Constructor----Destructor----------------------------//

Weapon::Weapon() {
	
	return ;
}

Weapon::~Weapon(){
	
	return ;
}

//-----------------------------------------------------------------------------//
const std::string& Weapon::getType() const{
	
	return this->_type;
}

void Weapon::setType(std::string new_value) {
	this->_type = new_value;
}