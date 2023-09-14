/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:06:47 by albagarc          #+#    #+#             */
/*   Updated: 2023/09/14 16:29:20 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Weapon.hpp"

//*********************************PUBLIC**************************************//

//------------------------Constructor----Destructor----------------------------//

Weapon::Weapon() {
	
	return ;
}

Weapon::Weapon(std::string type) : _type(type){
	this->_type = type;
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