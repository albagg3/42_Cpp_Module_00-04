/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:09:30 by albagarc          #+#    #+#             */
/*   Updated: 2023/09/15 17:37:34 by albagarc         ###   ########.fr       */
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

void	Harl::complain(std::string level){
	if(level == "DEBUG")
		this->debug();
	else if(level == "INFO")
		this->info();
	else if(level == "WARNING")
		this->warning();
	else if(level == "ERROR")
		this->error();
	else
		std::cout << "Not a valid level " << std::endl;

}

//**************************PRIVATE*****************************************//

void	Harl::debug(void){
	std::cout	<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup"
				<< "burger. I really do!" << std::endl;
	return ;
}

void	Harl::info(void){

	std::cout 	<< "I cannot believe adding extra bacon costs more money. You didn’t put"
				<<"enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	return ;
}

void	Harl::warning(void){

	std::cout 	<< "I think I deserve to have some extra bacon for free. I’ve been coming for"
				<< "years whereas you started working here since last month." << std::endl;
	return ;
}

void	Harl::error(void){

	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	return ;
}
