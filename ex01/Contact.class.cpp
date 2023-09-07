/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:40:12 by albagarc          #+#    #+#             */
/*   Updated: 2023/09/07 18:09:13 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"
#include <iomanip>

bool isSpace(const std::string& str) {
    for (size_t i = 0 ; i < str.length(); i++) {
        if (!std::isspace(str[i])) {
            return false; 
        }
    }
    return true; 
}

//**************************PUBLIC*****************************************//

//--------------------Constructor----Destructor----------------------------//
Contact::Contact(void) {
		
	return ;
}

Contact::~Contact(){

	return ;
}

//--------------------Setters----------------------------------------------//
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

//--------------------Getters----------------------------------------------//

const std::string&	Contact::getName()	const{
	
	return this->_name;
}

const std::string&	Contact::getLastName()	const{
	
	return this->_last_name;
}
const std::string& 	Contact::getNickName()	const{
	
	return this->_nickname;
}
const std::string&	Contact::getPhoneNumber()	const{
	
	return this->_phone_number;
}
const std::string&	Contact::getDarkestSecret()	const{
	
	return this->_darkest_secret;
}
void	Contact::getContact(void) const{
	
	std::cout << std::endl;
	std::cout << std::left << std::setw(16) << "Name: " << this->_name << std::endl;
	std::cout << std::left << std::setw(16) << "Last name: " << this->_last_name << std::endl;
	std::cout << std::left << std::setw(16) << "Nickname: " << this->_nickname << std::endl;
	std::cout << std::left << std::setw(16) << "Phone number: " << this->_phone_number << std::endl;
	std::cout << std::left << std::setw(16) << "Darkest secret: " << this->_darkest_secret << std::endl;
	std::cout << std::endl;
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
	while(std::cin && (input.length() == 0 || isSpace(input)) )
	{
		std::cout << instruction;
		std::getline(std::cin,input);
		if(!std::cin)
			break;
	}
	return input;
}

//**************************************************************************//