/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:05:41 by albagarc          #+#    #+#             */
/*   Updated: 2023/09/21 13:42:40 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
//*****************************PUBLIC*****************************************//

//Default Constructor
ClapTrap::ClapTrap(){
	setName("");
	setHitPoints(10);
	setEnergyPoints(10);
	setAttackDamage(0);	
	return ;
}

//Constructor de copia
ClapTrap::ClapTrap(const ClapTrap& original): 	_name(original._name), 
												_hit_points(original._hit_points),
												_energy_points(original._energy_points),
												_attack_damage(original._attack_damage)
{
	return ;
}


//Constructor with name
ClapTrap::ClapTrap(const std::string& name){
	setName(name);
	setHitPoints(10);
	setEnergyPoints(10);
	setAttackDamage(0);	
	return ;
}



ClapTrap::~ClapTrap(){
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
			std::cout << RED << "No energy_points or hit_points available to attack"<< RESET <<std::endl;
			return ;
		}
	this->_energy_points--;
	std::cout << this->_name << " attacks " << target << ", causing " << this->_attack_damage <<" damage."<< std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount){
	
	this->_hit_points-= amount;
	if(this->_hit_points <= 0)
		std::cout << this->_name << " died" << std::endl;
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

}
//*****************************PRIVATE****************************************//