/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:06:37 by albagarc          #+#    #+#             */
/*   Updated: 2023/10/14 20:09:52 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main ()
{
	Dog*	snoopy = new Dog();
	Dog*	rex = new Dog();
	
	std::cout << GREEN << "ADD IDEA TO SNOOPY'S BRAIN" << RESET << std::endl;
	snoopy->addIdeaToBrain("hola");

	std::cout << RED << "SNOOPY'S IDEAS: " << RESET << std::endl;
	snoopy->getIdeaOfBrain();

	std::cout << GREEN << "We create superCan with a copy constructor" << RESET << std::endl;
	Dog superCan(*snoopy);

	std::cout << GREEN << "ADD IDEA TO SNOOPY'S BRAIN" << RESET << std::endl;
	snoopy->addIdeaToBrain("que pasa");

	std::cout << GREEN << "ADD IDEA TO SNOOPY'S BRAIN" << RESET << std::endl;
	snoopy->addIdeaToBrain("otra idea más");

	std::cout << RED << "SNOOPY'S IDEAS: " << RESET << std::endl;
	snoopy->getIdeaOfBrain();

	std::cout << RED << "SUPERCAN'S IDEAS: " << RESET << std::endl;
	superCan.getIdeaOfBrain();

	std::cout << RED << "Assignation operator used to equal snoopy to rex " << RESET << std::endl;
	*rex = *snoopy;

	std::cout << RED << "REX'S IDEAS: " << RESET << std::endl;
	rex->getIdeaOfBrain();

	std::cout << RED << "SNOOPY'S IDEAS: " << RESET << std::endl;
	snoopy->getIdeaOfBrain();

	std::cout << GREEN << "ADD IDEAS TO SNOOPY'S BRAIN" << RESET << std::endl;
	snoopy->addIdeaToBrain("Quiero un hueso de merienda");
	snoopy->addIdeaToBrain("lalallala");

	std::cout << RED << "REX'S IDEAS: " << RESET << std::endl;
	rex->getIdeaOfBrain();

	std::cout << RED << "SNOOPY'S IDEAS: " << RESET << std::endl;
	snoopy->getIdeaOfBrain();

	std::cout << RED << "SuperCan'S IDEAS: " << RESET << std::endl;
	superCan.getIdeaOfBrain();
	delete snoopy;
	delete rex;

	return 0;
}
