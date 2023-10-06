/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:05:41 by albagarc          #+#    #+#             */
/*   Updated: 2023/10/06 17:29:36 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"

//*****************************PUBLIC*****************************************//

//Default Constructor

FragTrap::FragTrap() : ClapTrap()
{
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);	
	std::cout << GREY << this->_name << " FragTrap was created." << RESET << std::endl;
	return ;
}
//Copy Constructor
FragTrap::FragTrap(const FragTrap& original): 	
	ClapTrap(original)
{
	std::cout << GREY << this->_name << " FragTrap was created whith a copy constructor." << RESET << std::endl;
	return ;
}

//Constructor with name
FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);	
	std::cout << GREY << this->_name << " FragTrap was created." << RESET << std::endl;
	return ;
}

//Destructor
FragTrap::~FragTrap(){
		std::cout << GREY << this->_name << " FragTrap was destructed." << RESET << std::endl;

	return ;
}

//Assignation Operator
FragTrap& FragTrap::operator=(const FragTrap& rhs)
{
	if(this == &rhs)
		return *this;
	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points;
	this->_energy_points = rhs._energy_points;
	this->_attack_damage = rhs._attack_damage;
	return *this;
}

void FragTrap::highFivesGuys(){
	std::cout << this->_name << " FragTrap says: Give me a high Five!!" << std::endl;
}