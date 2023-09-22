/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:53:37 by albagarc          #+#    #+#             */
/*   Updated: 2023/09/22 12:40:17 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../inc/DiamondTrap.hpp"

//*****************************PUBLIC*****************************************//

//Default Constructor

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);	
	std::cout << GREY << this->_name << " DiamondTrap was created." << RESET << std::endl;
	return ;
}
//Copy Constructor
DiamondTrap::DiamondTrap(const DiamondTrap& original): 	
	ClapTrap(original)
{
	std::cout << GREY << this->_name << " DiamondTrap was created whith a copy constructor." << RESET << std::endl;
	return ;
}

//Constructor with name
DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name)
{
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);	
	std::cout << GREY << this->_name << " DiamondTrap was created." << RESET << std::endl;
	return ;
}

DiamondTrap::~DiamondTrap(){
		std::cout << GREY << this->_name << " DiamondTrap was destructed." << RESET << std::endl;

	return ;
}

void	DiamondTrap::whoAmI(void){
	
}
