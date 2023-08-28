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

Contact::Contact(void) {
		
	std::cout << "Constructor Contacts void called" << std::endl;
	return ;
}

Contact::~Contact(){

	std::cout << "Destructor Contacts called" << std::endl;
	return ;
}

std::string _getInput()
{
	std::string	input;
	while(input.length() == 0)
	{
		std::getline(std::cin,input);
	}
	return input;
}

// me podria hacer un std::cin y cogerme el valor name
void	Contact::setName() {
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	while(this->_name.length() == 0 || this->_name=="")
	{
		std::cout << "Add a name: ";
		std::getline(std::cin,this->_name);
	
	}
	std::cout << this->_name <<std::endl;
}

//getline


void	Contact::setLastName() {
	std::cout << "Add a last name: " ;
	std::cin >> this->_last_name;
	
}

void	Contact::getContact(void) const{
	
	std::cout << "Name: " << this->_name << std::endl;
	std::cout << "Last name: " << this->_last_name << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone number: " << this->_phone_number << std::endl;
	std::cout << "Darkest secret: " << this->_darkest_secret << std::endl;
	return ;
}