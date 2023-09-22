/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:05:41 by albagarc          #+#    #+#             */
/*   Updated: 2023/09/22 10:21:01 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
//*****************************PUBLIC*****************************************//

//Default Constructor
ClapTrap::ClapTrap()
{
	setName("Default");
	setHitPoints(10);
	setEnergyPoints(10);
	setAttackDamage(0);	
	std::cout << GREY << this->_name << " ClapTrap was created." << RESET << std::endl;
	return ;
}

//Constructor de copia
ClapTrap::ClapTrap(const ClapTrap& original): 	
	_name(original._name), 
	_hit_points(original._hit_points),
	_energy_points(original._energy_points),
	_attack_damage(original._attack_damage)
{
	std::cout << GREY << this->_name << " ClapTrap was created whith a copy constructor." << RESET << std::endl;
	return ;
}


//Constructor with name
ClapTrap::ClapTrap(const std::string& name)
{
	this->setName(name);
	this->setHitPoints(10);
	this->setEnergyPoints(10);
	this->setAttackDamage(0);	
	std::cout << GREY << this->_name << " ClapTrap was created." << RESET << std::endl;
	return ;
}

//Assignation operator
ClapTrap&	ClapTrap::operator=(const ClapTrap& rhs)
{
	if(this == &rhs)
		return *this;
	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points;
	this->_energy_points = rhs._energy_points;
	this->_attack_damage = rhs._attack_damage;
	return *this;
}

ClapTrap::~ClapTrap()
{

	std::cout << GREY << this->_name << " ClapTrap was destructed." << RESET << std::endl;
	return ;
}


//SETTERS
void	ClapTrap::setName(const std::string& name){
	this->_name = name;
}

void	ClapTrap::setHitPoints(int hit_points){
	this->_hit_points = hit_points;
}

void	ClapTrap::setEnergyPoints(int energy_points){
	this->_energy_points = energy_points;
}

void	ClapTrap::setAttackDamage(int attack_damage){
	this->_attack_damage = attack_damage;
}

//GETTERS
const std::string&	ClapTrap::getName(void) const{
	return this->_name;
}

//OTHER
void	ClapTrap::attack(const std::string& target){
	if(this->_hit_points == 0 || this->_energy_points == 0)
		{
			std::cout << RED << " ClapTrap: No energy_points or hit_points available to attack"<< RESET <<std::endl;
			return ;
		}
	this->_energy_points--;
	std::cout << YELLOW << this->_name << " ClapTrap attacks " << target << ", causing " << this->_attack_damage <<" damage."<<  RESET << std::endl;
	std::cout << "My name is ClapTrap " << this->_name << " I have " << this->_energy_points << " energy points and " << this->_hit_points << " hit_points left."  << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount){
	if(this->_hit_points == 0)
	{
		std::cout << RED << this->_name << " was already dead. Stop attacking!" << RESET << std::endl;
		return ;
	}
	this->_hit_points-= amount;
	if(this->_hit_points <= 0)
	{
		this->_hit_points = 0;
		std::cout << RED << this->_name << " died" << RESET << std::endl;
		return ;

	}
	std::cout << YELLOW<< this->_name << " got hurt " << RESET << std::endl;
	std::cout << "My name is " << this->_name << " I have " << this->_energy_points << " energy points and " << this->_hit_points << " hit_points left." << std::endl;
}



void	ClapTrap::beRepaired(unsigned int amount){
	if(this->_hit_points == 0 || this->_energy_points == 0)
	{
		std::cout << RED << "No energy_points or hit_points available to be repaired"<< RESET <<std::endl;
		return ;
	}
	this->_energy_points--;
	this->_hit_points += amount;
	std::cout << GREEN << this->_name << " was repaired" << RESET << std::endl;
	std::cout << "My name is " << this->_name << " I have " << this->_energy_points << " energy points and " << this->_hit_points << " hit_points left."  << std::endl;

}
//*****************************PRIVATE****************************************//