/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:40:50 by albagarc          #+#    #+#             */
/*   Updated: 2023/08/24 19:07:44 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"
#include <iostream>

PhoneBook::PhoneBook(){
	std::cout << "Constructor PhoneBook called" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(){
	std::cout << "Destructor called" << std::endl;
	return ;
}

void PhoneBook::add_data(){
	//mirar cuantos contactos hay si hay menos de 8 se añade al que te toque
	// y si no se borra el primero se mueven todo y se pone el ultimo
	contact.set_name();
	return ;
}