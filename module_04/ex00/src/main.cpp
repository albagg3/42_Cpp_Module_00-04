/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:06:37 by albagarc          #+#    #+#             */
/*   Updated: 2023/10/14 16:45:53 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main ()
{

	// const Animal* meta = new Animal();
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound(); //will output the cat sound!
	// j->makeSound();
	// meta->makeSound();
	// delete meta;
	// delete j;
	// delete i;

	// Cat Felix;
	// Cat Lopez;

	// std::cout << Felix.getType() << std::endl;

	// Felix = Lopez;

//*************WRONG ANIMAL************************//

	const WrongAnimal* meta = new WrongAnimal();
	const Animal* snoopy = new Dog();
	const WrongAnimal* Lopez = new WrongCat();
	std::cout << snoopy->getType() << " " << std::endl;
	std::cout << Lopez->getType() << " " << std::endl;
	Lopez->makeSound(); //wLopezll output the cat sound!
	snoopy->makeSound();
	meta->makeSound();
	delete meta;
	delete snoopy;
	delete Lopez;

return 0;

}
