/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:05:41 by albagarc          #+#    #+#             */
/*   Updated: 2023/09/21 18:55:11 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

//*****************************PUBLIC*****************************************//

//Default Constructor

ScavTrap::ScavTrap() : ClapTrap()
{
	this->setName("Default");
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);	
	std::cout << GREY << this->_name << " ScavTrap was created." << RESET << std::endl;
	return ;
}
//Copy Constructor
ScavTrap::ScavTrap(const ScavTrap& original): 	
	ClapTrap(original)
{
	std::cout << GREY << this->_name << " ScavTrap was created whith a copy constructor." << RESET << std::endl;
	return ;
}

//Constructor with name
ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);	
	std::cout << GREY << this->_name << " ScavTrap was created." << RESET << std::endl;
	return ;
}

ScavTrap::~ScavTrap(){
		std::cout << GREY << this->_name << " ScavTrap was destructed." << RESET << std::endl;

	return ;
}

void	ScavTrap::attack(const std::string& target)
{
	if(this->_hit_points == 0 || this->_energy_points == 0)
		{
			std::cout << RED << "ScavTrap: No energy_points or hit_points available to attack"<< RESET <<std::endl;
			return ;
		}
	this->_energy_points--;
	std::cout << YELLOW << this->_name << " ScavTrap attacks " << target << ", causing " << this->_attack_damage <<" damage."<<  RESET << std::endl;
	std::cout << "My name is ScavTrap " << this->_name << " I have " << this->_energy_points << " energy points and " << this->_hit_points << " hit_points left."  << std::endl;
}

void ScavTrap::guardGate(){
	std::cout << this->_name << " ScavTrap is on gate keeper mode" << std::endl;
}