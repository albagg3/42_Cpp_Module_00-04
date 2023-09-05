/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:40:12 by albagarc          #+#    #+#             */
/*   Updated: 2023/08/28 19:10:29 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

//**************************PUBLIC*****************************************//

Contact::Contact(void) {
		
	std::cout << "Constructor Contacts void called" << std::endl;
	return ;
}

Contact::~Contact(){

	std::cout << "Destructor Contacts called" << std::endl;
	return ;
}

void	Contact::setName() {

	this->_name = this->_getInput("Add a name: ");	
}

void	Contact::setLastName() {

	this->_last_name = this->_getInput("Add a last_name: ");	
}

void	Contact::setNickName() {

	this->_nickname = this->_getInput("Add a nickname: ");	
}

void	Contact::setPhoneNumber() {

	this->_phone_number = this->_getInput("Add a phone number: ");	
}

void	Contact::setDarkestSecret() {

	this->_darkest_secret = this->_getInput("Add a dark secret: ");	
}


void	Contact::getContact(void) const{
	
	std::cout << "Name: " << this->_name << std::endl;
	std::cout << "Last name: " << this->_last_name << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone number: " << this->_phone_number << std::endl;
	std::cout << "Darkest secret: " << this->_darkest_secret << std::endl;
	return ;
}

bool	Contact::hasInfo(Contact person) const{
	if(person._name.length() != 0)
		return true;
	else
		return false;
}


//**************************PRIVATE*****************************************//

std::string Contact::_getInput(std::string instruction)
{
	std::string	input;
	while(input.length() == 0)
	{
		std::cout << instruction;
		std::getline(std::cin,input);
	}
	return input;
}

//**************************************************************************//