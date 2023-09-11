/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:47:36 by albagarc          #+#    #+#             */
/*   Updated: 2023/09/07 18:09:44 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"


bool isNumber(const std::string& str) {
    for (size_t i = 0 ; i < str.length(); i++) {
        if (!std::isdigit(str[i])) {
            return false; 
        }
    }
    return true; 
}

int	main (void){

	std::string input_user;
	std::string contact_number;
	std::string response;
	PhoneBook agenda;
	while(std::cin)
	{
		std::cout << "* WELCOME TO YOUR PHONE BOOK *" << std::endl;
		std::cout << "Please select an option: " << std::endl;
		std::cout << "1.ADD" << std::endl;
		std::cout << "2.SEARCH" << std::endl;
		std::cout << "3.EXIT" << std::endl;
		std::cout << "Escribe una opcion: "; 
		std::cin >> input_user;
		if(!std::cin)
			break ;
		if(input_user == "1" || input_user == "ADD")
			agenda.addData();
		else if(input_user == "2" || input_user == "SEARCH")
		{
			agenda.printDataTable();
			std::cout << "Please, type the index of the user you are looking for: ";
			std::cin  >> contact_number;
			if(!std::cin)
				break ;
			if(std::stod(contact_number) >=1  && std::stod(contact_number) <= 8 && isNumber(contact_number))
				agenda.printContact(contact_number);
			else
			{
				std::cout << std::endl;
				std::cout << "<<<<<<<<<  THAT'S NOT A VALID NUMBER  >>>>>>>>>>>>" << std::endl << std::endl;
			}
		}
		else if(input_user == "3" || input_user == "EXIT")
		{
			std::cout << "Are you sure? yes/no: ";
			std::cin >> response;
			if(response == "yes")
				break;
			else
				std::cout << std::endl;
		}
		else
		{
			std::cout << std::endl;
			std::cout << "<<<<<<<<<  WRONG OPTION  >>>>>>>>>>>>" << std::endl << std::endl;
		}
	}
	return(0);
}