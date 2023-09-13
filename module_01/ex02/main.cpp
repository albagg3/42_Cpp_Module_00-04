/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:45:40 by albagarc          #+#    #+#             */
/*   Updated: 2023/09/13 18:04:21 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main () 
{
	std::string greeting = "HI THIS IS BRAIN";
	std::string *greeting_ptr = &greeting;
	std::string& greeting_ref = greeting;

	std::cout << "memory address of the string variable: " << &greeting << std::endl;
	std::cout << "memory address held by string pointer: " << greeting_ptr << std::endl;
	std::cout << "memory address held by string reference: " << &greeting_ref << std::endl;
	std::cout << std::endl;
	std::cout << "value of the string variable: " << greeting << std::endl;
	std::cout << "value pointed to by string pointer: " << *greeting_ptr << std::endl;
	std::cout << "value pointed to by string reference: " << greeting_ref << std::endl;
}