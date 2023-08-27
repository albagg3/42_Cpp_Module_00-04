/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:47:36 by albagarc          #+#    #+#             */
/*   Updated: 2023/08/25 12:49:36 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"

int	main (void){

	// Contact first("Olivia", "Gago", "Olivixx","6002d3", "no_tengo" );
	// Contact second("Arturo", "Gago", "Arturixx","7891123", "soy_superman" );
	// Contact third("Micaela", "Martinez-Carlon", "Micaelixx","00000", "soy un bebé" );
	std::string input_user;
	PhoneBook agenda;
	
	std::cout << "WELCOME TO YOUR PHONE BOOK" << std::endl;
	std::cout << "Please select an option: " << std::endl;
	std::cout << "1.ADD" << std::endl;
	std::cout << "2.SEARCH" << std::endl;
	std::cout << "3.EXIT" << std::endl;
	std::cin >> input_user;
	if(input_user == "1" || input_user == "ADD")
		agenda.addData();	
	// first.getContact();
	// PhoneBook agenda;
	
	// std::string name(first.name);
	// std::cout << std::setw(10) << name.size() << "77" << std::endl;
	
	return(0);
}