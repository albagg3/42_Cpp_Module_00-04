/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:19:31 by albagarc          #+#    #+#             */
/*   Updated: 2023/09/13 12:42:50 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

//*********************************PUBLIC**************************************//

//------------------------Constructor----Destructor----------------------------//

Zombie::Zombie() {
	
	std::cout<< "Zombie was born" << std::endl;
	return ;
}

Zombie::Zombie(std::string	name) : _name(name){
	
	std::cout<< this->_name << " created" << std::endl;
	return ;
}

Zombie::~Zombie(void){
	
	std::cout << this->_name << " died" << std::endl;
	return ;
}

void	Zombie::announce(void){
	
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

void	Zombie::setName(std::string name) {
	
	this->_name = name;
	return ;
}

//*********************************PRIVATE**************************************//
