/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:40:50 by albagarc          #+#    #+#             */
/*   Updated: 2023/09/07 18:21:46 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"
#include <iostream>
#include <limits>
#include <iomanip>

PhoneBook::PhoneBook(){

	return ;
}

PhoneBook::~PhoneBook(){

	return ;
}

void PhoneBook::addData(){
	
	int n_contacts;
	int arr_pos;
	
	n_contacts = this->_howManyContacts();
	if (n_contacts < 8)
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
	for (int i = 0; i < 8; i++)
	{
		this->_contacts[i].getContact();
	}
}

void	PhoneBook::printDataTable() const{
	for (int i = 0; i < 9; i++)
	{
		if (i == 0)
		{
			std::cout << "|";
			std::cout << std::left << std::setw(10) << "INDEX";
			std::cout << "|";
			std::cout << std::left << std::setw(10) << "NAME";
			std::cout << "|";
			std::cout << std::left << std::setw(10) << "LAST NAME";
			std::cout << "|";
			std::cout << std::left << std::setw(10) << "NICKNAME" ;
			std::cout << "|" << std::endl;
		}
		else
		{
			std::cout << "|";
			std::cout << std::right << std::setw(10) << i;
			std::cout << "|";
			std::cout << std::right << std::setw(10) << this->_resizeBigInput(_contacts[i - 1].getName());
			std::cout << "|";
			std::cout << std::right << std::setw(10) << this->_resizeBigInput(_contacts[i - 1].getLastName());
			std::cout << "|";
			std::cout << std::right << std::setw(10) << this->_resizeBigInput(_contacts[i - 1].getNickName());
			std::cout << "|" << std::endl;
		}	
	}
}

void	PhoneBook::printContact(std::string number) const {
	int election = std::stod(number);
	
	this->_contacts[election - 1].getContact();
}

//*********************PRIVATE**************************//

int PhoneBook::_howManyContacts() const{
	int counter;
	
	counter = 0;
	for(int i = 0; i < 8; i++)
	{
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

std::string	PhoneBook::_resizeBigInput(const std::string& input) const{
	
	std::string	str_resized;
	
	if(input.size() > 10)
	{
		str_resized = input.substr(0,8);
		str_resized.insert(8,".");
		return str_resized;	
	}
	return(input);
}