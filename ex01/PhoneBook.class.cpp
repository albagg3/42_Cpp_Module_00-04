/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:40:50 by albagarc          #+#    #+#             */
/*   Updated: 2023/09/07 14:44:25 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"
#include <iostream>
#include <limits>

PhoneBook::PhoneBook(){
	std::cout << "Constructor PhoneBook called" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(){
	std::cout << "Destructor called" << std::endl;
	return ;
}

void PhoneBook::addData(){
	//mirar cuantos contactos hay si hay menos de 8 se añade al que te toque
	// y si no se borra el primero se mueven todo y se pone el ultimo
	int n_contacts;
	int arr_pos;
	
	n_contacts = this->_howManyContacts();
	if(n_contacts < 8)
		arr_pos = n_contacts ;
	else
	{
		this->_delOldContact();
		arr_pos = 7;
	}
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	_contacts[arr_pos].setName();
	_contacts[arr_pos].setLastName();
	_contacts[arr_pos].setNickName();
	_contacts[arr_pos].setPhoneNumber();
	_contacts[arr_pos].setDarkestSecret();
	return ;
}

void	PhoneBook::getAgendaNames() const{
	for(int i = 0; i < 8; i++)
	{
		this->_contacts[i].getContact();
	}
}
//*********************PRIVATE**************************//

int PhoneBook::_howManyContacts() const{
	int counter;
	
	counter = 0;
	for(int i = 0; i < 8; i++){
		if(this->_contacts[i].hasInfo(this->_contacts[i]))
			counter++;
	}
	return(counter);
}

void	PhoneBook::_delOldContact(){

	for(int index = 1 ; index < 8 ; index++)
	{
		this->_contacts[index - 1] = this->_contacts[index]; 
	}
}