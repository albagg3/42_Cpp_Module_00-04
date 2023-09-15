/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:09:30 by albagarc          #+#    #+#             */
/*   Updated: 2023/09/15 18:14:17 by albagarc         ###   ########.fr       */
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
	void (Harl::*functions[4])(void) = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	for(int i = 0; i < 4; i++)
	{
		if(level == level_arr[i])
			(this->*functions[i])();
	}
}

//**************************PRIVATE*****************************************//

void	Harl::_debug(void){
	std::cout	<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup"
				<< " burger. I really do!" << std::endl;
	return ;
}

void	Harl::_info(void){

	std::cout 	<< "I cannot believe adding extra bacon costs more money. You didn’t put"
				<<" enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	return ;
}

void	Harl::_warning(void){

	std::cout 	<< "I think I deserve to have some extra bacon for free. I’ve been coming for"
				<< "years whereas you started working here since last month." << std::endl;
	return ;
}

void	Harl::_error(void){

	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	return ;
}
