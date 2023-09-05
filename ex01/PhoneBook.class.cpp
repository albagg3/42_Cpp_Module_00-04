/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:40:50 by albagarc          #+#    #+#             */
/*   Updated: 2023/08/28 18:20:49 by albagarc         ###   ########.fr       */
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
	
	n_contacts = this->_howManyContacts(this->_contacts);
	if(n_contacts < 8)
		arr_pos = n_contacts + 1;
	else
	{
		this->_delOldContact(this->_contacts);
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


//*********************PRIVATE**************************//

int PhoneBook::_howManyContacts(Contact contacts[]) const{
	int counter;
	for(int i = 0; i < 8; i++){
		if(contacts[i].hasInfo(contacts[i]))
			counter++;
	}
	return(counter);
}

void	PhoneBook::_delOldContact(Contact contacts[]){

	for(int index = 1 ; index < 8 ; index++)
	{
		contacts[index - 1] = contacts[index]; 
	}
}