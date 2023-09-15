/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:09:30 by albagarc          #+#    #+#             */
/*   Updated: 2023/09/15 19:02:55 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

//**************************PUBLIC*****************************************//

//--------------------Constructor----Destructor----------------------------//
Harl::Harl(){

	return ;
}

Harl::~Harl(){

	return ;
}

//-------------------------------------------------------------------------//

//We do an array of levels and an array of Harl type functions. 
//Depending on the level we will execute the corresponding function.
void	Harl::complain(std::string level){

	std::string level_arr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for(int i = 0; i < 4; i++)
	{
		if(level != level_arr[i])
		{
			if(level != "DEBUG" &&  level != "INFO" && level != "WARNING" && level != "ERROR")
				i = 4;
			else
				continue;
		}
		switch(i){
			case 0:
				this->_debug();
			case 1:
				this->_info();
			case 2:
				this->_warning();
			case 3:
				this->_error();
				break;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;	
		}
	}
}

//**************************PRIVATE*****************************************//

void	Harl::_debug(void){
	std::cout	<< "[DEBUG]" << std::endl;
	std::cout	<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger." << std::endl;
	std::cout	<< "I really do!" << std::endl;
	return ;
}

void	Harl::_info(void){
	std::cout	<< "[INFO]" << std::endl;
	std::cout 	<< "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout	<< "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	return ;
}

void	Harl::_warning(void){
	std::cout	<< "[WARNING]" << std::endl;
	std::cout 	<< "I think I deserve to have some extra bacon for free." << std::endl ;
	std::cout	<< "I’ve been coming for years whereas you started working here since last month." << std::endl;
	return ;
}

void	Harl::_error(void){
	std::cout	<< "[ERROR]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	return ;
}
