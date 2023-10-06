/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:53:37 by albagarc          #+#    #+#             */
/*   Updated: 2023/10/06 17:47:01 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../inc/DiamondTrap.hpp"

//*****************************PUBLIC*****************************************//

//Default Constructor

DiamondTrap::DiamondTrap() 
{
	this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage = FragTrap::_attack_damage;	
	std::cout << GREY << this->_name << " DiamondTrap default was created." << RESET << std::endl;
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
DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name" )
{
	this->_name_diamond = name;
	this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage = FragTrap::_attack_damage;
	std::cout << GREY << this->_name << " DiamondTrap was created." << RESET << std::endl;
	return ;
}

//Destructor

DiamondTrap::~DiamondTrap()
{
		std::cout << GREY << this->_name << " DiamondTrap was destructed." << RESET << std::endl;

	return ;
}

//Assignation operator
DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& rhs)
{
	if(this == &rhs)
		return *this;
	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points;
	this->_energy_points = rhs._energy_points;
	this->_attack_damage = rhs._attack_damage;
	return *this;
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "I'm a Diamond, my name is: " << this->_name_diamond << std::endl;
	std::cout << "My parent name is: " << ClapTrap::_name << std::endl;
}
