/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:40:12 by albagarc          #+#    #+#             */
/*   Updated: 2023/08/25 12:51:15 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

Contact::Contact(void) {
		
	std::cout << "Constructor Contacts void called" << std::endl;
	return ;
}

// Contact::Contact(std::string n, std::string ln, std::string nck_n, std::string ph_n, std::string drk_scrt) : name(n), last_name(ln), nickname(nck_n), phone_number(ph_n), darkest_secret(drk_scrt) {
		
// 	std::cout << "Constructor Contacts called" << std::endl;
// 	std::cout << this->name << this->last_name << this->nickname << this->phone_number << this->darkest_secret << std::endl;
// 	return ;
// }

Contact::~Contact(){

	std::cout << "Destructor Contacts called" << std::endl;
	return ;
}

// me podria hacer un std::cin y cogerme el valor name
void	Contact::setName() {
	std::cout << "Add a name: " ;
	std::cin >> this->name;
}

void	Contact::setLastName() {
	std::cout << "Add a last name: " ;
	std::cin >> this->last_name;
}


void	Contact::setLastName() {
	std::cout << "Add a last name: " ;
	std::cin >> this->last_name;
}

void	Contact::getContact(void) const{
	
	std::cout << "Name: " << this->name << std::endl;
	std::cout << "Last name: " << this->last_name << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone number: " << this->phone_number << std::endl;
	std::cout << "Darkest secret: " << this->darkest_secret << std::endl;
	return ;
}